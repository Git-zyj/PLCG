/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((var_9 ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_11 += (max((((arr_1 [10]) / var_8)), (~-89)));
        var_12 *= (min((min(((var_6 ^ (arr_1 [0]))), ((min((arr_0 [20]), 74))))), var_6));
        arr_3 [i_0] = (max(((((~-67108864) >> (36172 - 36170)))), (((max((arr_0 [i_0]), var_8)) >> (((((arr_0 [i_0]) ? 14772529609378612343 : (arr_0 [i_0]))) - 14772529609378612311))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 += var_7;
                    var_14 = (min(var_14, ((max(((((((18446744073709551615 << (arr_1 [2])))) || (var_1 || var_7)))), (min(((var_7 ? (arr_7 [i_1] [i_1] [6]) : 173)), (((arr_7 [i_0] [i_0] [6]) / var_5)))))))));
                }
            }
        }
    }
    #pragma endscop
}
