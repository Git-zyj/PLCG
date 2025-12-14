/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max(172184942, (((120 >= (arr_1 [i_0 - 1]))))));
                    var_17 = ((((min(((min(1, 231))), -7))) ? ((((1 < (~2081626183))))) : ((var_7 ? (-9223372036854775807 - 1) : 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (((3406489253530531781 ? 17074889623801565260 : var_13)));
                                arr_15 [i_4] [1] [1] [i_4] [i_1] |= max(((-((1 | (arr_12 [i_0] [i_1] [i_1] [8] [i_2] [i_4] [i_1]))))), ((((((4122782343 ? (arr_1 [i_0 + 1]) : 65535))) > (1080863910568919040 / -18)))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = (min((arr_2 [i_2 - 1] [i_0 - 1]), (arr_4 [i_0 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
