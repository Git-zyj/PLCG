/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91931
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
    var_15 = ((/* implicit */long long int) ((unsigned long long int) (short)0));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((unsigned int) 171069085U);
                    arr_6 [i_0] [i_1] [(_Bool)1] [14] &= ((/* implicit */signed char) var_8);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_3 [i_3] [i_2] [i_1]))));
                        var_18 = ((/* implicit */unsigned long long int) ((signed char) arr_8 [i_3] [(short)5] [i_2]));
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        arr_12 [(signed char)4] [i_1] [i_2] [(signed char)6] [i_2] [(signed char)6] = ((/* implicit */short) ((unsigned char) min(((signed char)117), (((/* implicit */signed char) ((171069085U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))))));
                        var_19 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_4]))) ^ (var_7))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (var_8)))))) - (2558291115U)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_4]))) ^ (var_7))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (var_8)))))) - (2558291115U))) - (3473372992U))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_4] [i_2] [i_1])) & (((((/* implicit */_Bool) 8191LL)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned short)45451)))))))));
                        arr_13 [i_0] [7] [i_2] [i_0] [1U] = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4] [i_4])) * (((/* implicit */int) arr_3 [4U] [i_1] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) % (((/* implicit */int) arr_9 [i_2] [i_1] [(_Bool)1] [i_4]))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)20074)) && (((/* implicit */_Bool) (signed char)55))))))) : ((+(((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_4 [i_2])) - (130)))))))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4] [i_4])) * (((/* implicit */int) arr_3 [4U] [i_1] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) % (((/* implicit */int) arr_9 [i_2] [i_1] [(_Bool)1] [i_4]))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)20074)) && (((/* implicit */_Bool) (signed char)55))))))) : ((+(((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */int) arr_4 [i_2])) - (130))) + (21))))))))));
                        arr_14 [(unsigned short)1] [(unsigned short)9] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) ^ (arr_7 [i_0] [1] [(short)11] [i_0])))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (arr_1 [(unsigned short)8])))) << (((((((/* implicit */_Bool) 14119990746337419101ULL)) ? (47220592) : (((/* implicit */int) (signed char)126)))) - (47220573))))) : (((/* implicit */int) arr_9 [i_2] [0U] [(_Bool)1] [i_2]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5] [(_Bool)1] [(_Bool)0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_10 [11] [i_1] [i_2] [i_5]))))))) : (max((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) arr_2 [i_5] [i_0]))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_6))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (signed char i_7 = 4; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_21 [i_6]))))) << (((((long long int) arr_2 [i_7] [i_1])) >> (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [(unsigned short)8] [i_2] [i_6] [i_7]))) / (var_7))))))))));
                                arr_22 [i_2] [i_6] [i_6] [i_6] [i_2] [(signed char)2] [i_2] = var_11;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
