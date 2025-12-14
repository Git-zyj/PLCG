/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 >= 82);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_0] [i_0] = 118;
                        var_16 += (min((arr_4 [i_3] [i_1 - 2] [i_2]), (((((~(arr_4 [i_3] [i_1 - 2] [i_3])))) ? -118 : (((arr_4 [i_3] [i_2] [i_3]) ^ 56457))))));
                        var_17 = (max(var_17, 262979760));
                    }
                }
            }
        }
        var_18 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0]);

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_19 = (arr_0 [i_4]);
            var_20 = (max(var_20, (~var_0)));
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_16 [i_5] = var_9;
        var_21 += (((((118 << (8795019280384 - 8795019280371)))) ^ (arr_14 [i_5] [i_5])));
        var_22 = (!-19199);
    }
    #pragma endscop
}
