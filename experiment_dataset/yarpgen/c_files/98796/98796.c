/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = var_9;
            var_12 -= ((!((max(6501787646751561808, 0)))));
        }
        var_13 *= var_7;
        arr_7 [i_0] = (min((((~(~var_7)))), ((~(~var_5)))));
        var_14 = (min(var_14, var_2));
        var_15 |= var_2;
    }
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((((min(var_1, var_11))) ? ((min(var_11, 0))) : (!var_6)));
                    var_17 = (min(var_17, ((min((arr_9 [i_2]), (max((min((arr_9 [i_4]), var_5)), (((var_10 >= (arr_13 [i_2] [i_3] [i_4])))))))))));
                }
                arr_18 [i_2] [i_3] [i_3] = (~var_4);
                var_18 &= ((-((157 ? ((var_2 ? 1 : (arr_8 [i_2]))) : 8499))));
            }
        }
    }
    #pragma endscop
}
