/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((~var_2) ? var_12 : (((10340 > 43715) ? (min(0, 0)) : 9))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (((((-(((arr_2 [2] [i_0]) * (arr_1 [i_0])))))) ? (((((arr_0 [i_0]) - (arr_0 [i_0]))) + ((((arr_2 [3] [6]) * 37))))) : (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (((arr_1 [i_0]) + 36965))))));
        var_19 = ((857007052 && ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [1]))))));
        arr_3 [i_0] = (+-28784);
        var_20 = (max(var_20, (((((min((14459 >> 0), ((max(7, 7)))))) == ((((min(-114, (arr_0 [i_0])))) ? (((((arr_1 [i_0]) < (arr_2 [i_0] [i_0]))))) : ((164 ? (arr_2 [i_0] [i_0]) : 245760)))))))));
        var_21 *= ((10 == -58) ? ((((((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) > (arr_0 [2]))))) : (((((arr_1 [6]) ? (arr_0 [i_0]) : 944701369)) * (((min(38, 1)))))));
    }
    #pragma endscop
}
