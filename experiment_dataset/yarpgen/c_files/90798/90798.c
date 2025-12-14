/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_16 = 1;
        var_17 = (((((arr_1 [i_0]) <= var_10)) ? ((((4294967277 <= (arr_1 [i_0]))) ? (min(var_1, (arr_1 [12]))) : (max(1, (arr_1 [i_0]))))) : ((max(159935206, var_15)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_18 ^= (((arr_11 [i_1] [i_2 + 2] [i_5 - 2] [i_3]) ? 864691128455135232 : (arr_11 [i_5] [i_2 - 1] [i_5 - 1] [i_3])));
                            arr_15 [i_2] [i_1] [i_1] [1] [i_3] [i_4] [16] = (((arr_5 [i_2 + 1] [i_2 + 3]) >> (18446744073709551615 - 18446744073709551595)));
                        }
                    }
                }
            }

            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                var_19 = (((((arr_4 [i_1]) ? 4 : 0)) != var_12));
                var_20 = (max(var_20, (!1)));
            }
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            var_21 *= (((arr_20 [1] [i_7 - 1]) ? (arr_8 [8] [0] [8]) : (arr_8 [12] [i_7 + 1] [12])));
            var_22 = (max(var_22, (arr_19 [i_7 - 1] [i_7 - 1] [i_7 + 1])));
        }
        var_23 = (((((arr_0 [5]) & var_11)) - (arr_12 [i_1] [i_1] [4] [i_1])));
        arr_22 [i_1] = ((var_9 && 15593) | 76);
    }
    var_24 = (max(var_24, (min((((~(max(3670016, 0))))), (max((-904694454 == 194), (min(var_5, 159935206))))))));
    #pragma endscop
}
