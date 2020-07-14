#include "global.h"
void overkill()
{
    for(int i=0;i<jobslen;i++)
    {
        if(jobs[i].status==1)
        {
            kill(jobs[i].id,9);          // sends signal 9 to every process
            jobs[i].status=0;
        }
    }
    return ;
}
