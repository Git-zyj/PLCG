/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_16 = ((29718 != ((((((-32767 - 1) ? 955863651148190773 : 27086))) ? (~-29719) : 65535))));
        var_17 = (min(0, (min((~var_12), (~955863651148190773)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = ((((((~0) ? ((min(var_1, (arr_3 [i_1] [i_1])))) : (60151 == 1)))) || ((((arr_0 [i_1]) ? var_0 : (arr_3 [i_1] [i_1]))))));
        arr_5 [i_1] [i_1] = var_10;
        arr_6 [i_1] = ((~(((((arr_2 [3]) & (arr_0 [i_1])))))));
    }
    var_19 = (((~var_5) ? ((((min(var_3, var_11))) ? (~108) : 65535)) : (((var_0 || (var_10 >= var_0))))));
    var_20 = (((~4294967295) ? var_12 : 27092));
    #pragma endscop
}
