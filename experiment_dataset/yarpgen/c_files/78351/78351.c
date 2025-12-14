/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((!(!32767))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = (!-32760);
                var_16 = (((max(0, 3314428584)) < (((min((arr_5 [i_0] [i_1]), 127))))));
            }
        }
    }
    #pragma endscop
}
