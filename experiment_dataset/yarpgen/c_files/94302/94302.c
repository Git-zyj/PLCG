/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 ? ((max(101, -110))) : var_1));
    var_16 = ((((min(-17352, (9223372036854775807 < 246)))) ? ((var_1 ? (-71 != -17340) : (max(1, 8672274762017502934)))) : (max(8672274762017502934, (9223372036854775807 & 38971)))));
    var_17 = ((((((max(5079534734797530978, 186967923))) ? ((-8672274762017502935 ? 6589251472815521296 : 9223372036854775807)) : (((0 ? 0 : 1))))) != (((((0 ? 9 : 0))) ? (((max(1, 0)))) : ((6589251472815521296 ? 5373791223983090447 : 90))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 += 128;
                var_19 |= 101;
            }
        }
    }
    #pragma endscop
}
