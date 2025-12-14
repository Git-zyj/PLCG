/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = 0;
                                var_20 = min((max(((-1 ? var_2 : -1)), 1)), ((((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) >= (((arr_1 [i_0] [i_2]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : 1))))));
                                var_21 ^= ((129024 << (203 - 201)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [4] [5] [i_5] [i_6] = 35435;
                                arr_20 [1] [i_1] [i_1] [i_5] [i_5] [i_5] [i_6] = (((((var_19 ? 18 : (arr_0 [i_1]))) == (((((arr_0 [i_5]) < (arr_8 [i_0] [i_0] [i_2] [i_6]))))))));
                                var_22 = (max((((((((arr_11 [i_0] [i_1] [i_1] [i_5] [i_6]) ? 47 : (arr_10 [i_0] [1] [i_0] [i_5] [i_6])))) ? (max(var_7, 20)) : 47))), (((~-41) ? (((arr_3 [i_6]) - 13)) : (783876013 % 4294967295)))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_0] &= -8;
                }
                arr_22 [i_0] = ((((-12876757988283719249 << (((((arr_12 [i_1] [i_1] [i_1] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_10 [0] [i_0] [i_0] [i_0] [i_0]))) + 508066722)))) ^ ((var_18 ? ((((!(arr_16 [i_1] [i_1] [10] [i_0] [i_0]))))) : ((1 ? (arr_3 [i_0]) : 84))))));
                arr_23 [i_0] [i_1] = ((((min(1, 37836))) ? (((arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_1] [i_0] [i_1] [i_0]) : (arr_8 [i_0] [1] [i_1] [i_1]))) : (~62)));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_29 [7] [i_1] [i_1] [i_7] [i_1] [7] = (arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                            var_23 = max(((((((arr_12 [9] [i_0] [7] [i_7] [i_8]) ? -13 : (arr_4 [i_8] [i_7] [i_1])))) ? (arr_0 [i_7]) : (((-(arr_2 [i_0])))))), (arr_14 [i_0] [i_1] [i_7] [9] [i_7] [7]));
                            var_24 ^= (min(((-(max(4294967295, (arr_17 [i_7] [i_0] [i_7]))))), ((((var_6 ^ 0) >= ((1 ? -1 : 10546096480509159081)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        {
                            var_25 ^= 51;
                            arr_37 [9] [i_10] [9] [i_9] [i_1] [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) < ((var_2 ? (((min((arr_16 [i_0] [i_1] [i_0] [i_10] [i_1]), var_7)))) : (arr_3 [i_9])))));
                            var_26 = (min(((((var_19 ? (arr_11 [i_0] [i_1] [i_0] [i_10] [i_10]) : (arr_9 [7] [i_9] [i_0] [i_0]))))), var_4));
                        }
                    }
                }
            }
        }
    }
    var_27 = (!var_19);
    var_28 -= (min(7900647593200392534, -53));
    #pragma endscop
}
