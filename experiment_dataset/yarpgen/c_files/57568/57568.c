/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((max(24194, -24195))) + var_7))) ? (((var_1 > (((13 ? 24194 : 24194)))))) : (((var_7 != ((1877526357509189054 ? var_3 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((min(((24194 ? (arr_0 [i_0 - 1]) : (arr_0 [i_1]))), (max((arr_4 [i_0 - 1] [i_0 - 1] [i_1]), (arr_3 [i_0] [i_0 - 1] [i_1])))))))));
                var_14 = (min((((var_11 & -24194) & ((~(arr_4 [17] [i_0] [12]))))), ((51 + (((!(arr_1 [i_0]))))))));
            }
        }
    }
    var_15 = ((71916856549572608 ? (max(var_3, var_4)) : 71916856549572614));
    var_16 = ((((min(-71916856549572600, (-32767 - 1)))) != ((-(var_1 % 52)))));
    #pragma endscop
}
