/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75892
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), ((~(var_0)))));
    var_18 = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) (short)11368)))))) % (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [(short)15] [i_2] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned char)186)))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 1] [i_0 - 1])) ? (arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 3]))))));
                        var_20 = ((/* implicit */int) min((var_20), (arr_9 [i_0 + 2] [i_1] [i_1] [i_0] [i_0])));
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        var_21 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) max((((arr_6 [(unsigned short)9] [(unsigned char)14] [i_0 + 3] [(unsigned char)14]) % (arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 2] [(unsigned short)8]) << (((arr_9 [(short)12] [i_0 - 3] [i_0] [(unsigned char)11] [16]) + (1629992348)))))))) : (((/* implicit */unsigned short) max((((arr_6 [(unsigned short)9] [(unsigned char)14] [i_0 + 3] [(unsigned char)14]) % (arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 2] [(unsigned short)8]) << (((((arr_9 [(short)12] [i_0 - 3] [i_0] [(unsigned char)11] [16]) + (1629992348))) - (1611066864))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max(((~(arr_9 [i_4] [i_2] [i_1] [i_1] [i_0 + 2]))), (((arr_4 [i_0 - 2] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_1])))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / ((-(arr_6 [i_0] [i_2] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? ((-(5458971060468376873ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131))))) : (((/* implicit */unsigned long long int) (((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28106))))) % (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3896)) % (((/* implicit */int) arr_12 [i_0]))))))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_14 [i_0 + 2] [i_0 + 1] [(signed char)5] [i_0] [1U] [(signed char)11]))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_6 [(unsigned char)15] [i_2] [i_0] [i_0]))));
                    }
                }
            } 
        } 
    } 
}
