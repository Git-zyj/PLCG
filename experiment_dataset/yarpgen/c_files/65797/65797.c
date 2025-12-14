/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [14] [i_0] = (arr_0 [i_0]);
        var_17 *= (~0);
        var_18 = (max(var_18, (((!(!-63))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = -6933862780092181182;
        var_20 = ((26 ? ((84 ? ((392347002 ? 7740 : 55980770875433790)) : -6979531472763973129)) : (arr_2 [i_1])));
    }
    var_21 = (min(23, (max(18045927709984742559, 6933862780092181182))));
    var_22 = (min((!1740366174), (max(-392346983, 65507))));
    var_23 = ((!(((-63 ? var_6 : (var_10 != var_8))))));
    #pragma endscop
}
