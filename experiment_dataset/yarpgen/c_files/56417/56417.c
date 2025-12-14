/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, -737821086));
    var_16 -= var_2;
    var_17 = (164 ? 91 : var_13);
    var_18 = (164 < -var_13);

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((!(((10818730208357532000 - (arr_0 [i_0 - 1])))))) ? ((((737821111 < (arr_1 [1] [i_0]))) ? (!1874393526) : ((-737821065 ? 1128593384 : (arr_0 [i_0]))))) : (arr_1 [i_0] [i_0])));
        var_19 = ((arr_1 [i_0] [i_0 - 1]) % (arr_0 [i_0 + 1]));
        var_20 = (max(var_20, ((((((~(((arr_1 [i_0 + 2] [5]) ? (arr_0 [i_0]) : -32751))))) ? (((((max(var_2, (arr_1 [i_0] [8])))) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0])))) : (((arr_0 [i_0 + 1]) ? 1688357989344161204 : (arr_1 [i_0 + 2] [i_0 + 3]))))))));
        var_21 = (min(var_21, ((min((((arr_1 [i_0] [i_0]) ? (((~(arr_0 [i_0])))) : (arr_1 [i_0] [i_0]))), (-78 % 178))))));
    }
    #pragma endscop
}
