/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 6439044931653289277;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((max((((1376312853 ? 1245080891 : 1376312853))), ((1376312856 ? (max((-9223372036854775807 - 1), 3366538108248889606)) : (min(3366538108248889602, var_4)))))))));
                    var_13 = (max(var_13, ((((((~(max((arr_3 [4] [i_1]), 15992657936573058301))))) ? 3366538108248889606 : (((((((-9367 ? 9 : var_2))) && (arr_9 [6] [i_1]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
