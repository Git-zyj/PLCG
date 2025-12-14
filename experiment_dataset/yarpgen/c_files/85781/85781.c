/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((!((min(var_15, var_16))))), var_3));
    var_18 = var_12;
    var_19 = (~var_16);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_2] [i_1] [18] [i_3] = 1048575;
                        var_20 = (min(var_20, ((((-(~16777215)))))));
                    }
                    var_21 = min((~104), ((max(79, var_5))));
                }
            }
        }
        var_22 = (min(408051042, -1809849771));
        var_23 = (min(var_23, ((min((~-1), (max(2616274946818530564, 210)))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_24 = (min(var_24, (((-(((-24185 + 2147483647) << (((-408051042 + 408051057) - 15)))))))));
        arr_12 [i_4] = 104;
        var_25 = (min(var_16, 23));
    }
    #pragma endscop
}
