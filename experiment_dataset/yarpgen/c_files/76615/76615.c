/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (~32265)));
    var_16 = (min(var_16, ((max((var_7 ^ var_14), (max((var_8 ^ var_6), (var_1 ^ var_10))))))));
    var_17 = (((max(-20, -18458))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, ((min((((~(~var_13)))), 51)))));
        arr_2 [i_0] = (max((min((((65534 ? 65503 : var_11))), ((1 ? 1 : (arr_1 [i_0] [i_0]))))), (max((min(var_4, 18446744073709551608)), var_3))));
        var_19 += ((~(!-48)));
    }
    var_20 = 0;
    #pragma endscop
}
