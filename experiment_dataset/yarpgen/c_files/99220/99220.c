/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((~var_15), (!var_11)))) ? var_12 : (min(var_15, var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((((var_16 + var_15) ? 1 : (arr_9 [i_0] [i_1] [i_0 - 1] [i_1]))) << (min(89, (((arr_3 [i_0 - 1]) ? var_2 : (arr_5 [i_0 - 1]))))))))));
                            var_19 = ((-(((arr_5 [i_0 - 1]) - (arr_5 [i_0 - 1])))));
                            var_20 = (((((~((8407907220821497269 ? 1 : 1))))) ? (arr_7 [i_0 - 1] [i_0 - 1]) : 1800281952));
                            var_21 = (min((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]), ((-(arr_8 [i_0 - 1])))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_1] = (((((max((arr_4 [i_0]), 706164437))) || 1892780646)) ? (((((arr_3 [i_1]) || (((var_3 ? -1892780646 : -80))))))) : (max((96 | -64), -64)));
                var_22 = (min(var_22, (((((arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [1]) & (!var_7)))))));
            }
        }
    }
    #pragma endscop
}
