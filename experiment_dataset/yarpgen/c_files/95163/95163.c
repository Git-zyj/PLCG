/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : var_11))));
        arr_4 [i_0] = var_4;

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1 - 1] = (((((-1693757117 - (arr_1 [i_1 - 1] [i_1 - 1])))) ? (((((var_1 ? 62022 : (arr_0 [i_1 - 1])))) ? ((max(var_12, var_3))) : (max(var_1, (arr_6 [i_0] [i_1 + 1] [i_1 + 1]))))) : ((max(var_2, (((!(arr_2 [i_0])))))))));
            var_14 = (max(var_14, ((4032298407 ? 9022950708766458037 : ((((-var_5 && (9423793364943093578 && 0)))))))));
        }
        var_15 = ((min(9423793364943093579, 30)));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_16 = (arr_8 [i_2]);
        arr_10 [i_2] = min(1, 4001594471131451041);

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_17 *= ((~(arr_1 [i_2] [i_3 + 1])));
            var_18 = (max(((-(min(var_3, (arr_9 [i_2]))))), ((-(arr_5 [i_3] [i_3 + 1] [i_3 + 1])))));
        }
        arr_14 [i_2] = ((((-(arr_8 [i_2]))) / ((max((arr_8 [i_2]), (arr_8 [i_2]))))));
        arr_15 [i_2] = (-((-(arr_1 [i_2] [i_2]))));
    }
    var_19 = (((-7005324401063898906 && -0) - var_6));
    var_20 = var_10;
    var_21 = ((var_9 ? ((min(var_1, var_10))) : (((var_2 << (var_4 - 479324293))))));
    #pragma endscop
}
