/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [1] = ((((((min(-1, 0))) || ((min(0, -89))))) ? (max(140737488355327, ((min(28333, -1))))) : 32767));
                var_16 = (min(var_16, (arr_1 [i_0] [i_1])));
                var_17 = (min((arr_1 [i_1 - 1] [i_1 + 1]), ((((arr_1 [i_1 - 1] [i_1 + 1]) ? -1 : -1)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_18 = ((((((arr_7 [i_2]) ? (arr_5 [i_2]) : (arr_7 [i_2])))) ? (arr_5 [i_2]) : (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_5 [i_2])))));
        var_19 ^= ((18446744073709551615 ? (arr_6 [i_2]) : -1));
        arr_8 [i_2] = (arr_6 [i_2]);
    }
    #pragma endscop
}
