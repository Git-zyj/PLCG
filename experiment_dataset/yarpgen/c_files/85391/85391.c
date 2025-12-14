/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 7060665320971099402));
    var_15 = (max(var_5, (((((var_13 ? var_6 : var_4))) ? var_8 : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 += (((!((max(224, var_3))))));
                    var_17 &= ((16739642229198892847 ? ((((max((arr_4 [i_2]), (arr_5 [i_0] [i_0] [i_0] [i_2])))))) : ((~(((arr_2 [i_0] [i_2]) | var_3))))));
                }
            }
        }
    }
    var_18 &= var_2;
    #pragma endscop
}
