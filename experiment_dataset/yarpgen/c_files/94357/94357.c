/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [1] [i_0] = ((!((((var_8 > var_2) - (~var_6))))));
        arr_3 [i_0] = (max((max(var_1, (var_5 ^ var_13))), ((var_5 & (1311 ^ 1)))));
        var_15 = ((!((((~var_9) ^ (1301 << 0))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (max(((((min(var_3, var_7)) >= (var_8 * var_6)))), (max(var_7, ((max(var_4, var_10)))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_17 = (max((-var_1 >= var_0), (max((var_4 + var_6), ((max(var_12, var_6)))))));
            var_18 = (max((((((min(var_6, var_6)))) <= (min(var_7, var_5)))), (4294967295 == -829692781)));
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = (max(var_19, var_10));
        arr_11 [i_3] = (((max((var_10 | var_10), var_13)) < ((((((min(var_1, var_5))) < ((min(var_2, var_4)))))))));
        var_20 = var_5;
        var_21 = (max(var_4, var_2));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_14 [i_4] = var_0;
        var_22 = ((((((!((max(var_12, var_13))))))) != (min((max(var_13, var_7)), (var_8 || var_8)))));
        arr_15 [i_4] [i_4] = ((((max(-var_3, var_4))) || ((max((min(var_7, var_5)), (var_3 ^ var_0))))));
        var_23 = (max(var_6, (min((var_0 | var_6), (var_0 & var_6)))));
    }
    var_24 = ((!((min((min(var_9, var_11)), (min(var_1, var_0)))))));
    var_25 = (max((!var_8), (min((max(var_3, var_6)), (var_0 & var_1)))));
    var_26 = var_13;
    #pragma endscop
}
