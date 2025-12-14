/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_9 ? (!var_5) : 1008)), var_5));
    var_11 ^= var_5;
    var_12 = (((var_4 != 8136264231592119249) & (max(var_1, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((var_0 & (max(var_2, var_6))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] = 18446744073709551592;
                    var_13 = (((var_2 >= var_5) < 15081424140656122573));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 -= (var_4 + var_1);
                                var_15 = -1486527022014613542;
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_5] [i_5 + 1] = (16960217051694938065 ^ 2160);
                    var_16 &= (21 * var_7);

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_20 [i_0 - 1] [i_0 - 1] [i_1] [i_6] |= ((12909 ? var_2 : (~18446744073709551611)));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_6] [i_7] = (var_9 <= 62249);
                            var_17 = (var_5 % var_2);
                        }

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_18 ^= ((var_2 ? (var_6 | var_8) : 24));
                            var_19 &= ((((var_8 ? 2157 : 50))) ? var_6 : (var_8 % 23));
                            var_20 = 20263;
                            var_21 = (((var_9 ? var_4 : var_3)));
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_22 -= (1694038917090300149 > 37);
                            var_23 = (!var_2);
                            var_24 = (!-12488229227934171956);
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_36 [i_0] [i_1] [i_5 - 2] [i_0] [i_10] [i_0] [i_0] = (var_8 / var_4);
                            arr_37 [i_0] [i_0] = (var_2 ? var_5 : 16960217051694938082);
                            var_25 = (var_1 | ((18446744073709551597 ? var_3 : 18446744073709551579)));
                        }
                        var_26 = ((((var_7 << (var_4 - 13894))) != ((1486527022014613541 ? 8 : var_3))));
                    }
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        arr_40 [i_0] [i_0] [i_0] [12] = ((((max(-var_9, var_2))) ? (~15029691340769745620) : ((var_2 ? (max(24576, 22)) : (max(18446744073709551614, var_7))))));
                        arr_41 [i_0] [i_1] [i_0] [i_11 + 1] = ((min(((49152 ? var_0 : var_6)), var_5)));
                        var_27 = (max(2503506602347235071, 24563));
                    }
                }
                arr_42 [i_0] [i_0] = (!var_7);
            }
        }
    }
    var_28 = min(var_6, var_2);
    #pragma endscop
}
