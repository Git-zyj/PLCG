/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!var_1);
        var_14 = ((0 ? 0 : 11612711383664341838));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_15 = (min(var_15, (!-105)));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (arr_3 [i_1 - 2]);
            arr_9 [i_1] = ((((((arr_5 [i_2]) ? (arr_4 [i_1 + 1]) : (arr_5 [i_1])))) ? 25753 : (((arr_5 [i_1]) - (arr_4 [i_1])))));
        }
        var_16 |= ((27 >> (!-1353146252)));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_17 = (((!-1519943410) & 2098506590));
        var_18 = (min(var_18, (((-(((!(arr_11 [i_3])))))))));
        var_19 -= (!((var_9 || (arr_10 [i_3] [i_3]))));
    }
    var_20 = (var_6 / var_5);
    #pragma endscop
}
