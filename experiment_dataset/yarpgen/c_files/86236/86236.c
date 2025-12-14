/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (arr_6 [i_1 - 1] [i_1 + 2] [i_1])));
                var_12 = (min((((arr_2 [i_1] [i_1 + 3]) / (((((arr_4 [i_1]) != 3071976429)))))), ((min((max((arr_0 [i_1] [i_0]), 33)), 33)))));
                arr_7 [i_1] [i_1] [i_1] = (((((((236 ? 39329888577103926 : 47190))) || (arr_0 [i_0] [i_1 - 2]))) ? ((((arr_5 [i_1]) > (arr_3 [i_0] [i_0])))) : (((-68 & 17392) & ((232 ? 232 : (arr_1 [i_1])))))));
            }
        }
    }
    var_13 = var_3;
    var_14 ^= ((-(min((1 > 16), var_0))));
    #pragma endscop
}
