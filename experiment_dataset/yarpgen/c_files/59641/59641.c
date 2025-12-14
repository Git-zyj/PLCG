/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_0, (((~(!6860520129279803347))))));
    var_18 = ((var_15 ? ((7 ? (!var_0) : var_11)) : (!13700)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 + 1] = (((((var_10 + ((~(arr_0 [i_0] [5])))))) ? (min(12431426356307639417, (arr_1 [i_0 + 1]))) : ((~(((arr_1 [i_0]) & var_8))))));
        var_19 &= ((-251070852 + (-250649981319835095 / -13700)));
        var_20 += 7730215455249131129;
        var_21 = min(6015317717401912190, (((!(((4729404806502994553 >> (((arr_0 [i_0 - 1] [i_0 + 1]) - 30369)))))))));
    }
    var_22 = (((((((var_10 ? var_6 : var_0))) ? ((var_12 ? 13700 : 283668453668146556)) : (var_10 - -2427207465116939855))) - ((6015317717401912199 ? var_4 : var_11))));
    #pragma endscop
}
