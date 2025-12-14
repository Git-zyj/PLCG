/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!(~-8954)))) - (~var_0)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (max((max(61404, var_14)), (arr_0 [i_0])));
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [i_0] = (((min((arr_1 [i_0]), (arr_1 [i_0]))) + var_8));
        arr_6 [i_0] = ((-((min(15, (arr_2 [i_0]))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (arr_0 [i_0]);
            var_17 = (max(var_17, ((((arr_7 [i_1]) ? (max(65521, (arr_7 [i_0]))) : ((-(arr_7 [i_0]))))))));
            arr_9 [i_0] = var_13;
            var_18 = 44139;
            arr_10 [1] = ((((arr_8 [i_0] [i_1]) || var_14)));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_13 [i_0] [8] = (~var_4);
            arr_14 [i_2] &= ((max(var_11, (max((arr_7 [i_0]), var_7)))));
        }
    }
    #pragma endscop
}
