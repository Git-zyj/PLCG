/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;
    var_17 = min(((min((40654 == var_7), var_15))), ((((min(50158, 18446744073709551607))) ? ((min(var_10, var_0))) : 234)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = arr_1 [i_1] [i_0];
            var_19 = (max(var_19, (arr_1 [i_0] [i_0])));
        }
        var_20 = ((((((((min(1, var_15)))) / (arr_0 [i_0])))) ? ((1 ? 4294967295 : -19480)) : (((((-19474 ? (arr_4 [i_0]) : (arr_2 [i_0] [i_0] [i_0])))) ? 16774789507255751808 : (((arr_2 [i_0] [i_0] [13]) ? var_14 : (arr_3 [i_0])))))));
        var_21 &= ((((((1 << (((arr_2 [i_0] [i_0] [i_0]) - 22071)))) >= (arr_2 [i_0] [i_0] [i_0]))) ? ((~(arr_2 [i_0] [i_0] [i_0]))) : (arr_2 [21] [i_0] [i_0])));
        arr_5 [i_0] = (((((4503599627370240 ? 24892 : 2258655932))) ? (((arr_0 [i_0]) - (arr_3 [i_0]))) : (((arr_0 [i_0]) * (arr_3 [i_0])))));
    }
    #pragma endscop
}
