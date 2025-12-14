/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [15] = var_11;
        var_12 = 16626562663686348886;
        var_13 = (max(var_13, ((((((+(max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) ? ((9223372036854775807 ? 0 : 0)) : ((((0 ? 0 : 0)))))))));
        var_14 = ((~(((((18446744073709551615 ? var_1 : 2994142617))) ? var_6 : (min(1, var_2))))));
    }
    var_15 = (max(var_15, (((var_2 ? ((1 ? (-2147483647 - 1) : 2060075195)) : (var_5 > var_6))))));
    var_16 |= ((((((16259175843139794720 ? -6814670256907610412 : 4294967295)))) ? var_11 : 2060075208));
    var_17 = (var_10 > -11547);
    #pragma endscop
}
