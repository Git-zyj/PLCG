/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(var_5, (min(((max(var_2, -120))), (max(69, var_6)))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (min((min((arr_0 [i_0 + 1] [i_0 + 1]), (((arr_0 [i_0 + 1] [i_0 + 1]) ? 9223372036854775807 : (arr_1 [i_0]))))), (max(((var_6 ? var_11 : var_7)), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0 + 3] [i_0 + 1] = (((((-(min(9223372036854775807, -32762))))) ? ((+(((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_0)))) : ((max(((max(var_2, 64))), ((32748 ? 32752 : var_2)))))));
    }
    var_18 += (min(var_11, (~17384)));
    var_19 = (max(var_12, (min(((-32750 ? 1 : -9223372036854775807)), -32747))));
    var_20 &= (max((max(-119, (~var_5))), (var_15 - 243)));
    #pragma endscop
}
