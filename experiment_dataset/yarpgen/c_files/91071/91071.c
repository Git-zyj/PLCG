/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 2147483624));
    var_19 += ((((((min(2147483611, 2147483624)) / var_8))) ? (max(((var_2 ? var_9 : var_3)), var_10)) : (2147483615 * var_17)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, (((-(arr_0 [i_0]))))));
        arr_4 [i_0] = 4;
        var_21 += ((arr_2 [i_0]) ? ((((var_3 ? -2147483611 : 65517)))) : (((min(var_17, var_1)))));
        arr_5 [i_0] [i_0] = (arr_1 [i_0]);
        var_22 += (min((((-7614100278784508274 ? (~var_2) : ((5579855570666866661 ? 134 : 25))))), ((-24 ? ((78 ? (arr_0 [i_0]) : var_5)) : (((177 ? -2147483611 : var_0)))))));
    }
    var_23 &= var_11;
    #pragma endscop
}
