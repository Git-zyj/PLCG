/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-(max(0, 9223372036854775799)))), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (arr_1 [i_0]);
                var_17 = ((-((((max(1, 255))) / ((max(var_13, (arr_4 [i_1] [1] [11]))))))));
            }
        }
    }
    var_18 = 0;
    #pragma endscop
}
