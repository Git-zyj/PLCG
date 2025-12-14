/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((arr_3 [i_0]) ? (((((255 ? -7059 : (arr_2 [i_0] [i_1])))) ? ((min((arr_3 [i_0]), 9420))) : (arr_0 [i_1]))) : (((arr_0 [i_0]) / (arr_0 [i_1])))));
                var_17 = ((((var_10 ? 7059 : -7059)) % (((arr_3 [i_0]) | (arr_2 [i_0] [i_1])))));
                var_18 = (arr_3 [i_0]);
                var_19 *= var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((arr_6 [i_0] [i_0] [i_0]) < ((((arr_5 [i_0] [i_0] [i_3] [i_0]) / 9345))))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((((((arr_4 [i_3 + 2] [i_0]) <= (arr_4 [i_3 + 2] [i_0])))) & (((arr_4 [i_3 + 1] [i_0]) ? var_8 : (arr_4 [i_3 + 2] [i_0])))));
                            var_21 = (((((var_3 % (arr_6 [i_3 + 4] [i_3 + 1] [i_3 + 4])))) ? var_7 : ((((255 && (arr_6 [i_3 + 4] [3] [3])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        arr_20 [i_4] [i_5] [i_5] [i_4] = (min(((var_15 + ((0 ? (arr_6 [i_4] [i_4] [i_4]) : 7068)))), ((((var_9 < (arr_11 [i_6] [i_4]))) ? (((((arr_3 [3]) < 255)))) : (((arr_6 [i_4] [i_5] [i_7]) ? var_9 : (arr_6 [i_5] [i_6 - 1] [i_5])))))));
                        var_22 = (((((var_14 ? (arr_12 [i_6 - 2]) : (arr_12 [i_6 + 4])))) ? var_14 : ((((arr_12 [i_6 + 2]) & (arr_12 [i_6 + 4]))))));
                        arr_21 [14] [i_5] [14] [14] = 7059;
                        var_23 = (-7059 == -1);
                    }
                    var_24 *= ((((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [16]) ? (min(var_4, (arr_9 [i_6] [i_6]))) : ((((arr_2 [i_5] [i_4]) ? (arr_3 [i_5]) : (arr_0 [i_5]))))))) ? 65535 : (7059 | var_5)));
                }
            }
        }
    }
    #pragma endscop
}
