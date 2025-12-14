/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_12 = (arr_0 [i_3] [1]);
                            arr_14 [13] [i_1] [13] [i_3] [i_1] = ((((((arr_5 [i_0]) ? (!1242403668) : (!var_7)))) ? (arr_1 [i_1 - 1]) : ((((!(arr_13 [i_0] [i_0] [i_0] [i_0] [i_1]))) ? ((((!(arr_5 [16]))))) : ((-1242403667 ? 210 : 472556851748546550))))));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [0] = (((((arr_12 [i_0] [i_0] [i_3] [i_3] [i_1 + 1] [i_3] [i_3]) ? ((var_5 ? (arr_5 [11]) : (arr_0 [i_3] [i_2]))) : (((~(arr_4 [i_1] [i_1])))))) % var_9));
                            var_13 = (arr_7 [i_1] [i_3] [i_2] [i_1] [i_1]);
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_14 += (1716700472135359259 >> 1);
                            var_15 = var_6;
                        }
                        var_16 = (arr_16 [i_1] [i_1] [i_1]);
                        var_17 = -var_7;
                        var_18 = (max(var_18, (arr_10 [i_0] [i_1 + 1] [i_2])));
                    }
                }
            }
        }
        var_19 = ((~(802472085 | -46)));
    }
    var_20 = (((((var_2 | ((var_4 ? 963312379 : 46))))) ? (((~var_6) | (((max(var_5, var_5)))))) : (((~(~3396247968))))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_21 += (((arr_4 [i_8] [i_8]) <= (arr_22 [3] [10])));
                                var_22 = 43783;
                                var_23 = (max(((2147483648 * (arr_24 [i_6] [5] [i_6]))), (--31)));
                                var_24 = var_7;
                            }
                        }
                    }
                    var_25 = (((1 ? 3347398099 : 1)));
                }
            }
        }
    }
    #pragma endscop
}
