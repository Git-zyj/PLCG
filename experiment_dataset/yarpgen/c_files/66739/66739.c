/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 = -597927975;
        var_21 += (max((-597927982 == 597927983), (arr_1 [i_0 + 1] [i_0 + 1])));
        var_22 = (min(var_22, ((((~1) ? ((-(arr_0 [i_0 - 2]))) : ((1 ^ (arr_0 [i_0 - 1]))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [i_1] [i_1]);
        var_23 = ((-(min((max(var_11, var_7)), (var_9 - 1)))));
        var_24 += (((((arr_4 [i_1] [i_1]) || (arr_4 [i_1] [i_1]))) ? (((arr_4 [i_1] [i_1]) ? (~var_3) : (102 == -597927988))) : (arr_4 [i_1] [i_1])));
    }
    var_25 = (!var_2);
    var_26 = 1;
    var_27 += var_9;
    #pragma endscop
}
