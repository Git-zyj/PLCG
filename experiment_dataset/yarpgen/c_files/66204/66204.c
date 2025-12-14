/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 *= ((-(var_0 + 245)));
                var_21 = (min(var_21, ((max((max((((arr_2 [i_0] [i_0]) ^ (arr_0 [i_0 + 1]))), (-13752 & 920745141))), (max(((55110 ? -212521877747845167 : 1)), (((-920745135 ? (arr_5 [i_0] [i_0 + 1] [i_1]) : 136))))))))));
                var_22 = (arr_3 [i_0 - 1] [i_0 - 1]);
                var_23 = var_5;
            }
        }
    }
    var_24 = (min((min(((min(120, 1))), (var_11 ^ var_17))), (((((max(var_5, 1104535678))) || (39 / 162))))));
    var_25 *= ((var_0 ? 254 : var_5));
    var_26 = ((var_2 + ((((2 ? var_2 : var_4)) | ((186 ? -4734531495197126816 : 106))))));
    #pragma endscop
}
