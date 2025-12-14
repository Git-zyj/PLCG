/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] = (((max(((-16773 ? 215 : var_15)), var_7)) & -var_2));
                var_17 = ((((max(((min((arr_5 [i_0 + 3] [i_1]), (arr_4 [i_0])))), (arr_4 [i_1])))) ? (max((((arr_5 [i_0] [i_1]) ? (arr_1 [i_0]) : 197)), (((arr_1 [i_0]) / -8)))) : ((-((min(-3679, -2577)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = (min(var_18, (((!(arr_7 [i_2] [i_3 - 1]))))));
                arr_11 [i_2] [i_2] [i_3] = (min((((arr_10 [i_3 - 1] [i_3] [i_3 - 3]) && var_12)), (!-62)));
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_19 -= (((arr_7 [i_4] [i_4]) ? (((!(((var_14 ? (arr_14 [i_4]) : var_4)))))) : (231 == var_4)));
        arr_15 [i_4] = (((((-((min(var_3, 11)))))) ? 0 : (((arr_13 [i_4] [i_4]) + (arr_13 [i_4] [i_4])))));
        var_20 = ((((max((arr_3 [i_4] [16] [i_4]), var_2))) > ((min(var_9, (arr_10 [i_4] [i_4] [i_4]))))));
    }
    var_21 = 33;
    #pragma endscop
}
