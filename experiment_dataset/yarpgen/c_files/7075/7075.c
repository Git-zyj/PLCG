/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(~var_8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (+((((((arr_6 [i_0] [7]) << 26))) ? (54024 & 1) : (((arr_5 [i_0] [i_0] [i_0] [i_3]) ? (arr_4 [i_0]) : 2517479602)))));
                                arr_11 [i_0] [i_1] [i_2] [i_0] [i_2] = 1372580726;
                                var_20 &= (((-((max(16, 28886))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_21 += ((20 ? (min(((var_3 / (arr_10 [i_6] [22] [i_1] [i_1] [i_1] [i_1] [i_0]))), ((((arr_18 [i_0] [i_0] [i_5] [i_0]) > -14667))))) : ((((arr_3 [i_0 - 1]) / (arr_3 [i_0 - 2]))))));
                            var_22 += ((((-11 * 1372580726) > (min(6678559659519961055, 6678559659519961044)))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_16 ? var_16 : var_15));
    var_24 *= (((((max(var_12, var_5)))) > -var_17));
    #pragma endscop
}
