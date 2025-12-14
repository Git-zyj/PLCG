/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((-(((((18159577172766774655 ^ (arr_1 [i_0]))) <= (((arr_1 [i_0]) ? var_0 : (arr_1 [i_0]))))))));
        var_18 = (max(var_18, var_13));
    }
    var_19 = var_3;
    var_20 = var_14;
    var_21 = var_10;

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        var_22 = (((arr_3 [i_1] [i_1]) ? -340437612671155155 : (arr_3 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = (min((arr_2 [i_1] [i_1]), -var_3));

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_2] = (arr_4 [i_2 + 3] [i_2 + 3]);
            var_23 = (((((-66 ? var_5 : ((((arr_8 [i_2]) != (arr_7 [i_1]))))))) % (-3325992303751904856 % var_2)));
            var_24 = (max(var_24, ((((340437612671155161 / (((var_5 ? -73 : 991)))))))));
        }
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        var_25 = (arr_10 [i_3]);
        var_26 = (((arr_2 [i_3 - 2] [i_3]) ? ((min((arr_10 [i_3]), (arr_2 [i_3 - 2] [i_3 + 1])))) : (((arr_8 [i_3]) ? (arr_8 [i_3 - 1]) : var_7))));
    }
    #pragma endscop
}
