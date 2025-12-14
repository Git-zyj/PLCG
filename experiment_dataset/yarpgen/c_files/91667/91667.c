/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_8, var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (max((~-76), ((-40 + (arr_7 [i_3] [i_3] [i_3] [i_3])))));
                            var_15 = max(24, (min(var_0, var_0)));
                        }
                    }
                }
                var_16 ^= (7 - -23);
            }
        }
    }
    var_17 ^= min(32760, 116);
    var_18 = (max(var_18, ((((max(31284, ((min(var_9, 7))))))))));
    var_19 = (max(var_19, (((((-((min(var_6, var_5))))) << (var_1 - 16824))))));
    #pragma endscop
}
