#ifndef otdl_
#include "title.c"
#include "composition.c"
#include "date.c"
#define otdl_
struct otdel{
    struct title title;
    struct composition composition;
    struct date date;
};
#endif
