/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (-2147483647 - 1);
        var_12 = ((-(min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = (-2147483647 - 1);
        var_14 = (min(var_14, var_8));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_15 = (arr_3 [i_2]);
            var_16 = ((((((arr_3 [i_1]) ? (max((-2147483647 - 1), -77420265)) : 23912))) ? (min(((max((arr_6 [i_1] [i_1] [i_2]), (arr_5 [i_1] [i_1])))), (arr_3 [i_2]))) : (((max((arr_4 [i_1]), (arr_6 [i_1] [i_2] [i_2])))))));
        }
        arr_7 [i_1] [i_1] = (arr_4 [i_1]);
        arr_8 [i_1] [i_1] = (max((((arr_4 [i_1]) > (arr_3 [15]))), (arr_4 [i_1])));
    }
    var_17 = (var_2 ? (max(3, ((max(var_0, 1))))) : var_9);
    var_18 |= (max(((-(-2147483639 - var_5))), (((((var_2 ? var_9 : var_9))) ? ((43477 ? var_5 : var_8)) : var_1))));
    var_19 ^= ((((max(((var_0 ? var_2 : var_4)), var_0))) ? 15389 : (max(((43477 ? var_3 : var_6)), (max(1, 1101909737))))));
    #pragma endscop
}
