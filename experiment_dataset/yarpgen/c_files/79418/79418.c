/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_12;
            arr_6 [i_0] [i_1] [i_1] = 5815373758155017482;
            var_13 &= (arr_4 [i_0] [i_1]);
        }
        var_14 = (~-5815373758155017475);
        arr_7 [i_0] [i_0] = (((((((max(-678967449, (arr_0 [i_0])))) ? (arr_2 [i_0]) : (((arr_0 [10]) ? 64 : 5815373758155017482))))) ? var_8 : ((((5815373758155017482 <= var_5) ? (arr_3 [i_0]) : (arr_4 [i_0] [i_0]))))));
        var_15 = (arr_2 [i_0]);
    }
    var_16 ^= (((var_7 + 2147483647) << (((-27231 < 24) - 1))));
    #pragma endscop
}
