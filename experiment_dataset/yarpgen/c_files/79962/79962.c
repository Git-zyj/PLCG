/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((-111 * 1) ? var_14 : (arr_1 [5])));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_21 = (max(((((min(4362359599324539959, -2)) < (arr_3 [i_0] [i_0] [i_1])))), 14084384474385011657));
            var_22 *= ((-((-(arr_3 [i_1 + 1] [i_1 - 3] [i_1 - 3])))));
            var_23 -= var_19;
            var_24 -= (min(var_4, (((-219946867 / 4362359599324539958) * (((19802 / (arr_3 [i_0] [i_1] [i_1 - 3]))))))));
        }
    }
    var_25 = (min(205, 14084384474385011657));
    var_26 &= (min(-1476048707, -910129996));
    #pragma endscop
}
