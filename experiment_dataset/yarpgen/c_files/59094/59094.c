/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 196;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 += 196;
            var_15 = (min(var_15, ((min(var_3, (4294967295 + var_9))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [2] = (max((((280216045 ^ (((!(arr_7 [i_0]))))))), 3));
            arr_10 [i_0] [i_2] = (arr_2 [i_0] [i_0]);
            var_16 = (min(var_16, ((min((((arr_0 [i_2] [i_0 + 2]) ? (arr_0 [i_0 + 1] [i_0 + 2]) : (arr_0 [i_0 + 2] [i_0 + 2]))), ((((max((arr_2 [i_0] [i_0]), var_11))) + ((min(32767, (arr_5 [i_2] [i_2] [i_2])))))))))));
        }
        var_17 = (arr_1 [i_0] [i_0]);
        arr_11 [i_0] = ((((~((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0])))))) % ((+(((arr_5 [i_0] [i_0 + 1] [i_0 + 1]) | (arr_5 [i_0] [1] [i_0])))))));
    }
    #pragma endscop
}
