/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [0] [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0 - 4] [i_1 - 1]) : (arr_1 [i_1 + 2] [i_1 - 2])));
                var_12 = ((!((!(((3968 ? -8256874705343708485 : 40719)))))));
                arr_7 [3] [i_1] = (arr_2 [i_0]);
                arr_8 [i_0] [i_1] [i_1 + 1] = var_8;
                var_13 = (~8567);
            }
        }
    }
    var_14 -= ((((-492842026339644280 | (min(var_2, var_3)))) == var_6));

    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        arr_13 [i_2 + 1] [i_2] = ((arr_2 [i_2 - 2]) | -3598257914201518142);
        var_15 = (min(var_15, -54196));
        var_16 = (arr_10 [i_2]);
        var_17 = (max(((((((arr_4 [i_2] [i_2] [i_2]) ? 8513451741098167864 : var_9))) ? ((-(arr_0 [i_2]))) : ((1609871742 ? (arr_4 [i_2] [i_2] [i_2]) : (arr_2 [i_2]))))), var_0));
    }
    var_18 = ((var_5 ? (max((41083 ^ var_3), (var_11 >= var_4))) : var_9));
    #pragma endscop
}
