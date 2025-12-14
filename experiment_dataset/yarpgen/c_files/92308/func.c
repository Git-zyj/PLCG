/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92308
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (+(1037927002))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-26558))))) ? (max((((((/* implicit */unsigned int) 1037927002)) & (2486344949U))), (max((var_3), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (unsigned short)29651)) : (((/* implicit */int) var_4))))) : (var_12))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_3] [16U])) ^ (-1037927002)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (max((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4])), (var_12)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned int) (+(((/* implicit */int) arr_5 [i_2 - 1] [9LL] [i_2 + 2]))))))));
                    var_23 = ((/* implicit */int) max(((unsigned char)208), (((/* implicit */unsigned char) (_Bool)0))));
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_3 [i_2 + 2]);
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (short)32627)) << (((-1037927002) + (1037927011)))));
        arr_14 [10U] [(unsigned short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2496)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)1])) - (((/* implicit */int) (unsigned short)8037))))) : (arr_9 [(short)15])))) : (((max((6615955980515369868LL), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [10U] [i_0] [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
}
