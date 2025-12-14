/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, (((((-1985589184 ? (arr_1 [i_0] [i_0]) : (4081 / 158))) == (max(((144 >> (((arr_1 [i_0 - 1] [i_0 - 1]) - 19526)))), (var_5 || 82))))))));
        arr_2 [i_0] = ((((max(((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0])))), var_3))) | (max((((arr_0 [i_0] [i_0 - 1]) ? 22440 : (arr_0 [i_0 + 2] [i_0]))), (min(var_4, (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_17 = ((!((!(min((arr_0 [i_0] [i_0]), (arr_0 [i_0 + 2] [i_0 + 2])))))));
    }
    var_18 = ((max(var_12, (max(var_1, 32172)))) == (((((((1 ? var_12 : 102))) && 18597147)))));
    #pragma endscop
}
