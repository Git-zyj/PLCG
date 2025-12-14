/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((-127 - 1), -112)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = -182270992;
        arr_3 [i_0] [i_0] = ((~(arr_0 [i_0])));
        var_11 = ((-384149728 ? (var_6 && -var_5) : ((((-(arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_12 *= var_5;
        var_13 = var_4;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_14 = ((50679 ? ((0 ? ((((arr_0 [i_2]) ? (arr_7 [i_2] [i_2]) : 107))) : 1702602704)) : (~var_0)));
        var_15 = (max(var_15, (((+(((arr_8 [i_2]) ? (arr_6 [i_2]) : var_2)))))));
        arr_10 [i_2] = ((((((182270992 ? 4112696304 : 14857)))) ? (arr_0 [i_2]) : (((4112696304 ? (-127 - 1) : 4112696303)))));
        var_16 = (((arr_6 [i_2]) ? (65379 + 18446744073709551615) : (((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_9 [i_2] [i_2])))));
    }
    #pragma endscop
}
