/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_6 ? -var_2 : (var_4 / 317232108))), (((var_0 != ((var_2 ? var_1 : var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((((arr_4 [i_1 + 1]) || 1)) ? (((arr_1 [i_0 - 1] [i_1 + 1]) ? (arr_4 [i_0]) : (arr_2 [i_0 - 1]))) : ((((arr_3 [i_0] [i_0]) - ((min(1, 1))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (min(((!((((arr_10 [i_0] [i_1 - 1] [14] [i_3]) - (arr_2 [7])))))), 1))));
                            var_14 = 1261676822346402081;
                            var_15 = (min(var_15, (((!((((arr_9 [4] [i_1 - 1] [i_1 - 1] [i_3]) ? (arr_9 [2] [i_1 + 1] [i_2] [i_3]) : (arr_9 [8] [i_1 - 1] [i_2 - 1] [i_3])))))))));
                            var_16 = ((-(max((arr_6 [i_2] [i_1]), (arr_9 [i_2] [i_1] [i_2] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] [i_5] = ((((((((1 ? (arr_16 [i_4] [i_4]) : 1))) ? ((max(1, (arr_12 [17] [17])))) : -12057))) ? (min((((arr_17 [i_5]) ? (arr_15 [i_4] [i_4]) : (arr_11 [14]))), 1)) : ((+(((arr_17 [i_4]) ^ (arr_16 [10] [i_5])))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_25 [23] [i_5] [i_6] [19] [i_7] = (max((((arr_20 [i_7 + 2]) ^ (arr_15 [i_7 - 1] [i_7 + 2]))), ((max((arr_20 [i_7 + 1]), (arr_20 [i_7 + 1]))))));
                            var_18 = 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
