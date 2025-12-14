/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = ((((arr_6 [1] [11] [i_1] [i_2] [4] [i_3]) ? (arr_0 [i_0]) : (arr_8 [i_2] [2]))) >= ((((~1) ? (var_13 >= 153) : (((arr_6 [i_0] [i_0] [i_1 + 2] [i_2] [i_2] [i_3]) ? var_2 : (arr_1 [i_0])))))));
                            var_16 = (min(var_16, (65535 >= 4294967295)));
                            var_17 = (((((~(arr_9 [i_0])))) ? (arr_3 [i_3] [i_1] [21]) : var_8));
                            arr_10 [i_0] [11] [i_2] [i_2] [16] [i_0] = var_3;
                            arr_11 [i_0] [15] [i_2] [i_2] [15] = ((((((0 ? var_12 : var_3))) ? (((-(arr_0 [i_0])))) : var_11)));
                        }
                    }
                }
                arr_12 [17] [8] = (((10 && (arr_5 [i_1] [i_0 - 2] [i_0 - 2]))) || ((((((arr_7 [i_0] [3] [i_0 - 1] [i_1]) ? (arr_3 [i_0] [i_1 - 1] [i_1]) : (arr_5 [i_0] [1] [i_0])))) && (((arr_5 [i_0 + 1] [i_1] [i_1]) && (arr_4 [i_0] [i_1] [i_0] [i_0 - 1]))))));
                arr_13 [i_0] = (((32753 >= var_6) >= (arr_7 [i_1] [i_1] [i_0 - 1] [i_0])));
                var_18 = (((arr_3 [13] [13] [i_1]) ? 4294967279 : (arr_6 [i_0] [5] [i_0] [i_0] [i_0 - 1] [i_1])));
                var_19 -= 247;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_24 [i_4] [i_4] [4] [1] = (((var_3 >= var_2) ? (((((arr_6 [1] [i_5] [20] [i_5] [i_5] [18]) >= (arr_14 [i_4]))))) : var_13));
                    arr_25 [6] [i_5] [i_5] [4] = ((~(((((arr_1 [i_4]) >= (arr_19 [i_5] [i_6])))))));
                }
                arr_26 [i_4] [i_5] = (((((24 & var_3) & (((~(arr_1 [i_4])))))) | ((((~var_4) & var_11)))));
                var_20 = (((((var_7 ? var_6 : (arr_5 [i_5] [i_5] [i_4]))) >= ((((arr_16 [i_4] [i_4]) >= var_5))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_21 ^= (arr_2 [11]);
                            arr_32 [i_4] [i_5] [i_7] [i_8] = (((((var_5 & (arr_22 [i_4] [i_5] [1] [i_8 + 1])))) >= ((((arr_22 [i_4] [i_5] [i_7] [i_8]) >= var_0)))));
                            arr_33 [i_4] [1] [i_4] [i_4] [i_4] [i_4] = 13;
                        }
                    }
                }
                var_22 = (max(var_22, (((-(arr_2 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
