/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((var_1 >> (var_5 + 33)))) ? (min(var_0, (max(var_8, 1364190774)))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((~(arr_0 [i_0] [i_0])));
                var_19 = (max(var_19, ((((arr_3 [i_1]) | (((arr_0 [i_1] [i_0 + 2]) ? (arr_0 [i_1] [i_0 + 2]) : var_15)))))));
                var_20 = (((min(((((arr_6 [i_0] [1] [2]) ? 1 : (arr_4 [0] [i_0 + 2] [i_0])))), ((var_12 ? -1062834023982839875 : var_5)))) | var_10));
            }
        }
    }
    #pragma endscop
}
