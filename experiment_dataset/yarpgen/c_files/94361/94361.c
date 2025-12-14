/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 &= (((arr_1 [i_0] [i_0]) / (arr_0 [i_0])));
        var_19 = -22;
        var_20 |= ((var_0 || (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_6 [i_1] [i_1] = ((!(arr_4 [i_1] [i_1 + 1] [i_2])));
            var_21 = (max(var_21, (arr_2 [i_2])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_22 |= -3792533625542785112;
            arr_9 [10] &= (~(!var_3));
            var_23 = (min(var_23, 0));
        }
        arr_10 [i_1] [i_1] = (arr_7 [i_1 + 1] [i_1 + 1]);
        var_24 *= (arr_2 [9]);
    }
    var_25 = var_8;
    var_26 = var_12;
    var_27 = (~var_5);
    #pragma endscop
}
