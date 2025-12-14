/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (((arr_0 [i_0 + 1]) ^ (min(var_10, (arr_0 [i_0 - 1])))));
                arr_4 [16] [i_1] [16] |= (((((110 != 0) ? var_1 : var_5)) <= ((min((!17), ((-7328552506270598395 ? 27 : 2064384)))))));
                var_12 = (((arr_2 [i_0]) == -64498143));
            }
        }
    }
    var_13 = (((((min(var_6, var_8)) ^ var_2))) && (691 & -92083859));
    #pragma endscop
}
