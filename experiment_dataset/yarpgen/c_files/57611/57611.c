/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 753005559;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (arr_2 [i_1]);
            arr_7 [i_1] = (arr_5 [i_0] [i_0] [i_1]);
        }
        var_14 = (min(var_14, ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (((4294967295 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [11] [i_0])))))))));
        arr_8 [i_0] = ((~(((((arr_5 [i_0] [i_0] [3]) / 255)) % 253))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_2 [14])));
        var_16 = (max(((((arr_1 [i_2]) == (arr_1 [i_2])))), (min(255, -30800))));
    }
    var_17 &= var_8;
    var_18 ^= 497528422;
    var_19 = (((max((var_0 == 0), (min(1461340699, var_10)))) << (var_6 - 2149667404)));
    #pragma endscop
}
