/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = (((((36 ? var_5 : (arr_4 [i_0] [i_1] [i_1])))) ? (((23254 >= (arr_4 [i_0] [i_0] [i_2 - 1])))) : (!42281)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_14 ^= (min((~23254), (max(-255, (min((arr_2 [i_0 - 1] [i_3]), (arr_1 [i_3])))))));
                        var_15 ^= 0;
                        arr_9 [i_0] [i_0] [5] [i_0] [5] [i_0] = -5285;
                        arr_10 [i_0] [i_0] [i_0] [i_0] = 23254;
                    }

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_16 = 255;
                        var_17 = (!var_4);
                        arr_14 [i_0] [i_0] [i_0] [i_4] [i_0] [i_2 - 1] = (min((((arr_7 [i_0 + 3] [i_1] [i_2 - 1] [i_2]) ? (arr_3 [i_2 - 1] [i_4 + 2]) : 255)), ((min(42282, 0)))));
                        arr_15 [i_0] [i_0] [i_2 - 1] [i_2 - 1] = 15204651123154710125;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_18 ^= ((202 ? (0 / 110) : 42282));
                        var_19 = 145;
                        var_20 = ((146 || (((((arr_5 [i_2]) + 226))))));
                        var_21 ^= (max((((-(var_5 - -27225)))), (arr_8 [i_0] [i_1] [i_2] [i_5] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_22 ^= -1554490186;
                        var_23 ^= ((!(arr_5 [i_2 + 1])));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_24 ^= (((((~(arr_3 [i_0 + 3] [i_2 - 1])))) ? (((~146) ? (arr_19 [i_0] [2] [i_2] [2]) : (~42281))) : (((((min(-9, 110))) ? (arr_13 [i_0 + 2] [i_1] [i_1] [i_2] [i_7] [i_0 + 2]) : (arr_16 [i_0 + 4]))))));
                        var_25 = (min(var_8, (arr_0 [i_0])));
                        arr_24 [i_0] [i_7] = 12984;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_2] [i_2] [i_9] = (~var_8);
                                arr_31 [i_0] = ((-(((!((15668402817431184326 < (arr_17 [i_0] [i_0] [i_0] [i_8] [i_9]))))))));
                                var_26 = 52551;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_27 ^= (~117778510);
                                var_28 = 2778341256278367289;
                            }
                        }
                    }
                    var_29 ^= (max(var_11, ((max(183, var_12)))));
                    arr_44 [i_10] [i_10] = (((((((min(2778341256278367290, -26373))) ? (23253 / 28008) : (2778341256278367289 - 44991)))) ? (((127 ? 255 : -27))) : (max(-58, (max(1735945417, 18446744073709551615))))));
                    var_30 ^= var_5;
                }
            }
        }
    }
    #pragma endscop
}
