/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_9, ((((-2147483647 - 1) != var_18)))));
    var_21 = var_2;
    var_22 = (((((var_18 > (((2147483647 ? var_8 : 2147483647)))))) & (((var_17 != ((-2147483647 ? var_2 : var_9)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((var_11 & var_19) && (((((var_13 ? var_3 : var_0)) % (4294967295 != var_2))))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_23 = var_1;
            var_24 = var_4;
            arr_6 [i_0] [i_1] &= 0;
        }
        arr_7 [i_0] = (((min(127, 2354065232))) ? (min(-2117057736721044430, 1940902089)) : ((max((max(var_16, var_9)), var_6))));
        var_25 = (var_18 <= var_0);
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_26 ^= min(-2147483641, 2147483647);
        var_27 &= ((130 ? 127 : 1297900546));
        var_28 = ((127 ? 126 : 129));
    }
    var_29 ^= (((min(((var_15 << (var_9 + 118))), ((max(var_4, 168))))) | (((var_4 & ((max(var_11, var_11))))))));
    #pragma endscop
}
