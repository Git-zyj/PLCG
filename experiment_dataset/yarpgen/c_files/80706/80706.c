/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, ((((arr_0 [i_0] [12]) | var_3)))));
        var_13 &= ((max((((-3221443846172475544 ? 96 : 14))), 3221443846172475561)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (min((((var_2 != (!15807643993413786165)))), var_8));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] [i_1] = (arr_5 [i_1]);
            arr_10 [i_1] = (arr_6 [i_1] [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] [i_1] [i_1] = ((-(((2147483627 || (arr_5 [i_1]))))));
            arr_14 [i_1] [i_3] = 1;
            var_15 = (-1385121311544506807 & 6721479205051230917);
            arr_15 [i_1] = (((!14) * (!var_10)));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] = (min((arr_22 [i_6] [i_5] [i_5] [i_1] [i_1] [i_1]), (min(((min(-2147483627, var_0))), ((var_9 ? 10760 : 0))))));
                        var_16 = 1;
                    }
                }
            }

            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                arr_28 [i_1] [i_4] [10] = ((((!(arr_18 [i_1] [i_1] [13])))));
                arr_29 [i_1] [i_1] [i_1] [i_7] = min((min((arr_18 [i_1] [i_4] [i_7]), 254)), (((arr_4 [i_1] [8]) << (var_1 - 109))));
            }
        }
    }
    var_17 &= var_5;
    #pragma endscop
}
