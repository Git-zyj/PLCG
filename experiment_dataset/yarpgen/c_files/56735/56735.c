/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_8 ^ ((var_5 | (((max(var_14, (-32767 - 1))))))));
    var_17 = ((min((min(var_2, var_15)), 293899268099058839)) & var_4);
    var_18 -= ((~(max((~var_6), (-32745 ^ var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((~((var_10 / (arr_4 [i_0 + 1])))));
                var_19 -= 14;
                var_20 ^= (8696103004925608082 ? (arr_3 [i_0] [i_0] [i_0]) : (((arr_4 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : 25478771)));
            }
        }
    }
    var_21 *= (var_6 <= var_3);
    #pragma endscop
}
