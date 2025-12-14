/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = 127;
                    var_19 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
