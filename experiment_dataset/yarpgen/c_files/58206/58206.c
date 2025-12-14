/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] = 0;
                    var_11 &= (((arr_2 [i_1] [i_0]) ? (arr_1 [1] [i_0]) : ((((-1015813024 + 0) ? 4294967295 : 611680916)))));
                }
            }
        }
        arr_7 [i_0] = (((arr_1 [i_0] [i_0]) != (max((var_3 ^ var_0), (arr_5 [i_0])))));
        var_12 -= ((((~(arr_3 [i_0] [i_0] [11]))) & var_6));
    }
    var_13 = var_9;
    var_14 = (((~(min(var_3, var_9)))) | (((min(var_5, (var_8 > -18))))));
    var_15 = var_0;
    var_16 = (var_5 == var_0);
    #pragma endscop
}
