/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((((-1531967451 || (-9223372036854775807 - 1)))) << (2 != 0)));
        arr_5 [i_0 - 1] = (((4499173870609855981 < 12902257445893122987) * 2147483647));
        var_11 = 8190825230077617236;
        arr_6 [i_0] [i_0] = ((((10255918843631934387 ? -2217520053039324423 : 536870911))) || -1872677425007522160);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_12 = (min(var_12, ((((4834675133556885448 == 35183835217920) || (2655216171 ^ 12902257445893122979))))));
        arr_11 [i_1] [i_1] |= ((0 && (((92 ? 101 : 163)))));
        arr_12 [i_1] = 1282170223;
    }
    var_13 = (min(827148181, 161));
    #pragma endscop
}
