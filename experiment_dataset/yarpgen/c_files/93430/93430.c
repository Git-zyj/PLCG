/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_2] = (min((((!(var_6 && var_9)))), var_2));
                            var_11 = -68;
                        }
                    }
                }
                arr_10 [i_0] [i_1] [i_0] = (((((arr_3 [i_1] [i_1 + 1]) / var_5)) * (((-55 * (arr_3 [i_0] [i_1 + 3]))))));
                arr_11 [i_1] [i_0] = var_10;
                arr_12 [1] = (max(var_2, (!3471)));
            }
        }
    }
    var_12 = (((var_5 || 10478784202600317016) - ((((10478784202600317016 ? var_10 : var_4)) - (min(var_0, 62063))))));
    #pragma endscop
}
