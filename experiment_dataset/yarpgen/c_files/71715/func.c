/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71715
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
    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (short)13796))))) ? (((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) var_1)))) : ((-(var_15)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) var_9);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (var_9)))));
                        arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) & (arr_5 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_0] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) (unsigned short)1536)))) : (((((/* implicit */int) var_16)) | (((/* implicit */int) var_11))))));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_9);
                            arr_19 [i_0] [i_1] [i_3] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1546809948)))) / (arr_14 [i_0] [i_2] [i_2] [i_0] [i_2]));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)3)) ^ (((/* implicit */int) (unsigned short)57045))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~((~(arr_6 [i_1] [i_3] [i_4]))))))));
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) (-((+(min((2854416293U), (((/* implicit */unsigned int) var_13))))))));
                        var_23 = ((/* implicit */signed char) var_10);
                        var_24 -= (+(((((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_5])) % (((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)8476)))))));
                        arr_23 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)121)) << (((4294967295U) - (4294967295U)))));
                    }
                    for (unsigned char i_6 = 4; i_6 < 8; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 1369100711742316816ULL)) ? (((((/* implicit */_Bool) (short)13789)) ? (((/* implicit */unsigned long long int) -1457313868)) : (15304542552907692148ULL))) : (((/* implicit */unsigned long long int) max((4205100436448962025LL), (((/* implicit */long long int) (unsigned char)213)))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) var_16)))))));
                        arr_27 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)226)), (var_6)));
                    }
                }
            } 
        } 
    } 
}
