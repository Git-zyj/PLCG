/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min((~var_10), (min(7672321343353528068, var_4))))) ? ((7672321343353528068 | (min(var_2, 3707745296)))) : 2926241754540584902));
    var_14 = (153 ? (((~var_8) % var_12)) : (((((122 ? var_3 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (((arr_5 [10] [i_1] [i_2] [i_2]) ? ((max((~var_9), ((min(var_12, 1)))))) : (arr_1 [i_0])));
                    var_16 = (min((((-6002 != 0) ? ((-643 ? var_1 : (-32767 - 1))) : ((max(79, var_10))))), (~var_3)));
                    var_17 = ((-3988253212425913697 == ((((arr_0 [i_0]) ? var_10 : var_12)))));
                    var_18 = (((arr_3 [7] [i_1]) ? 124 : (max(((((arr_3 [i_0] [i_0]) ? (arr_4 [6] [i_1] [i_1]) : var_0))), (arr_0 [i_1])))));
                }
            }
        }
    }
    var_19 = (max((((~(min(var_5, 495840545))))), ((max(-22923, var_11)))));
    var_20 = ((~((max(var_7, (var_3 || 5998))))));
    #pragma endscop
}
