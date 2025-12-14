/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_3 [i_1 + 2])));
                var_18 *= (0 ^ (min(1, 18446744073709551606)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] = (max(((((arr_7 [i_0] [i_0] [i_3]) ? 0 : 1))), ((((arr_8 [i_3] [11] [i_2] [i_1] [11]) ? ((max(var_4, -1))) : (0 + 255))))));
                            var_19 = ((((((arr_2 [i_1 + 3]) != 1))) % 30927));
                            arr_11 [i_0] [i_0] [i_1] [9] [i_0] [i_3] = (arr_7 [i_3] [i_1] [i_0]);
                        }
                    }
                }
                var_20 = (min(var_20, (((((93 ? 4294967275 : (arr_9 [i_1] [i_1 - 1] [i_1] [i_1 + 3]))) / ((-(arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 4] [i_1 + 2]))))))));
            }
        }
    }
    #pragma endscop
}
