/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (min(var_19, (((((((152648475 ? 152648487 : 152648475)))) ? ((4142318828 ? 1 : ((1 ? 6782069830359177962 : 7638535337698774560)))) : 4142318809)))));
        arr_2 [i_0] [1] = 3762768723;
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = 6782069830359177959;
        arr_6 [i_1] [i_1] = 1;
    }
    #pragma endscop
}
