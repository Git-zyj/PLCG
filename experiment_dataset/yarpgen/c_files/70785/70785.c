/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] = ((~(~-18446744073709551615)));
                            var_11 &= 7489035706862914582;
                        }
                    }
                }
                var_12 = ((!((((arr_2 [i_1]) * (!4294967295))))));
                arr_11 [i_0] [i_1] = 1336754676;
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_13 *= ((var_4 ? ((10957708366846637034 ? (((arr_13 [i_4] [i_4]) ? 1168215608 : (arr_13 [i_4] [i_4]))) : 32767)) : (arr_13 [i_4] [i_4])));
        var_14 = ((7489035706862914582 ^ ((((((-(arr_12 [i_4]))) > (((((arr_13 [i_4] [1]) < (arr_14 [i_4] [i_4])))))))))));
        var_15 = ((-((-(arr_14 [i_4] [i_4])))));
    }
    var_16 = (!var_10);
    var_17 = var_1;
    var_18 = (var_6 <= var_7);
    #pragma endscop
}
