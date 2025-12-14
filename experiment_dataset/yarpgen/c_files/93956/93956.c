/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += -5194752772006629705;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = ((~(-2006077745 | -3)));
                arr_6 [i_0] [i_0 - 1] [i_0] = 3014877510933407717;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_2] = (arr_3 [i_1]);
                    arr_11 [i_0 + 1] [i_1] [i_1] [i_2] = ((((~(arr_4 [i_0 + 2]))) - 227));
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_21 *= (((arr_9 [8] [i_1] [i_0]) != 3471271310));
                    var_22 = (min(823695986, 353200272));
                }
                arr_16 [i_0] [i_0] [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
