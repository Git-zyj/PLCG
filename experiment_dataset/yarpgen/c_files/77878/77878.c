/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (((~(8795018269565274821 != 548682072064))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                var_16 = (max((max(var_9, 548682072064)), 18446744073709551615));
                                var_17 = (((18446743525027479552 ? 548682072077 : 18446744073709551607)));
                            }
                            var_18 *= ((~(-127 - 1)));

                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_19 *= ((-(var_6 ^ var_2)));
                                arr_15 [i_2] = 18446744073709551610;
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_0] = 18446744073709551610;
                var_20 = ((~((var_6 & (-9223372036854775807 - 1)))));

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_21 = (((31 == var_14) == 9223372036854775803));
                    arr_20 [i_0] [i_0] = 224;
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_22 ^= (((~var_14) ? (24350 != 1) : ((2035869312516431246 ? 124 : 548682072064))));
        var_23 = (max(1414874843, 548682072063));
    }
    #pragma endscop
}
