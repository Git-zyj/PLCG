/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max(var_11, (((!(~var_1))))));
        var_12 = (max(var_12, (((((((var_0 >= var_3) || (~17377382514061946745)))) - ((-((var_6 ? (arr_2 [12]) : (arr_2 [i_0]))))))))));
        var_13 = (min(var_13, ((((56 ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    var_14 = ((3514483979 << (-3337994911620914561 + 3337994911620914566)));
    #pragma endscop
}
