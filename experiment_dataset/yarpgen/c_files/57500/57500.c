/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    var_18 = (!15897);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 *= (max((min(var_13, var_11)), ((((9050 ? 226 : 198))))));
        arr_4 [i_0] = ((~((~(arr_1 [i_0] [i_0])))));
        var_20 = (((((226 ? 57 : 0))) ? ((((-32767 - 1) < (-2147483647 - 1)))) : var_2));
        var_21 = (max(((0 ? 0 : -4740)), 18052));
    }
    var_22 = (1451312161 ? ((1 ? var_12 : ((1 << (var_6 - 8558))))) : ((min((max(198, var_10)), var_10))));
    #pragma endscop
}
