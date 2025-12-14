/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min((~var_13), (min(var_5, 43502)))) == var_1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((((((arr_0 [i_0]) & 3198877923))) ? ((min((48864 ^ 0), (arr_0 [i_0])))) : ((242 ? (min((arr_1 [i_0]), 576460752303423488)) : (((min((arr_1 [i_0]), var_6))))))));
        var_16 = (max(var_16, var_3));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((-(min(255, (arr_4 [i_2] [i_2] [i_2 - 2] [2])))));
                    var_17 &= (((~var_8) ? (min(((var_7 ? var_1 : (arr_2 [i_2 - 2] [i_1] [i_1]))), (arr_5 [i_0]))) : ((min(1, 251)))));
                    var_18 *= (arr_0 [i_1 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
