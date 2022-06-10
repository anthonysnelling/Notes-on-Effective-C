
struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
}sigline, *sigline_p;

int main(void){
    sigline.signum = 5;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard");

    sigline_p = &sigline;
    // if you have a structure, you can point to one of it's members with the -> operator
    sigline_p->signum = 5;
    strcpy(sigline_p->signame, "SIGINT");
    strcpy(sigline_p->sigdesc, "Interrupt from keyboard");
}

