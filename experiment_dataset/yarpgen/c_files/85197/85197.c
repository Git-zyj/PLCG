/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_3] [i_4] = 7334070036821511929;
                                var_16 = (arr_10 [i_0] [i_2] [i_3] [i_4]);
                                var_17 = (((max((!var_2), (arr_4 [i_3] [i_1] [i_1]))) >> (30035 - 30009)));
                                var_18 *= var_14;
                                arr_16 [i_0] [i_3] [0] = (((((((4 >> (var_5 + 33)))) <= (((arr_6 [i_1] [i_1] [i_4] [i_3]) * 4)))) || ((min(5409920295753321565, (var_7 <= var_0))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((var_14 < (arr_12 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6])))), (max(((var_7 | (arr_24 [i_2]))), 4294967295))));
                                var_19 = max((arr_12 [i_6] [i_5] [i_1] [i_1] [i_1] [i_0]), -14151);
                                var_20 -= ((((min(var_14, (arr_0 [i_5]))) / var_10)));
                                var_21 = (min(var_21, ((((((arr_7 [i_6]) * ((1 / (arr_8 [i_0]))))) / -var_5)))));
                            }
                        }
                    }
                    arr_26 [i_0] [i_0] [i_0] = (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_22 = arr_14 [i_1] [i_1] [i_1] [i_1];
                                var_23 -= ((~(arr_8 [i_7 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 &= ((4294967291 >> (((min(var_15, -1303853699684659305)) + 1303853699684659328))));
    var_25 = (min(((((!var_10) * (var_4 >= 1303853699684659304)))), var_7));
    #pragma endscop
}
