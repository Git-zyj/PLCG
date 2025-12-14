/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((max(28865, 28865))), (((((8825515645661000890 >> (121 - 83)))) ? (18446744073709551615 | var_13) : 95))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 -= ((((max(8825515645661000889, 15728640))) ? ((((min(var_6, var_12))) ? (min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))) : -28865));
        arr_2 [i_0] = ((28865 << ((((((5593334274420296812 ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((arr_1 [i_0]) ? (arr_1 [6]) : 28865)))) + 1842303483)) - 6))));
    }
    var_22 = (min(var_22, (((((9621228428048550727 ? ((9621228428048550727 ? var_8 : 3226800594983384727)) : 136))) ? (-127 - 1) : ((var_1 ? 0 : (var_9 >= 10252732755879731620)))))));
    var_23 = var_4;
    #pragma endscop
}
