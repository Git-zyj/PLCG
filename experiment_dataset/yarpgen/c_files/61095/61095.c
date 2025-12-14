/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 ? (min((27425 < 1), var_14)) : ((max((min(var_0, var_17)), (max(1, var_8)))))));
    var_20 = (min(((975346507 ? 975346507 : 3319620771)), (~var_18)));
    var_21 += var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [3] [1] [i_2] [i_2] [11] = ((-(((2147483647 == 1) ? (arr_5 [i_2] [i_2] [6]) : (~12474744095642175502)))));
                                var_22 = (max(10143995080895015173, (((1 ? var_10 : (arr_3 [i_2]))))));
                            }
                        }
                    }
                    var_23 = (max(var_13, ((min(1, (arr_10 [i_2] [i_1] [2]))))));
                }
            }
        }
    }
    #pragma endscop
}
