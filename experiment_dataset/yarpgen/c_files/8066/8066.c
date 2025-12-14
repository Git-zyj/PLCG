/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = ((-(arr_1 [12])));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [1] [11] [12] [i_0] [1] = 1;
                                var_20 = (((var_11 - (arr_5 [i_1 - 3] [i_2 - 1] [i_4 - 1] [i_4]))));
                                var_21 = ((((var_13 - 4294967295) * (arr_9 [i_0] [i_1]))));
                                var_22 = min(((1 ? 11568 : -666012269)), (min(57, 1900963322)));
                                var_23 = (max(var_23, ((((((arr_4 [i_1 - 1]) ? (arr_6 [i_1 + 1] [i_2 - 1] [i_4 - 1] [i_1 + 1]) : (((666012271 ? (arr_3 [i_0] [1] [i_0]) : 1)))))) ? ((((var_1 < (arr_8 [i_0]))) ? (((-666012269 >= (arr_2 [0])))) : (arr_5 [i_1] [i_3] [i_2] [i_1]))) : (arr_10 [2] [i_0] [i_0] [i_2] [i_0] [2])))));
                            }
                        }
                    }
                    var_24 *= arr_4 [i_0];
                    var_25 = 1650363389;
                    var_26 = (min(var_26, (((((min((arr_4 [i_0 + 1]), (arr_9 [i_0 - 4] [i_0])))) ? 634353779 : (min((arr_4 [i_0]), (~-40))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_27 ^= 127;
                    var_28 = (arr_9 [i_1 - 2] [i_1]);
                    arr_16 [12] [i_0] [i_0] = arr_0 [i_0];
                    var_29 = (max(var_29, var_8));
                    var_30 = (~105);
                }
            }
        }
    }
    var_31 = (var_12 ^ -114);
    var_32 &= var_17;
    var_33 += ((var_5 * var_4) == ((((((var_2 ? var_2 : var_6))) && var_1))));
    #pragma endscop
}
