/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [17] = (arr_4 [15]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_19 = 28;
                        var_20 = (arr_0 [i_0]);
                        var_21 = (((max(2862182600140671417, 2147483640)) << (2422 - 2421)));
                        var_22 = 536869888;
                    }
                }
            }
        }
        var_23 = ((-(min((((var_16 << (((arr_6 [i_0] [i_0] [i_0]) - 51450))))), 9223372036854775807))));
        var_24 = (min((!2147483629), ((24 ? (arr_4 [i_0]) : 2147483638))));
    }
    var_25 = 2147483640;
    #pragma endscop
}
