/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_0] [i_2] [i_0 - 1] = (((((((0 ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : 1))) > (((arr_6 [i_0] [i_0]) ? (-9223372036854775807 - 1) : (arr_7 [i_1] [i_1] [i_1 - 1]))))) ? 1 : 6376434342326519197));
                            var_16 = (min(((min((arr_0 [i_3]), (arr_0 [i_1 + 2])))), (arr_1 [i_3 - 1])));
                            arr_13 [i_0] [i_1 + 2] [i_1] &= (((((var_14 ? (arr_11 [i_0] [i_0]) : 1))) ? (arr_1 [i_0 - 1]) : (arr_5 [i_0] [i_0])));
                        }
                    }
                }
                arr_14 [i_0 - 1] [i_0] [i_0] = (min(((var_9 ? 0 : var_3)), (((-1117603963 + (arr_9 [i_1 - 1] [i_1 + 1]))))));
                arr_15 [i_0] [i_0 - 2] [i_0] = ((((2147483647 ? (arr_7 [i_0] [i_0] [i_0 + 1]) : (arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 1])))) ? ((var_6 ? 9223372036854775807 : 60347)) : (((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2]) ? (arr_7 [8] [i_0 + 2] [i_0]) : 1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_27 [i_6] [i_6] [i_6] [i_4] = (((((122880 ? var_7 : 1))) ? ((((-2147483647 - 1) ? var_5 : var_8))) : (((-1063390135 ? 11787 : 448)))));
                            arr_28 [i_4] [i_4] [i_7] [i_4] [i_7] &= (872294955 == ((var_7 ? var_13 : 8011387167688746437)));
                            var_17 = (~4064);
                            arr_29 [i_4] = (((arr_26 [i_4] [i_4] [i_4] [11] [i_4 + 1]) >= (((arr_24 [i_4 + 1]) ? (arr_24 [i_4 - 1]) : (arr_24 [i_4 + 1])))));
                        }
                    }
                }
                var_18 = arr_25 [7] [i_4];
                arr_30 [i_4] [i_4] = arr_16 [i_5];
            }
        }
    }
    var_19 = (var_0 ? ((var_0 ? (((var_7 ? 16474 : -1618651864))) : ((33488896 ? var_13 : 2251799813677056)))) : (((max(6349393179940283778, -8011387167688746437)) << (((max(2147483647, var_0)) - 2147483647)))));
    #pragma endscop
}
