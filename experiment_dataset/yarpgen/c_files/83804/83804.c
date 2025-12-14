/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((((-32767 - 1) ? (-2147483647 - 1) : 21767))) ? var_5 : ((max(21763, var_0)))))) ? var_3 : (0 <= var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 += (~43768);
                arr_4 [i_0] [i_1] = ((-(((((43769 ? var_4 : var_3))) ? (((min(34028, 242)))) : (min(var_8, (arr_3 [i_0])))))));
                var_13 *= ((-var_5 ? ((((max((arr_3 [14]), 2147483647))) ? (arr_3 [7]) : var_5)) : (((~(arr_1 [i_1]))))));
                arr_5 [i_1] [i_0] |= (min(((-55 ? var_5 : -515564362983486324)), ((min(-7297, (arr_2 [i_0] [i_1] [9]))))));
                arr_6 [i_1] [i_1] [i_0] &= var_6;
            }
        }
    }
    var_14 -= var_10;
    #pragma endscop
}
