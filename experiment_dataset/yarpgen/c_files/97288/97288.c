/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~(max((37005 | 28551), ((-9138418900564899665 ? -511892215 : 1)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0 + 2]) & 211));
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = ((~(arr_1 [i_0 + 1])));
        var_22 = (+-9138418900564899665);
        var_23 &= (arr_0 [i_0 - 1] [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_24 *= 210;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_25 ^= (0 * 0);
            var_26 = -1;
        }
    }
    var_27 = (max(var_27, -var_7));
    var_28 = (max((((max(6300971266183533832, var_6)) < var_11)), var_17));
    #pragma endscop
}
