/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [7] [0] [7] = var_8;
                arr_5 [i_0] [i_0] [i_1] = ((!(arr_2 [i_0])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (~0);
                    arr_10 [i_0] = ((-(!-1576512364)));
                    arr_11 [i_2] [i_1] [i_0] = (-3631836634640711881 != ((-(arr_6 [i_0] [6]))));
                    arr_12 [i_1] [i_1] = (+-1576512364);
                }
            }
        }
    }
    var_12 = (!var_10);
    #pragma endscop
}
