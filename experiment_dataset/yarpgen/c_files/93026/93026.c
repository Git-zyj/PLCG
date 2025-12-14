/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [4] [4] &= ((((((arr_1 [i_1]) ? 1 : (arr_5 [i_0] [8] [i_1])))) ? ((1 ? (arr_2 [i_0] [i_1]) : 0)) : (arr_2 [i_0] [i_1])));
                var_17 -= ((-(~228)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 ^= (max(222, (!154)));
        arr_10 [i_2] = (((((95 + var_11) ? (((214 ? 1048575 : 1))) : ((23 ? 214 : 67108863)))) <= var_12));
    }
    var_19 = var_14;
    #pragma endscop
}
