/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((~(((((var_2 ? -1015680763 : -7499473441891774893))) ? (4749753958263511767 + var_1) : 4749753958263511767)))))));
    var_13 = ((((min((min(247, var_3)), (((-58 ? var_7 : 156)))))) ? (((7 <= 30) ? ((max(var_5, var_6))) : ((34 ? var_9 : 229)))) : (((min(var_6, var_6))))));
    var_14 += var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [1] = ((+(((arr_2 [i_2] [i_2]) ? var_9 : (arr_2 [i_1] [i_2])))));
                    var_15 = ((var_5 ? ((max(896, var_0))) : var_1));
                }
            }
        }
    }
    #pragma endscop
}
