/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((((max(12622249193098067609, 6))) && (-1478716549 != 371113182))), ((!(~var_10)))));
                arr_7 [6] [6] [i_0] = ((+(max((arr_0 [i_1 - 1]), (max(5824494880611484019, 483008193))))));
                var_14 &= (max((((((min((arr_5 [i_0] [i_0] [i_0]), (arr_0 [8])))) ? (-116 || -8719289087692406871) : -465655643))), (min((arr_5 [i_0] [i_0] [i_0]), (arr_3 [i_0])))));
                var_15 = ((((max(((((arr_1 [i_1]) ? var_10 : 255))), 5824494880611484004))) || ((((arr_1 [i_1 + 2]) >> (((arr_1 [i_1 + 1]) - 128)))))));
            }
        }
    }
    #pragma endscop
}
