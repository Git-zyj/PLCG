/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((15329 ? var_11 : var_19)) == ((var_15 ? var_7 : var_11)))));
    var_21 = (((((var_4 ? -var_9 : var_18))) ? var_6 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_22 = (((((7 ? ((((arr_0 [i_0] [i_1 - 1]) ? 48724 : (arr_1 [i_2])))) : ((var_6 ? 72 : var_10))))) ? (~-10692) : ((((arr_5 [i_1]) >> (((((arr_0 [i_0] [i_0]) - (arr_3 [i_0] [i_1] [i_2]))) - 31773)))))));
                    var_23 = (min(var_23, (((((((-(arr_0 [i_1 - 1] [i_1 - 1]))))) ? ((min(((65535 ? 1 : 364068438)), (((var_15 ? 65535 : (arr_1 [i_0]))))))) : ((-30925 ? 0 : 9019538225430837401)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_24 = (min(((((((arr_9 [i_0 - 1] [i_2] [i_3] [i_4]) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : 32768))) ? var_16 : (arr_9 [i_0] [i_0] [i_0] [i_0]))), (arr_6 [i_2] [i_2] [i_1])));
                                arr_15 [i_1] [i_3] = (max((((48341 / 18446744073709551612) | ((min((arr_3 [i_0] [i_1 - 1] [i_2]), var_5))))), ((((((arr_10 [i_3] [i_2] [i_1] [i_0 + 2]) <= 3267767466)) ? (((1995 ? 6089 : -10692))) : ((var_18 ? (arr_7 [i_0 - 1] [i_0 + 2] [i_0 - 2]) : var_15)))))));
                                var_25 = (min(var_13, (((((var_8 ? 65535 : var_16))) ? (arr_10 [i_0 - 1] [i_0 - 3] [i_0 - 4] [i_0 - 2]) : (min((arr_3 [i_0] [i_0] [i_0 - 2]), var_18))))));
                            }
                        }
                    }
                }
                var_26 ^= (min((((((arr_12 [6] [6] [i_1] [i_1 - 1] [i_1 - 1]) ? var_6 : var_18)) % (arr_13 [i_0]))), ((((var_5 > var_7) ? ((var_14 ? var_11 : (arr_10 [i_0] [i_1] [i_0] [i_0]))) : (arr_13 [i_0 - 3]))))));
                var_27 = (arr_14 [i_0] [i_1] [i_1] [i_1 - 1]);
            }
        }
    }
    var_28 += (((min(var_5, var_4))));
    #pragma endscop
}
