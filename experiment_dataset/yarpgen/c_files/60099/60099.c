/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 += (!14801);
        arr_3 [i_0] = ((-4449 ? -300970281 : 300970281));
        arr_4 [i_0] [i_0] = ((-24388 ? ((((arr_1 [i_0 + 1] [i_0 - 1]) < (((!(arr_0 [i_0]))))))) : ((-300970281 ? 300970270 : (300970270 > 300970280)))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_17 = ((((min((arr_6 [i_1] [i_1]), ((min(var_7, var_1)))))) ? (min((arr_6 [i_1] [13]), (min(13760, var_12)))) : var_1));
        arr_7 [i_1] = (+(min((arr_0 [i_1 + 2]), (arr_6 [i_1 + 2] [i_1 + 1]))));
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = var_1;
        arr_11 [8] [i_2] = (!99);

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_18 = (((((max(var_5, var_1)))) <= ((~(var_5 << var_14)))));
            var_19 = 33846;
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            arr_16 [4] [i_4] = ((+(((((arr_8 [i_2]) ? (arr_6 [2] [i_2]) : var_9)) & (arr_0 [i_2 - 2])))));
            arr_17 [i_2] [i_4] = (arr_5 [12]);
        }
        var_20 = (((max(var_6, -1096630298)) != (((((arr_1 [i_2 + 2] [i_2 - 3]) < (arr_9 [i_2 + 1])))))));
    }
    var_21 = 300970280;
    #pragma endscop
}
