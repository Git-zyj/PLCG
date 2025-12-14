/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((-(arr_4 [i_0] [i_1 - 4] [i_1]))) * (arr_2 [i_0] [i_1 - 4])));
                arr_6 [i_0] = ((var_7 >= (!28)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (((((!(arr_3 [i_0])))) >= (max((arr_0 [i_0]), var_4))));
                            var_13 = ((-2890 ? (max(var_11, var_0)) : 26));
                            var_14 = (max(var_14, -65530));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((+-95) ? ((var_8 ? var_5 : var_0)) : var_6);
    var_16 = (!var_6);
    var_17 = var_1;
    #pragma endscop
}
