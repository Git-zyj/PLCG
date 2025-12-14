/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_14 = (3117677343690726742 - 3117677343690726750);
                    var_15 = ((var_9 ? (max(829577596, ((-5741 ? var_6 : (arr_0 [0]))))) : (!3117677343690726713)));
                    arr_6 [i_1] [i_1] [i_0] [i_1] = (((arr_5 [i_1] [i_0] [i_1] [i_2]) <= -3117677343690726743));
                    arr_7 [i_1] [i_1] [i_1] = 21435;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_16 = (max(var_16, ((((~(arr_5 [i_3] [8] [i_1 + 1] [i_1 + 1]))) & (((var_2 ? (max((arr_0 [i_3]), var_5)) : var_9)))))));
                    var_17 = (min(var_17, ((max((((!(arr_8 [i_1 - 1] [i_1 + 1])))), (-21444 - 1))))));
                }
                arr_10 [i_0] [i_1] = ((!((((arr_3 [i_1 + 1] [i_1 + 2]) ? -21444 : (arr_3 [i_1 + 1] [i_1 + 1]))))));
            }
        }
    }
    var_18 = var_3;
    var_19 = ((-var_8 ? -3117677343690726767 : (~var_10)));
    var_20 *= (((((((-32767 - 1) ? var_0 : 17)))) && ((max((min(var_9, var_0)), -var_13)))));
    #pragma endscop
}
