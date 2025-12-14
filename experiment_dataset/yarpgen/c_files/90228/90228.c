/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~1);
    var_17 = ((var_5 || ((min((min(1, var_7)), ((var_13 ? var_4 : var_9)))))));
    var_18 = ((65535 ? 65534 : 65535));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = (((max(((var_4 ? 164 : var_4)), 65530)) >= (!var_5)));
                            var_19 *= (max((min((arr_0 [i_1 - 1] [i_1 + 1]), ((8142 ? 1 : 4294967292)))), (189 % var_8)));
                            arr_11 [4] [i_1] = (max((min((max(var_3, -1886048133)), ((18 ? 1 : 216)))), (-var_12 < var_6)));
                            arr_12 [i_1] [0] [i_1] = (arr_7 [i_1 - 4] [i_1] [i_1] [i_1 + 1]);
                            arr_13 [i_3] [i_0] [i_0] [4] |= (((~(9223372036854775807 ^ -2105549145))) & (-127 - 1));
                        }
                    }
                }
                arr_14 [i_1] = ((((((var_0 >= (((arr_5 [i_1]) ? var_12 : 78151160205250207)))))) == ((32 ? var_11 : ((var_12 * (arr_2 [i_1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    var_20 = (min(var_9, ((var_13 ? var_8 : (max((arr_7 [i_5] [i_6] [i_5] [i_5]), var_11))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_21 = (max(((~(max((arr_23 [i_4] [i_6] [i_6] [i_8]), var_7)))), 2731548017));
                                var_22 = max(1563419287, var_15);
                            }
                        }
                    }
                    arr_28 [i_4] [i_6] [i_6 + 2] [i_6] = (max(((((max((arr_18 [i_6] [i_5] [i_4]), var_3))) * var_14)), (((((min(33, (-127 - 1)))) != ((max(var_6, var_1))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_23 = (((((~((1 ? 189 : 64))))) ? ((max((arr_18 [i_6 + 2] [i_6 - 1] [i_9 - 1]), (arr_18 [i_6 + 2] [i_9 + 1] [i_9 - 1])))) : (((arr_1 [i_4 + 1]) ? ((var_5 ? var_5 : 36068)) : (255 / var_1)))));
                                var_24 = ((!(6 % var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
