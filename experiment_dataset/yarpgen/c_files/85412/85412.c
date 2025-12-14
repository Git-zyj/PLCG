/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((156 ? -1157493852 : -61))) ? -24 : ((17592186044412 ? -2676244722684994548 : 4959))))) ? var_10 : (max((min(var_11, 0)), 1108955051))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (var_5 | 55);
                arr_7 [i_0] [i_1] = (((!var_10) ? (!1070703970) : ((59214 ? 2146435072 : var_2))));
            }
        }
    }
    #pragma endscop
}
