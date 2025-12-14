/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((var_3 | (((((var_0 ? var_10 : 240))) & (max(var_4, 3224999539))))));
    var_12 = ((var_0 ? (((min(60, 2263224121)) / (((var_3 ? var_6 : var_7))))) : ((511189912 ? 31187 : 3783777387))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((792826625 ? 89 : ((-(arr_5 [i_0 - 1])))));
                arr_7 [i_0] = ((-(~3)));
                var_13 |= ((((max((arr_3 [i_0]), (min(0, (arr_3 [i_0])))))) ? (!-1) : 2695797907));
                arr_8 [i_0] [i_0] [i_0] = ((!((((1 ^ 24153) ? (((max(109, var_3)))) : 3783777380)))));
                var_14 ^= 0;
            }
        }
    }
    #pragma endscop
}
