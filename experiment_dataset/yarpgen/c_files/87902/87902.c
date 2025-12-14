/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((-(((!((((arr_5 [i_0]) ? -1410703793753413914 : (arr_0 [i_1])))))))));
                var_11 = 3331182310;

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] = -3331182315;
                    var_12 = arr_0 [1];
                }
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
