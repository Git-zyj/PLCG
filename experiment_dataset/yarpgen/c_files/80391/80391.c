/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = ((-(~-7904445134147032860)));
                    var_16 = (max(var_16, ((min(((((((177 ? -1094071203 : (arr_6 [i_0] [i_0])))) || (((arr_5 [i_2]) < var_8))))), ((0 << (1094071220 - 1094071202))))))));
                    var_17 = (((!-118) ? ((var_14 ? -1094071218 : ((min(-47, 1))))) : (((!(arr_4 [i_0] [i_1 + 1] [i_2]))))));
                    var_18 = (max((min(175311148, 1)), (((arr_2 [i_1 + 1] [i_1]) ? var_6 : (arr_2 [i_1 + 1] [i_1])))));
                }
            }
        }
    }
    var_19 = (max(var_19, (((((((((var_1 ? var_7 : var_4))) ? ((var_0 ? var_4 : var_2)) : var_1))) ? (1 < var_1) : (max(((var_6 ? var_11 : var_4)), (((var_3 ? var_4 : 0))))))))));
    #pragma endscop
}
