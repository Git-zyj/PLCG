/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_1, ((975128934725051664 ? var_0 : var_16))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((-32742 >> (8622132862927121360 - 8622132862927121340)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                arr_9 [i_2] [i_2] [i_2] = (~-8622132862927121347);
                arr_10 [i_2] [i_2] = var_2;

                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_19 += var_3;
                    var_20 |= var_10;
                }
                var_21 |= (max((min(1122819208, (((-5755301686857949251 + 9223372036854775807) << (arr_12 [17] [i_0] [i_1] [i_2 - 1]))))), ((max(1, (arr_5 [i_1] [i_1]))))));
                arr_14 [i_0] [i_1] [i_2] [i_1] = 52403;
            }
            arr_15 [1] = (!var_3);
            arr_16 [16] [i_1] [18] = var_9;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_20 [1] = (((arr_5 [i_0] [i_4]) >> (((arr_5 [i_0] [7]) - 22798))));
            arr_21 [i_0] [i_0] |= 0;
        }
    }
    #pragma endscop
}
