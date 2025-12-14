/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (~0);
            var_18 = (~16);
            var_19 = 1910931552646561403;
            arr_7 [i_0] = ((~((var_15 ? 0 : 0))));
            var_20 = (min(var_20, (((!(1081758455102714004 > -27019))))));
        }
        arr_8 [4] &= (((arr_0 [16]) * (!var_6)));
    }
    var_21 = var_12;
    var_22 = 0;
    var_23 = (((~var_8) ? 16401845573966533203 : var_11));
    var_24 = var_3;
    #pragma endscop
}
