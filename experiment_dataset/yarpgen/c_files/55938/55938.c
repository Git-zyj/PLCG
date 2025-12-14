/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [8] |= (arr_1 [10]);
        arr_3 [i_0] [i_0] = var_5;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 = (max(((min(var_3, ((140 ? 115 : -2))))), (((var_5 + -8217172389211510011) ? (~var_2) : ((-2 ? 1 : 1838855301581562610))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((~(max((((arr_6 [i_1] [i_2] [i_0]) - (arr_10 [i_0]))), 255))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    var_14 -= (((arr_6 [i_0] [i_4] [14]) ? -16252928 : ((((!(arr_9 [i_0] [i_0] [i_4] [i_5])))))));
                    var_15 = (arr_7 [i_0]);
                }
            }
        }
    }
    var_16 = var_7;
    var_17 -= var_3;
    #pragma endscop
}
