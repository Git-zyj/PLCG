/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_1] &= ((((arr_5 [i_0] [i_1] [i_1] [i_2]) ? (~0) : ((29023 ? 8844981396565920326 : (arr_7 [i_1] [i_1]))))));
                    var_20 = ((((~(arr_6 [i_0] [1] [i_2 - 1]))) << (((((((0 ? 175 : 8844981396565920346))) ? ((1730146178 ? 601000313 : (arr_6 [i_0] [i_0] [i_1]))) : (arr_7 [i_2 - 1] [i_2]))) - 601000267))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 ^= (((min((arr_9 [i_2 - 1] [i_2] [i_0]), (arr_9 [i_2 - 1] [i_2 - 1] [i_1]))) == (arr_0 [i_4] [24])));
                                var_22 = ((~(((max((arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4]), 1)) ? (max((arr_0 [i_0] [i_0]), 84)) : ((((!(arr_0 [0] [0])))))))));
                                var_23 = (-(((11562328318032724222 >= (arr_13 [i_2 - 1] [i_2] [i_2 - 1])))));
                                var_24 = (((((254 / (max(1221566456, (arr_4 [i_4] [i_3] [i_2])))))) ? ((((((-(arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1])))) >= (arr_9 [20] [i_2 - 1] [i_3])))) : (arr_4 [i_0] [i_2] [i_3])));
                                var_25 = min((min(((((arr_5 [i_0] [i_1] [2] [i_3]) ? (arr_4 [i_2] [i_2] [i_2]) : 601000313))), (max((arr_6 [i_3] [i_3] [i_3]), -601000313)))), ((492533450724118112 ? (!1) : ((~(arr_2 [i_0]))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_2] [i_0] = (((!(((-601000314 ? (arr_9 [i_0] [12] [i_0]) : (arr_6 [6] [6] [6])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_26 ^= 1;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        {
                            arr_28 [i_6] [i_6] [i_7] [i_7] = (arr_23 [i_6] [7] [1]);
                            var_27 = ((!((min(1903676149, 1)))));
                            var_28 = 7;
                            var_29 = (min(var_29, 4294967295));
                            var_30 = (min(var_30, (((((max(32767, 601000313))) - (arr_25 [i_7 - 1] [i_8 + 4] [i_8 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
