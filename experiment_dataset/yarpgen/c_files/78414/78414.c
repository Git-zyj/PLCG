/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_13, (!var_0)))) && var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = min(((var_6 ? (min(6510205970265026839, (arr_4 [i_0]))) : ((((arr_1 [i_0] [i_2]) % var_6))))), (arr_6 [14] [i_1 - 1] [i_2] [i_3]));
                            var_21 = ((!(((-3 ? 0 : (((38938 || (arr_7 [i_3])))))))));
                            var_22 = (max(var_22, (arr_4 [i_1])));
                        }
                    }
                }
                var_23 = (min((~var_13), (((arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 2]) / var_5))));
                arr_10 [i_0] [i_1] = ((((((11936538103444524778 ? var_17 : -833136226)))) / (((((arr_3 [i_0] [i_0]) ? var_9 : (arr_4 [i_0])))))));
                arr_11 [i_0] [i_0] = ((((((!((min(var_9, var_2))))))) < ((-(~11936538103444524762)))));
                var_24 = ((min(1129970497, (arr_3 [0] [i_0]))) % (((((21886 ? 20641 : (arr_3 [i_1 + 4] [i_0])))) ? ((var_1 ? (arr_5 [i_0]) : var_10)) : (min(-833136227, 65527)))));
            }
        }
    }
    var_25 = var_5;
    var_26 = (max(var_26, var_10));
    #pragma endscop
}
