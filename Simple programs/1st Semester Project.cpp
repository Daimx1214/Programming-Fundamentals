#include <stdio.h>

const int totalRooms=100;

struct Student{
    int id;
    char name[50];
    int age;
};

struct Room{
    int number;
    int occupied;
    struct Student s;
};

struct Room rooms[totalRooms];

void welcome(){
    printf("\n===== HOSTEL MANAGEMENT SYSTEM =====\n");
}

void initRooms(){
    for(int i=0;i<totalRooms;i++){
        rooms[i].number=i+1;
        rooms[i].occupied=0;
    }
}

void showStatus(){
    int used=0;

    for(int i=0;i<totalRooms;i++){
        if(rooms[i].occupied)
            used++;
    }

    printf("\nTotal Rooms:%d",totalRooms);
    printf("\nOccupied:%d",used);
    printf("\nVacant:%d\n",totalRooms-used);
}

void allocateRoom(){
    int roomNo;
    printf("\nEnter Room Number(1-%d):",totalRooms);
    scanf("%d",&roomNo);

    if(roomNo<1||roomNo>totalRooms){
        printf("Invalid room!\n");
        return;
    }

    if(rooms[roomNo-1].occupied){
        printf("Room already occupied!\n");
        return;
    }

    struct Student stu;

    printf("Enter ID:");
    scanf("%d",&stu.id);

    printf("Enter Name:");
    scanf(" %[^\n]",stu.name);

    printf("Enter Age:");
    scanf("%d",&stu.age);

    rooms[roomNo-1].s=stu;
    rooms[roomNo-1].occupied=1;

    printf("Room %d allocated to %s\n",roomNo,stu.name);
}

void viewRoom(){
    int roomNo;
    printf("\nEnter Room Number:");
    scanf("%d",&roomNo);

    if(roomNo<1||roomNo>totalRooms){
        printf("Invalid room!\n");
        return;
    }

    if(!rooms[roomNo-1].occupied){
        printf("Room is vacant\n");
        return;
    }

    struct Student stu=rooms[roomNo-1].s;

    printf("\nRoom %d Details:\n",roomNo);
    printf("ID:%d\n",stu.id);
    printf("Name:%s\n",stu.name);
    printf("Age:%d\n",stu.age);
}

void viewAllRooms(){
    printf("\nAll Rooms:\n");

    for(int i=0;i<totalRooms;i++){
        printf("Room %d:",rooms[i].number);

        if(rooms[i].occupied)
            printf("Occupied(%s)\n",rooms[i].s.name);
        else
            printf("Vacant\n");
    }
}

void disallocateRoom(){
    int roomNo;
    printf("\nEnter Room Number:");
    scanf("%d",&roomNo);

    if(roomNo<1||roomNo>totalRooms){
        printf("Invalid room!\n");
        return;
    }

    if(!rooms[roomNo-1].occupied){
        printf("Room already vacant\n");
        return;
    }

    printf("%s removed from Room %d\n",
           rooms[roomNo-1].s.name,roomNo);

    rooms[roomNo-1].occupied=0;
}

void showMenu(){
    printf("\n==========MAIN MENU==========\n");
    printf("1.Show Status\n");
    printf("2.Allocate\n");
    printf("3.View a Room\n");
    printf("4.ViewAll Rooms\n");
    printf("5.Disallocate a Room\n");
    printf("6.Exit\n");
    printf("============================\n");
    printf("Enter choice:");
}

int main(){
    initRooms();
    welcome();
    int choice;
    do{
        showMenu();
        scanf("%d",&choice);

        switch(choice){
            case 1:
                showStatus();
                break;
            case 2:
                allocateRoom();
                break;
            case 3:
                viewRoom();
                break;
            case 4:
                viewAllRooms();
                break;
            case 5:
                disallocateRoom();
                break;
            case 6:
                printf("\nThank you for using our Hostel. Have a nice day\n");
                break;
            default:
                printf("\nInvalid choice!Please enter 1-6\n");
        }
    }while(choice != 6);
    return 0;
}