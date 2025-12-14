/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = ((-((((-401136871 / var_3) == var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (min(65512, ((-11 ? 65518 : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0])))));
                                var_19 = (min(var_19, -var_14));
                                arr_13 [i_0] [i_0] = (min((arr_7 [i_0] [i_1] [i_2 + 1]), ((3769320860 ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                                var_20 = (max(var_20, (((!(((((arr_1 [i_1]) ? 65518 : (arr_2 [6]))) != ((((arr_6 [i_2 + 1] [i_3] [i_0]) / -106596390977462822))))))))));
                                var_21 = ((((min((max((arr_12 [i_0] [i_3]), var_13)), 24576))) ? (((!14) ? 62227 : 1)) : ((((var_7 && (((8137 ? -104 : 16125)))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [0] [i_0] = (arr_9 [i_0] [i_0] [i_1] [i_2]);
                    var_22 *= (12 && 1);
                    var_23 &= (~1865923772);
                }
            }
        }
    }
    var_24 = ((-16119 ? 1 : ((((12485 ? 1 : 4294967292)) * 4294967285))));
    #pragma endscop
}
