/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max((min((-1753134141 - 25717), (min(1753134141, 4198126247579637837)))), (((7757379542470401207 != (-2147483647 - 1))))));
                arr_6 [i_0 + 3] [i_0] |= ((6507444800745138227 ? 19 : 1753134154));
                arr_7 [i_0] [i_1] = (-3378227075309825899 & -1973173452413143712);
            }
        }
    }
    var_14 |= (((((var_10 > (!54)))) * (((var_6 == var_1) / (-2147483647 - 1)))));
    var_15 += 1753134126;
    #pragma endscop
}
