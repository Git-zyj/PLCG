/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-((((min(3, 1))) ? 1472992918 : -82)));
    var_20 = 1;

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 ^= var_7;

        for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_22 = (~(arr_3 [i_0 + 1] [i_1 + 1]));
            arr_6 [i_0] = ((((min(((min(var_7, (arr_5 [i_0])))), (arr_4 [1] [3] [1])))) % (arr_1 [3] [i_0])));
            var_23 = (min(var_23, ((min((1 - -565087121), -17560)))));
            arr_7 [5] [i_0] [2] = 1;
        }
        for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_24 = (min(((-(arr_5 [i_0]))), ((-54 ? (arr_5 [i_0]) : (arr_5 [i_0])))));
            var_25 = (arr_2 [0]);
            var_26 |= ((-((max((arr_10 [i_0 - 3] [i_2]), (arr_10 [i_0 - 2] [i_2]))))));
        }
    }
    for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_27 = (((max((arr_3 [i_3 - 3] [i_3 - 1]), var_4))) ? (((arr_11 [i_3 + 1] [i_3 - 3] [i_3]) ? (arr_3 [i_3 - 2] [i_3 - 1]) : 254)) : (arr_3 [i_3 - 2] [i_3 - 4]));
        arr_14 [i_3] = var_13;
        arr_15 [3] [i_3] = ((var_12 ? ((min(1, -13))) : var_16));
        arr_16 [i_3] = (((((32767 ? 42839 : (max(0, -565087111))))) ? ((-((~(arr_12 [15]))))) : (((-(!var_16))))));
    }
    #pragma endscop
}
