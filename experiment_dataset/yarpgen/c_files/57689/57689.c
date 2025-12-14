/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((!((!(!var_13))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((!(((-((-(arr_0 [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (--866637322);
                                arr_11 [i_1] = (arr_10 [i_0] [i_0] [i_0] [8] [i_0] [i_0 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 *= (!var_7);
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                var_23 = (min(var_23, (((~(+-7))))));
                arr_16 [4] [i_6] = (((-(~-8))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = (min(var_24, (~71)));
                            arr_24 [i_5] [i_5] [i_5] [i_5] = 4481777286021758721;
                        }
                    }
                }
                var_25 = (min(var_25, (((~(((!(((~(arr_15 [i_5]))))))))))));
            }
        }
    }
    #pragma endscop
}
