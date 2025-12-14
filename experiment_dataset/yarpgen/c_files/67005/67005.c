/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~4160581156);
    var_12 = ((var_6 ? ((((var_7 != (!var_8))))) : (max(13, ((max(var_1, 76)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [14] [12] = max(2096896, 2096896);
        var_13 = (max(var_8, (min(19, (((arr_0 [i_0]) ? 61363740 : (arr_1 [i_0] [i_0])))))));
        var_14 = (min(var_14, ((((arr_1 [i_0] [9]) ? ((-((2096896 - (arr_0 [i_0]))))) : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = (+(((arr_1 [i_1] [i_1]) / (arr_3 [i_1] [i_1]))));
        arr_5 [i_1] = (arr_3 [i_1] [0]);
        var_16 = (((((-((((arr_3 [i_1] [i_1]) > (arr_4 [i_1]))))))) ? (((arr_4 [i_1]) ? ((max((arr_1 [i_1] [i_1]), var_5))) : (arr_0 [18]))) : ((((((((var_3 < (arr_4 [i_1]))))) == ((-2071222482 ? 3140472461 : -263352506))))))));
        arr_6 [i_1] = 3972702182;
    }
    #pragma endscop
}
