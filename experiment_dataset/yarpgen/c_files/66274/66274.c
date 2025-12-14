/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = ((5781 ? ((8191 | (((min(0, 1)))))) : ((((((8167 ? 1 : 119))) ? 55049 : ((1 ? -103 : 1)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = -1405137132;
                            var_12 ^= 0;
                        }
                    }
                }
            }
        }
    }
    var_13 = var_6;
    var_14 = -5084689231202021576;
    var_15 = (min(62551, ((var_1 & ((max(var_6, 1)))))));
    #pragma endscop
}
