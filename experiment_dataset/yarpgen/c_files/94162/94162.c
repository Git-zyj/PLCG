/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((17736 ? 1 : 3247929045336325378));
                var_11 = ((((3247929045336325378 >> (3232239420 - 3232239411))) > ((((max(var_0, 1)))))));
                var_12 = 8;
            }
        }
    }
    var_13 = ((((((var_5 ? 3247929045336325362 : var_1)))) < var_0));
    #pragma endscop
}
