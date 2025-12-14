/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [16] [i_2] = max(-51, (((0 && ((max(51, 4824276234171671645)))))));
                    var_13 = max(31, -10670);
                    var_14 += (((+(min((arr_1 [i_0] [i_0]), var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
