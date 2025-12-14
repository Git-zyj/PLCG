/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((var_12 || var_2), var_9)))));
    var_14 = var_5;
    var_15 &= var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (~var_5);
                        arr_10 [i_0] = max((arr_1 [i_0]), (!var_11));
                        var_17 = (min(var_17, var_5));
                        arr_11 [i_0] [9] [i_2] [i_0] = 0;
                    }
                }
            }
            arr_12 [i_0] = (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_1]) : ((((arr_5 [i_0] [i_1]) > (arr_4 [i_0] [i_1]))))));
            var_18 = (arr_0 [i_0]);
        }
        var_19 = (min(var_19, (((var_8 ? (min(var_5, (arr_0 [i_0]))) : ((((~-22563) / (min(-772590773, (arr_8 [i_0] [i_0] [i_0] [15] [i_0] [i_0])))))))))));
        var_20 = (min(var_20, ((min(((((max((arr_4 [i_0] [i_0]), var_7))) ? 31 : (var_0 != var_12))), (arr_5 [i_0] [i_0]))))));
    }
    #pragma endscop
}
