/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? ((max(var_7, ((min(1, 9)))))) : (~var_2)));
    var_16 = (max(var_13, var_6));
    var_17 = (min(var_17, ((min(5561876792005915168, -28)))));
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((max((arr_8 [i_1 - 1] [i_1 - 3] [i_1 - 1]), (arr_1 [i_1 - 3])))) != (((arr_7 [i_1] [i_1]) ? var_5 : (arr_4 [i_1] [i_1 - 1])))));
                    var_19 = (min(var_19, ((max(842284498759946101, (234 | var_1))))));
                }
            }
        }
    }
    #pragma endscop
}
