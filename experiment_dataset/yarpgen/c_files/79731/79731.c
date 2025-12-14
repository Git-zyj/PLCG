/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (((!var_2) == ((var_3 ? var_9 : 5376488110371392949))));
        arr_2 [i_0] = ((var_6 ? ((20177 ? 45358 : -680325097)) : 45360));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = (((!20178) | ((25119 ? ((8351806954843760259 ? 20188 : 10094937118865791343)) : 10094937118865791332))));
                    arr_14 [i_1] [i_1] [i_3] = 17432;
                }
            }
        }
    }
    #pragma endscop
}
