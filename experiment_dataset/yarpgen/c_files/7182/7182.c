/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((((-(arr_1 [i_0]))) - -211)));
        var_17 += (min((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_18 = (arr_1 [i_0]);
        var_19 = ((max((((arr_2 [i_0]) ? 3579005147747728611 : 3579005147747728611)), ((min(6, 21406))))));
        arr_4 [i_0] = 192;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_20 = (min(var_20, ((((52190 <= 192) == ((33836 ? (arr_2 [i_1]) : -6828515164637995387)))))));
        arr_7 [i_1] = (((!192) + (arr_5 [i_1] [i_1])));
    }
    var_21 &= (((3579005147747728611 < 130166245841867626) ? ((18446744073709551614 ? (var_2 / 8390013511956474831) : 52190)) : ((((max(13332, -1470220740)) / 2147483647)))));
    #pragma endscop
}
