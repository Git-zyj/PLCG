/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((((4026531840 ? (arr_0 [i_0]) : (arr_0 [i_0])))) || (arr_2 [i_0])))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_15 -= min(3764050491, ((max(((((arr_5 [i_0] [i_1] [i_1]) > var_4))), (arr_0 [i_0])))));
            var_16 = ((((((-2147483647 - 1) % ((10164984967361645548 ? var_9 : (arr_0 [i_0])))))) ? (((((arr_5 [i_1] [10] [i_1]) || 2611048722)) ? (((2611048703 ? (arr_2 [i_1]) : (arr_5 [i_0] [i_1 + 1] [i_0])))) : var_2)) : (((((arr_0 [i_0]) ? var_12 : 4234929440)) * 5))));
        }
        arr_6 [i_0] [i_0] = ((((640202767 ? (arr_4 [i_0 - 3] [i_0 + 1] [i_0 + 1]) : (max(342831862, -562781907))))) ? ((1719967780 ? (max(3523047060, (arr_5 [i_0 - 3] [i_0] [19]))) : (min(2611048722, var_6)))) : -1219062722);
        var_17 = ((!((min(-1581727205, ((4127462727 ? -2105906077 : 3439493779)))))));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_18 *= 640202773;
        var_19 |= ((((max((arr_9 [12] [i_2 - 2]), (939524096 < -1219062702)))) == (min(((var_1 << (var_1 - 1657970270))), ((8 << (4935602283557811382 - 4935602283557811358)))))));
    }
    var_20 = var_12;
    #pragma endscop
}
