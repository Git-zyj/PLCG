/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(1013012500, 20175);
    var_15 = (-((var_10 ? -var_6 : -2001165059)));
    var_16 = -var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 = (min(var_17, (max((arr_1 [i_0] [i_0]), 20175))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_1] = var_1;
                var_18 = (min(var_18, ((-((-(((arr_0 [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : var_3))))))));
                arr_9 [i_0] [i_1] [i_1] = var_7;
            }
        }
        var_19 = (((arr_4 [i_0] [i_0] [i_0]) / (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_10 [i_0] [i_0] = (((((arr_4 [i_0] [4] [i_0]) ? ((20191 ? 3571469604 : (arr_5 [i_0]))) : -var_11))) ? (((((arr_7 [i_0] [8] [i_0]) ? var_9 : 4102292394)) << ((((-(arr_4 [i_0] [i_0] [i_0]))) + 45241)))) : ((1486398879 ? var_12 : 192674901)));
        var_20 = ((var_8 ? (min(((2445864739 ? (arr_4 [i_0] [i_0] [i_0]) : 4102292409)), (((arr_2 [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : 3907000375)))) : (((-(arr_3 [i_0]))))));
        arr_11 [i_0] [i_0] = (min(65530, (min((((arr_5 [i_0]) ? var_9 : (arr_0 [i_0]))), (max(var_13, 4294967295))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = arr_14 [i_3];
        var_21 = var_9;
    }
    var_22 = var_8;
    #pragma endscop
}
