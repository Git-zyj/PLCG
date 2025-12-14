/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((max(-var_13, (var_8 ^ var_11)))) || (((~(var_2 & var_10)))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = (arr_3 [i_1 + 1]);
            var_15 = 2175891356824133246;
        }
        arr_6 [i_0 - 1] = var_7;
        var_16 = ((~(arr_2 [i_0] [i_0])));
        var_17 = (min(var_17, ((!((max(var_1, var_2)))))));
        var_18 ^= (((21 ? 101 : -2175891356824133255)));
    }
    var_19 = (24716 && 1);
    #pragma endscop
}
