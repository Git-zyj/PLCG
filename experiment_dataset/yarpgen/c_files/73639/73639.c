/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = ((var_5 ? ((var_9 ? var_11 : ((var_10 ? var_1 : var_3)))) : 16476));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 += (((arr_0 [i_0] [i_0]) ? (arr_0 [1] [1]) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_16 = (((((arr_0 [i_0] [2]) || var_11)) ? (1698285030881770064 ^ 433437014) : var_1));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_3 [i_1]))) * 1));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = (min(4934962950258245082, (arr_2 [i_1])));
            var_18 = (min((arr_2 [i_1]), (((arr_8 [i_1] [i_2]) ? var_5 : (arr_7 [i_2])))));
            arr_9 [i_1] [i_2] = (((max(((var_6 ? (arr_2 [i_1]) : -36)), 552772241))) ^ (arr_6 [i_2]));
            var_19 ^= 5657893752970535861;
        }
    }
    #pragma endscop
}
