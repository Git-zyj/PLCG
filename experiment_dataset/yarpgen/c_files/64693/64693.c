/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((arr_1 [0]) <= (((arr_1 [i_0]) ? var_8 : (!40))));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_20 = 8519;
            var_21 = ((((arr_4 [i_1 + 1]) ? (min(5111430771658599201, 2147483647)) : (((var_10 ? var_17 : (arr_3 [i_0] [i_0] [i_0])))))));
            arr_7 [i_0] [i_0] [i_0] = min((~62), (min(((2608036419 ? -193762438 : 17328)), (~var_2))));
        }
        var_22 = (arr_3 [i_0] [i_0] [i_0]);
    }
    var_23 = (-17329 || var_14);
    #pragma endscop
}
