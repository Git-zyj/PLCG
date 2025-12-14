/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(2, (((29089 << (var_1 - 1374732109))))))) ? 2 : 2308233493));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = (min(((var_2 ? var_8 : 2)), 32768));
                    var_12 = (max(var_12, (((2504882986 <= ((var_1 >> ((((29089 ? 25362 : 23025)) - 25354)))))))));
                }
            }
        }
    }
    #pragma endscop
}
