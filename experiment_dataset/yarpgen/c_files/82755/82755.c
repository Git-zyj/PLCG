/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (((((arr_3 [i_1 + 1] [i_1 - 2]) ? 8 : (arr_2 [i_1 - 2] [i_0])))) ? (min((arr_3 [2] [i_1]), var_14)) : (((-11184 ? -345 : ((min((arr_2 [i_0] [i_1]), (arr_1 [i_1]))))))));
                arr_4 [i_0] = (((max(var_8, (arr_0 [i_1 - 1])))));
            }
        }
    }
    var_17 -= var_1;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_18 = (max(var_18, var_9));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_16 [i_4] = (arr_14 [i_2] [i_4 - 1]);
                        var_19 -= 2145860883128943769;
                    }
                }
            }
        }
    }
    #pragma endscop
}
