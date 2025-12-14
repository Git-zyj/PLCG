/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_5 ? (241 | var_7) : ((var_3 ? -113 : var_2))))) ? 8817200946835478838 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (max((((-((var_5 ? 18012 : (arr_0 [i_0])))))), (min(-8817200946835478838, (~var_5)))));
                var_16 += var_1;
                arr_5 [i_0] = (arr_0 [i_0]);
                var_17 += (max((((var_10 ^ (arr_0 [i_1])))), (((max(var_3, (arr_1 [i_0]))) | 113))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_2] [i_0] = arr_10 [i_3];
                            var_18 += (min(-var_6, ((var_1 ? var_5 : (arr_2 [i_1] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
