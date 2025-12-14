/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((((var_6 + 2147483647) >> var_5))) ? 5 : 24940)), var_6));
    var_11 = (max(var_11, 24959));
    var_12 = -1104214147;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((!(((5 | ((var_8 * (arr_4 [i_1])))))))))));
                var_14 += (min(-59270, (((-10515 * ((40350 ? var_4 : -1)))))));
            }
        }
    }
    #pragma endscop
}
