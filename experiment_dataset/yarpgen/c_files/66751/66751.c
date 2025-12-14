/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (96 ? ((((((((!(arr_1 [i_0] [i_0]))))) >= (arr_3 [i_1] [i_1]))))) : ((((max(1, var_4))) ? (((-1 ^ (arr_1 [i_0] [i_0])))) : ((9 ? 3584 : 52776558133248)))));
                var_18 = ((1 ? (arr_2 [i_0] [i_1] [i_1]) : ((1317174816319255708 ? 8982414938115195334 : 17314000067554381624))));
                var_19 *= ((((((((max((arr_1 [i_1 + 2] [i_0]), (arr_1 [4] [i_1]))))) * ((1132744006155169992 & (-9223372036854775807 - 1)))))) && (arr_0 [20])));
            }
        }
    }
    #pragma endscop
}
