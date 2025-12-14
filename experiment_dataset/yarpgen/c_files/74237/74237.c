/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (var_2 ? var_2 : (max(39, (min((arr_3 [i_0]), 2400277567679169343)))));
                arr_6 [i_0] = min((arr_0 [i_0 - 1]), (((((min(1, 15179038703915695705))) ? ((((arr_4 [i_1]) == (arr_1 [i_0])))) : (arr_4 [i_0])))));
                var_17 = (min(var_17, ((min((1 >= 1), (max((arr_2 [i_0] [12]), var_14)))))));
                var_18 ^= arr_4 [i_1];
            }
        }
    }
    #pragma endscop
}
