/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] = (((1247189847 | var_8) != (((arr_3 [i_0] [i_1] [i_2]) + (arr_3 [i_0] [i_0] [i_0])))));
                    arr_9 [6] [i_2] [i_2] [i_1] = var_13;
                    var_18 = arr_5 [i_0] [i_1] [i_2];
                    arr_10 [i_2] &= 1;
                    arr_11 [i_1] = (arr_2 [i_0]);
                }
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    var_19 = -var_10;
                    var_20 = (((((4 && var_8) != ((1247189845 & (arr_5 [17] [1] [i_1]))))) ? (((-((4294967295 ? 1 : (arr_14 [i_0] [i_1] [i_3])))))) : (min(-65528, (max(var_3, (arr_1 [i_3])))))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_21 = var_10;
                    arr_19 [i_1] [3] [i_4] = var_5;
                    arr_20 [i_1] [1] [i_1] = (max(((min((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_12 [i_0] [i_0] [i_1] [i_0]))), (arr_15 [i_0] [i_1] [i_1])))), ((var_0 ? (((min(1, (arr_15 [i_4] [i_1] [i_0]))))) : ((~(arr_1 [i_1])))))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_6] [17] = arr_7 [i_1];
                            var_22 = (!1);
                            var_23 = (max((arr_15 [i_6 - 1] [i_6] [i_6]), (arr_15 [i_6 - 1] [i_1] [1])));
                        }
                    }
                }
                var_24 -= (min(((((arr_17 [i_0] [i_0] [i_0] [i_0]) << (arr_17 [i_1] [i_1] [i_0] [i_1])))), ((4012931667 << (var_10 - 44884)))));
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
