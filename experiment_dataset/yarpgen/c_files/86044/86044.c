/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1] = min(8807641988774412324, 203);
                arr_5 [i_1] = 0;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (max((arr_8 [i_3]), (arr_8 [i_3])));
                            arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = max(((min(((var_3 >= (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]))), (-2636346835182611814 < -359892712440866055)))), (max((arr_2 [i_1] [i_2 + 4]), ((((arr_1 [i_0] [i_0]) && (arr_7 [i_1] [1] [1] [i_3])))))));
                        }
                    }
                }
                var_20 = (max((((var_7 * var_12) ? -var_6 : (1 / var_5))), (((~var_12) ? (209 ^ 1) : ((max(1, 1)))))));
                arr_11 [i_1] [i_1] [i_1] = var_2;
            }
        }
    }
    var_21 = 0;
    var_22 = var_16;
    #pragma endscop
}
