/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = ((((((max(var_13, (arr_1 [i_0])))) ? (min(var_4, (arr_0 [i_0]))) : (((((arr_0 [i_0]) || var_4)))))) % ((((((4095 * (arr_1 [i_0]))) != (((max(var_10, (arr_1 [i_0])))))))))));
        var_15 = min(4294963183, ((((var_13 + var_10) && ((min(var_7, (arr_0 [i_0]))))))));
        arr_2 [12] [i_0] = ((((((arr_1 [i_0]) >= var_1))) & ((max((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_16 *= (max((((!(arr_1 [i_0])))), (((arr_1 [i_0]) & (max(-7346047077411099179, (arr_1 [i_0])))))));
        arr_3 [i_0] = ((!(arr_1 [i_0])));
    }
    var_17 = (max((max((var_2 % 4), var_3)), ((((var_13 / var_10) ? ((max(var_7, var_5))) : ((min(var_11, var_5))))))));
    var_18 = ((var_12 != (max((((14 ? 3783 : 2220673667))), var_13))));
    #pragma endscop
}
