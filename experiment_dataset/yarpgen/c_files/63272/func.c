/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63272
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
    var_18 ^= ((/* implicit */short) ((unsigned long long int) var_10));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967283U)) < (arr_1 [i_0])))));
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_14 [(unsigned char)11] [i_3] [6U] = ((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 1] [i_3 + 2] [i_3 - 1])) ? (17U) : (((((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) -4531508930784971951LL))))) ? (37U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))));
                    var_19 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (4531508930784971950LL))) & (((/* implicit */long long int) ((unsigned int) arr_1 [(short)9])))))));
                    var_20 = ((unsigned int) arr_11 [i_2] [i_3 + 4] [i_3 + 3] [i_3]);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_19 [i_2] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) == (((unsigned int) var_8))))), (arr_16 [i_1])));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) (unsigned char)179))));
                                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1451024546569365850LL)))) ? (((17910829125885630103ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)110)) / (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) max((arr_16 [i_1]), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) / (7889852391471086533LL))) <= (((/* implicit */long long int) arr_11 [(_Bool)1] [i_1] [i_1] [i_1])))))));
        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) min((((/* implicit */short) var_4)), (arr_6 [i_1]))))))) ? (min((max((((/* implicit */unsigned long long int) (short)31)), (1755813083938939029ULL))), (((/* implicit */unsigned long long int) 4531508930784971950LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) var_3)) % (var_5))), (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_14)) ? (12U) : (var_7)))))) : (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_2)))))) : (min((var_1), (((/* implicit */long long int) 797906592))))))));
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-29173)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0)))))))));
    var_27 = ((/* implicit */long long int) var_6);
}
