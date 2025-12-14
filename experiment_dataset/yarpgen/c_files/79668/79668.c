/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 += (arr_1 [i_0]);
            var_16 = (arr_0 [i_0] [i_0]);
        }
        var_17 = (arr_0 [i_0 + 1] [i_0 + 1]);
        var_18 = ((~((-881146454 ? 1 : (-2147483647 - 1)))));
        var_19 = (max(var_19, (max((arr_2 [i_0]), (((max((arr_0 [i_0] [i_0]), (arr_2 [i_0]))) ^ (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, -1189609022));

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_21 |= ((-(arr_4 [i_2] [i_2])));
            var_22 = (min(var_22, 0));
            var_23 = (9223372036854775807 & var_5);
            var_24 = ((~(arr_1 [i_2])));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_25 = (((arr_10 [i_2] [i_2 + 1] [i_3 + 1]) * (arr_10 [i_2 + 1] [i_2 + 1] [i_3 + 4])));
                    var_26 = (arr_11 [i_2]);
                }
                var_27 = (max(var_27, -2147483647));
                var_28 = (min(var_28, var_3));
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_29 = ((arr_16 [i_2]) ? (((arr_5 [i_2] [i_2]) * (arr_7 [i_2] [i_2]))) : (arr_11 [i_2]));
            var_30 |= (arr_8 [i_6]);
        }
    }
    var_31 -= ((var_1 ? -1516674770 : (max(((min(var_9, (-127 - 1)))), var_7))));
    var_32 *= var_7;
    #pragma endscop
}
