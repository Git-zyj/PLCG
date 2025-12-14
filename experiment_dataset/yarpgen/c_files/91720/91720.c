/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-2126942587, var_6));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 *= (((42551 >= 165) ? 17205 : (((arr_1 [i_0 + 1] [i_0 + 2]) ? (arr_1 [i_0 + 2] [i_0 + 3]) : 49757))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((((min(3819265311, 1017059003))) ? ((((((arr_5 [i_1]) ? 15779 : var_4))) ? (var_13 % var_12) : var_10)) : ((((arr_2 [i_0 - 1] [i_1] [i_1]) ? 16475 : -12)))));
                    var_22 = (!15779);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((((max((!165), ((var_13 ? var_18 : var_17))))) ? ((2137224282 ? (((var_1 ? -1422768755 : var_16))) : ((var_0 ? var_9 : var_1)))) : (((((182257940 ? (arr_0 [i_0] [i_0]) : var_10))) ? ((2716613263 ? var_9 : (arr_3 [i_0] [i_1] [i_2]))) : (((17205 ? 2453804440 : 110)))))));
                    var_23 -= 48345;
                    var_24 = (min(var_24, (max((((arr_3 [i_0] [i_1 + 2] [i_1 + 2]) ? var_2 : (arr_3 [i_0] [i_1] [i_1 + 1]))), (((3277908281 + 15779) * 3277908303))))));
                }
            }
        }
    }
    #pragma endscop
}
