/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((min(var_11, (~var_17)))) ? var_10 : ((var_9 ^ (~var_15))));
    var_21 *= max(((var_7 ? -23 : (!var_4))), var_19);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((((((arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2]) | (arr_5 [i_3 + 1] [i_3 + 1] [i_2] [i_1])))) ? (min((~23), var_12)) : (min(var_5, (min(-65, 36)))))))));
                                arr_12 [i_1] [i_3 + 1] [i_2] [i_1] [i_1] = (~(((arr_1 [i_3 + 1]) ? (arr_1 [i_3 + 1]) : (arr_1 [i_3 + 1]))));
                                var_23 = ((!(--1946)));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = (((((~(min(var_8, var_10))))) ? var_0 : ((((arr_3 [i_1] [i_1]) <= (arr_3 [i_1] [i_1]))))));

                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    var_24 += ((14 ? 43 : 39));
                    var_25 = (((((arr_5 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 3]) * var_18)) >= ((max((arr_7 [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_5 - 2] [i_5 + 2] [i_5 - 1]), (arr_4 [i_0] [i_5 - 3] [i_5 + 2] [i_1]))))));

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_26 += ((~(max((max(4294967277, 18446744073709551613)), (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                        var_27 = ((~(max(40, -2110428079))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((~(var_13 & var_1)));
                            arr_23 [i_0] [i_1] [i_5 - 1] [i_6 - 1] [i_7] [i_1] = (~var_14);
                            arr_24 [i_0] [i_1] [i_0] [i_0] = (!var_5);
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_5 - 3] [i_5 + 1] [i_1] [i_6 - 1] [i_8 - 2] = ((-26 ? 9223372036854775807 : 402208726));
                            var_28 = (max(var_28, var_1));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = -2407963030;
                            var_29 = (18446744073709551580 ? 12495171760243830637 : 425305352);
                        }
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_30 = (((12495171760243830637 >= 2) ? ((-96 ? var_4 : -11753)) : (((~1) % -8915442243810880972))));
                        var_31 -= ((((((var_2 >= (arr_25 [i_9 + 3] [i_9 + 2] [i_5 - 2]))))) % ((-8710554690400792144 ? (3923599794641140627 || 6196) : 18446744073709551599))));
                        arr_32 [i_0] [i_1] [i_1] [i_0] [i_9 + 1] |= ((-18 ? 4905273226073885093 : 5951572313465720969));
                    }
                }
                var_32 ^= max((~var_1), var_6);
            }
        }
    }
    #pragma endscop
}
