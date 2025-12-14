/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_20 = ((-var_15 ? (((~6764069619551367882) ? (((-(arr_4 [i_0])))) : (((arr_6 [i_0]) % -1)))) : (((((13 ? 17 : -1))) ? ((18 ? 18 : -16)) : (~-26)))));
            var_21 = (max(var_21, ((((arr_4 [i_0]) ^ ((-1 ? (!var_11) : (max(var_13, -16)))))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 = (max(-1, 0));
            var_23 = -var_0;
            var_24 = ((20 ? -21 : -4));
        }
        var_25 = var_12;
        var_26 -= (max(-16, ((var_19 ? -29 : (-2 > -18)))));
    }
    var_27 = (((1 ? -29 : 37)));
    var_28 = (max(var_28, ((min(((var_19 - (max(var_13, -4)))), ((min(var_8, (~var_19)))))))));
    #pragma endscop
}
