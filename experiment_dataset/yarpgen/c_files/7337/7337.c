/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((((min(var_0, 64254))) ? (~17769) : (~9805151283732649392)))) ? var_6 : var_7);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = var_10;
                    var_13 ^= (min((((arr_7 [20] [i_0] [18] [10]) > var_3)), (((((127 ? (arr_5 [i_1] [i_2]) : 2181431069507584))) && var_7))));
                    arr_8 [1] [1] [i_1] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 1] [i_1 + 1] [i_2] [i_1] [i_4] = 17757;
                                arr_15 [i_1] [i_2] [20] [2] = var_5;
                                var_14 = (((arr_11 [i_0] [i_1] [i_1] [i_1] [i_0]) * (((((arr_3 [i_1 + 1]) && var_5))))));
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    var_15 |= ((((((((arr_16 [i_0] [0] [i_5 + 3] [i_5]) ? (arr_17 [1] [i_1] [i_5 + 1]) : (arr_10 [i_0 + 2] [12] [i_5] [i_1] [i_5])))))) <= (((!44021) ? ((((arr_5 [i_5 - 4] [8]) ? var_6 : -49))) : (arr_17 [1] [i_1 - 1] [i_1])))));
                    var_16 = ((((-(arr_9 [i_0] [i_0] [i_5 - 1] [i_1]))) + (((-1908001303 < (arr_9 [i_0] [1] [3] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_17 = var_9;
                                arr_25 [1] [i_1] = (97 ^ 63);
                                arr_26 [i_1] [i_6 + 2] [i_1] [i_1] [i_5 - 1] [i_1] [i_1] = 72;
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    arr_29 [i_8] [i_1] [i_1 - 1] = (((-((47767 ? 1 : 210)))));
                    var_18 = -1908001291;
                    var_19 += ((-((min((arr_2 [i_1]), -39)))));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_34 [i_0] [i_1] = ((((((arr_27 [i_1] [i_1] [i_1]) ? 60 : (arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1])))) ? (((arr_1 [i_0] [i_9]) / -210)) : (((arr_18 [i_0] [i_0] [i_9] [i_0]) ? (arr_3 [i_9]) : (!18128454435115780438)))));
                    arr_35 [i_1 + 1] [i_1] [13] [i_1] = ((-((min((arr_9 [i_1 - 1] [i_0 + 1] [i_9] [i_1]), (arr_9 [i_1 - 2] [i_0 - 2] [i_0 - 2] [i_1]))))));
                }
                var_20 *= 0;
                var_21 -= ((((max((((~(arr_19 [i_0 + 1] [2] [i_0])))), (arr_27 [i_0 + 2] [6] [i_1 - 1])))) ? ((-64 + (arr_28 [i_0 + 2] [10] [i_1]))) : ((((max(var_9, var_7)))))));
            }
        }
    }
    #pragma endscop
}
