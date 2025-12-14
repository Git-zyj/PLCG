/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 - 1] [i_0] = ((min((min((arr_0 [i_1]), 8114)), (min((arr_2 [i_1]), (arr_0 [i_1]))))) != 1);
                var_13 = (min(((var_1 ? 16872935629091249844 : ((var_0 | (arr_0 [i_0]))))), (((var_7 / ((var_2 ? 1 : (arr_2 [i_0]))))))));
                var_14 = -69;
                var_15 = ((((((arr_1 [i_0 - 1] [i_0 - 1]) ? 1 : (arr_1 [i_0 + 2] [i_0 + 2])))) >= ((((((arr_3 [i_0 + 2]) ? 1 : var_9))) ^ ((7928336337997691428 ? (arr_3 [i_1]) : 9223372036854775799))))));
            }
        }
    }
    var_16 = ((var_11 ? (min(((var_2 ? var_11 : 1)), (0 | 2009220747))) : ((min((~var_4), (min(var_5, var_2)))))));
    var_17 ^= var_6;
    var_18 = -9223372036854775787;
    #pragma endscop
}
