/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((8589901824 ? 3115370569 : 32768))) ? (((max((arr_1 [i_0]), var_3)) - (arr_1 [i_0]))) : (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 -= (min((min(0, ((((arr_10 [i_2] [i_3]) ? -108 : (arr_4 [i_3] [i_1] [i_0])))))), ((var_9 ? (-6773722698260460887 / -1660998027) : 10487))));
                        var_18 |= (min((arr_10 [i_3] [i_1]), (min(1, 1872748499))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
