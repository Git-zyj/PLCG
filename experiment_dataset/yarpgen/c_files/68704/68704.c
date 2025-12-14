/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(32767, 32761));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = (arr_3 [i_0]);
            var_16 *= (((arr_5 [i_0] [i_1] [7]) ^ (((((arr_3 [12]) + 32756)) + (((var_14 + (arr_5 [i_0] [i_0] [i_1]))))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = 30996;
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [16] [i_4] [12] &= (arr_6 [i_3] [15]);
                        arr_16 [i_3] [i_2] [1] [i_0] = (min(var_10, (arr_9 [i_0] [i_3 + 1] [i_3 - 2])));
                        var_17 = (max(var_17, var_0));
                        arr_17 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = var_1;
                        arr_18 [i_0] [i_2] [i_3] [i_0] [i_4] [i_2] = (((((arr_12 [i_0]) & var_8))) * (((arr_0 [i_0] [i_3]) - (((arr_9 [i_2] [2] [i_4 - 1]) & (arr_8 [i_0] [i_3] [i_0]))))));
                    }
                }
            }
            arr_19 [i_0] [0] [i_0] = ((!(arr_6 [i_0] [i_0])));
            var_18 = (min(((!(arr_8 [i_0] [i_0] [i_2]))), 1));
        }
    }
    #pragma endscop
}
