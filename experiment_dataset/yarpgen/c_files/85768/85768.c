/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_0 ? (max(-1, var_9)) : var_3))) ? ((min((min(-4366459805304829502, 0)), var_6))) : ((((max(var_3, 20))) * ((var_5 ? var_8 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((arr_4 [i_0] [12]) ? (~0) : (((((var_2 >> (((((-2147483647 - 1) - -2147483632)) + 28))))) ? var_7 : (arr_3 [i_0] [i_0] [i_0]))));
                var_13 = (min(var_13, ((max(((+(((arr_1 [i_1] [i_0]) * -1)))), (((((arr_3 [i_0] [i_0] [16]) * 169638290)))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (arr_3 [i_0] [i_1] [i_0])));
                            var_15 = ((-((~((var_10 ? 0 : var_0))))));
                            var_16 = (max((arr_4 [i_0] [i_0]), (((((max((arr_3 [i_0] [i_0] [i_0]), (arr_9 [2] [i_1] [2] [i_1] [i_1] [i_1]))))) ^ (min(4294967272, (arr_4 [i_0] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            {
                var_17 = (max(var_17, (((-1576499057 * (0 / 4125329005))))));
                var_18 = (arr_12 [i_5 + 2] [i_5 + 1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 = ((-1 ? (min((arr_12 [i_4] [i_4]), ((min(-38, (arr_16 [i_7] [i_6])))))) : ((-(arr_19 [i_4] [i_4] [i_6] [i_6] [i_4])))));
                            var_20 = -2147483647;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
