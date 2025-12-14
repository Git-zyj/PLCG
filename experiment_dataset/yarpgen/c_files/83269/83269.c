/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [6] = (((arr_6 [i_0] [0] [i_0] [i_1 - 1]) ? var_4 : ((var_9 ? (arr_3 [i_1]) : var_14))));
                    var_16 = (((((var_0 >> (var_12 + 5248420362131217615)))) ? (((((arr_1 [i_2 - 1]) < var_8)))) : (~var_1)));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_17 *= (((arr_9 [i_1 + 1]) ? ((var_15 ? var_7 : var_0)) : (((var_6 ? (arr_12 [i_0] [i_0]) : var_9)))));
                            arr_14 [i_4] [11] [i_0] [i_2] [i_1] [i_0] = (!10);
                        }
                        arr_15 [0] = (arr_12 [i_0] [i_1]);
                    }
                    arr_16 [i_2] [i_1] [i_0] = (var_0 & -var_1);
                    var_18 *= (!(((var_9 ? var_14 : var_8))));
                }
                arr_17 [i_0] [i_1] [i_1] = (arr_6 [i_0] [i_1] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_31 [i_6] [15] [i_7] [i_8] [i_5 - 1] = (((max(var_6, var_11))) || (((+(min((arr_0 [0]), var_8))))));
                                var_19 = ((((var_1 ? (arr_20 [i_8 - 1]) : var_14)) | ((((((var_3 ? (arr_27 [i_9] [i_9] [i_9] [i_9]) : var_0))) ? (arr_29 [i_5] [i_6] [i_5 + 1] [i_8 + 2] [i_6]) : ((var_0 ? var_14 : var_3)))))));
                                var_20 = (max(((((var_12 < var_1) % (arr_18 [i_5 + 1])))), (arr_20 [i_7])));
                            }
                        }
                    }
                    var_21 = (((((+((var_2 ? (arr_27 [i_5] [i_5] [i_5 + 1] [i_5]) : (arr_4 [i_7] [i_6] [i_5])))))) ? (arr_20 [i_5 + 1]) : ((-7817219437805125120 ? 2563860475 : 81))));
                }
            }
        }
    }
    #pragma endscop
}
