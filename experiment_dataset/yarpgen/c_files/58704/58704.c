/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_5, ((-50973023 ? (~4611686018427387902) : 4))));
    var_14 = (~-113);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((((((arr_0 [i_0]) / (arr_0 [i_0])))) ? ((8897644725294982587 ? 5041270817927008170 : 4611686018427387902)) : ((min((arr_2 [i_0]), var_6))))) * ((((5512413405829343321 == (arr_2 [i_0])))))));
        var_16 = ((~(((-2147483647 - 1) ? -363750235 : 77))));
        var_17 = ((((arr_2 [i_0]) / (arr_0 [i_0 - 1]))) / (((((max((arr_2 [i_0]), 13405473255782543446))) ? (((-(arr_0 [i_0])))) : ((8897644725294982587 ? 2585643274 : (arr_0 [i_0])))))));
    }
    #pragma endscop
}
