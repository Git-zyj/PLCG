/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56911
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((var_10) - (1854996585U)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [18LL] = ((/* implicit */unsigned short) ((min((arr_0 [i_0]), (arr_0 [i_0]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [2LL] [i_4] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (var_3) : (var_3))), (((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 4]))) : (var_3)))));
                                var_13 = ((/* implicit */unsigned short) (+((-(arr_15 [5U] [(short)8] [i_4 + 1] [10LL] [i_4] [i_4 - 1] [i_4 - 2])))));
                            }
                        } 
                    } 
                    arr_17 [(unsigned short)7] [i_2] [(unsigned short)14] [12U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (signed char)-118))))), (max((arr_8 [i_2]), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_8), (((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_2])))) == (arr_8 [i_2]))))) : (min((((var_10) | (var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(unsigned short)5] [i_1] [i_1] [i_2])) == (((/* implicit */int) var_6)))))))));
                    var_14 &= ((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)51533)) | (((/* implicit */int) var_0)))), (max((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [17ULL] [i_0])) : (((/* implicit */int) var_4))))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))) : (66977792U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)28186)) : (((/* implicit */int) (short)5718)))))))) : (((/* implicit */int) ((unsigned short) var_8)))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [7LL] [i_0] [i_0]))))), (((/* implicit */unsigned int) min(((unsigned short)26), (var_6)))))))));
    }
}
