/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((~((var_8 ? 17670654537621559356 : var_13)))), ((~(~var_9)))));
    var_15 = var_4;
    var_16 &= ((17670654537621559348 ? 2078194716 : 13216155384422797232));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = ((((min(776089536087992260, ((max(7, var_11)))))) ? ((-(arr_0 [i_0] [i_0]))) : (((!(arr_0 [i_0] [i_0]))))));
        var_18 = ((((max(-12, 3811656830))) ? ((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : ((-(max((arr_1 [i_0]), 17670654537621559361))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = -437720769;
        var_19 -= (~var_5);
    }
    var_20 = var_3;
    #pragma endscop
}
