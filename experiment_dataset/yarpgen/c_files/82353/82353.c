/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_15 = (min(var_15, ((((arr_4 [i_0] [i_0] [i_1]) ? var_1 : 0)))));
            var_16 = (((arr_3 [i_0] [i_1]) | var_14));
            arr_5 [24] [i_0] = (var_9 > 255);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_17 *= (~255);
            var_18 = (min(var_18, ((((arr_0 [i_0]) ^ (arr_0 [i_0]))))));
            var_19 = ((-((var_1 ? (arr_7 [i_0]) : 0))));
            var_20 = 0;
            arr_8 [i_2] [15] [24] = (18446744073709551615 & (1 ^ 65524));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_3] = (((arr_10 [i_3]) ? (arr_6 [i_0] [7] [4]) : var_5));
            arr_12 [i_0] = (((arr_6 [i_0] [i_3] [i_3]) ? ((var_7 ? 0 : 23)) : 112));
            var_21 = (min(var_21, var_14));

            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                var_22 = ((0 % (arr_14 [i_0] [i_3] [i_4 + 1] [i_0])));
                var_23 *= ((~(((arr_15 [i_4 + 1] [1] [1]) ? 224 : (arr_1 [i_0])))));
            }
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_20 [4] |= (+-2305843004918726656);
            var_24 *= (var_10 * 0);
        }
        arr_21 [i_0] = (0 < 48);
        var_25 = (arr_17 [i_0] [i_0]);
    }
    var_26 += (((((var_7 ? ((var_1 ? var_10 : var_13)) : (((127 ? var_2 : -1)))))) ? var_10 : ((max(var_5, var_6)))));
    var_27 += ((-var_2 | -13) ? (((min(65535, 247)))) : var_9);
    #pragma endscop
}
