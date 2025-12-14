/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (min(((11 / ((1287138896 ? -862137609 : 0)))), ((max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0 - 2]))), (max(var_2, -9773)))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = (min(var_17, -1071272202));
            arr_5 [i_0] = ((arr_1 [i_0 + 1] [i_1]) ? ((min(var_2, (arr_1 [i_0 - 2] [i_0 - 2])))) : 863386945);
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = 1287138896;
                        var_19 = ((5111536161462764588 - (((max(245, 25408))))));
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, (((var_3 - ((var_6 ? (!var_10) : (var_2 - var_6))))))));
    #pragma endscop
}
