/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 += ((arr_1 [i_0]) * ((((!(arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = var_10;
        var_12 = (min((arr_2 [i_0]), (((var_6 <= ((~(arr_1 [i_0]))))))));
        var_13 = (!var_8);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_14 = ((+(((214 > var_4) ? (arr_14 [i_0] [i_1] [4] [i_3]) : 23954))));
                        var_15 = ((-(arr_9 [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    var_16 = 1;
    #pragma endscop
}
