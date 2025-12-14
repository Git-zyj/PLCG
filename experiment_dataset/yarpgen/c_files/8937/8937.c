/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_14 &= ((((((3604016708 >= (arr_2 [i_0])))) >> (((arr_2 [i_0]) << (arr_2 [i_0]))))) != ((32420 + (arr_0 [i_0]))));
        arr_4 [i_0] = (min((((arr_0 [i_0]) ^ (((((arr_0 [i_0]) + 2147483647)) << (((arr_1 [i_0] [i_0]) - 22626)))))), ((min(1, -13890)))));
    }
    var_15 = 3137272844;
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] = ((((((((-(arr_11 [i_1] [i_1] [i_1] [i_1])))) ? 1 : (min(3604016709, 1))))) == (arr_12 [i_1] [i_1] [i_1])));
                                var_16 = ((~((((min(var_7, (arr_13 [i_1])))) ? 4294967287 : var_4))));
                                var_17 = ((-((~(((arr_6 [i_1]) << (var_5 - 29400)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((14990370824496551787 ? 14990370824496551787 : 1023)) + -64)));
                                var_18 ^= ((((((arr_11 [i_2] [i_2] [i_2] [i_2]) ? (arr_6 [i_1]) : (arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]))) * (((2889009961 == (arr_6 [i_1])))))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_19 |= (((arr_5 [i_2] [i_3]) - 1));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_6 [i_1]) ^ (((arr_20 [i_3] [i_3]) ? (arr_10 [i_9]) : 137438822400)))))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_28 [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4]);
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] = arr_12 [i_3] [i_3] [i_1];
                        }
                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            var_21 = ((((max(((-(arr_26 [i_3] [i_3] [i_3]))), var_11))) || 15));
                            var_22 = ((11422 != (min(10159833893655581715, 1023))));
                        }
                        arr_35 [i_1] = ((-((-((~(arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                        arr_36 [i_1] [i_1] [i_1] [i_1] = (min((arr_17 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1]), 18446744073709551601));
                        var_23 *= (arr_12 [i_1] [i_1] [i_3]);
                    }
                    for (int i_11 = 4; i_11 < 16;i_11 += 1)
                    {
                        arr_40 [i_1] [i_1] = (min(((((4294967295 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) : 32763)) % -56)), (arr_20 [i_1] [i_1])));
                        var_24 = (arr_37 [i_1] [i_1]);
                        var_25 ^= (arr_16 [i_1] [i_1] [i_1] [i_1] [i_3]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
