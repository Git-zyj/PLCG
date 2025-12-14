/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89455
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */unsigned int) (unsigned short)65529);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 779304781U))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1] [(short)7] [(unsigned short)4] = ((/* implicit */unsigned char) arr_0 [i_1 - 1]);
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_11 [(unsigned short)10] [i_2] [(short)7] [i_2] = ((/* implicit */unsigned int) 3044517448530495123ULL);
                            var_22 = ((/* implicit */int) 779304810U);
                            arr_12 [i_0] [11] [i_1] [i_2] [i_3] [11] [i_4] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2]), (((/* implicit */short) var_14)))))) / (((arr_4 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) 914216445)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 779304765U))) % (((/* implicit */int) (unsigned char)79)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_17 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_10 [i_0] [(unsigned char)7]);
                            var_23 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]);
                            var_24 = ((/* implicit */unsigned int) arr_3 [i_0]);
                            arr_18 [i_0] [9U] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                            arr_19 [i_5] [i_3] [i_2] [i_1] [(short)1] [i_0] = ((/* implicit */int) 779304743U);
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_0] = ((/* implicit */int) 2760439201U);
                            var_25 = ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2]);
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_2] = ((/* implicit */unsigned int) arr_13 [i_0] [i_0]);
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((max(((-(3515662517U))), (((/* implicit */unsigned int) (short)27288)))), (779304776U))))));
                        }
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_23 [i_0] [i_1] [i_1] [i_3] [i_3]))));
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (-((~(((unsigned long long int) (signed char)40))))));
                        var_29 = ((/* implicit */short) ((arr_14 [i_0]) >> ((((~(var_7))) - (5760122829583424992ULL)))));
                    }
                    arr_30 [i_2] = ((/* implicit */unsigned char) 779304756U);
                }
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */signed char) ((unsigned char) arr_4 [i_0] [i_0] [i_0]));
                    var_30 = arr_3 [i_0];
                    var_31 = ((/* implicit */unsigned short) (unsigned char)189);
                    var_32 = ((/* implicit */unsigned long long int) 3515662495U);
                }
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)61);
                    var_33 = ((/* implicit */unsigned char) ((short) 3515662517U));
                }
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)53)), (((unsigned long long int) -914216456)))))));
            }
        } 
    } 
}
