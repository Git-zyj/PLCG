/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_9, -66));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_18 = var_7;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_19 -= 135519215;
            arr_4 [i_0] [i_1] [i_0] = ((((!(!9223372036854775807)))));
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_20 = (max((!0), 28430));
            var_21 = (((1838252153 | 135519215) & ((((~1) & 3840)))));
            var_22 ^= 28424;
            var_23 = (min(var_23, (37105 < 135519205)));
        }
    }
    #pragma endscop
}
