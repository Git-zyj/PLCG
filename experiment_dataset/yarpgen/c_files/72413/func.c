/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72413
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
    var_12 = ((/* implicit */unsigned int) var_0);
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)22819)) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_1 [i_0 - 1] [i_1])))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_3)))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) (signed char)107)))))) : (max((((/* implicit */int) ((short) var_2))), (((((/* implicit */int) arr_1 [i_1] [i_2])) | (((/* implicit */int) arr_5 [i_0] [i_1])))))));
                    arr_9 [i_0 - 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_3 [i_2])))));
                }
                for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                {
                    var_15 = ((/* implicit */short) (~(((-103162331) ^ (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)158))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_18 [i_5] [i_5] [i_4] [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [(signed char)18] [i_5]);
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_12 [(unsigned short)17] [i_0] [i_1] [i_3] [i_4] [i_5])) : (((int) (~(((/* implicit */int) arr_1 [3LL] [i_5])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_17 += ((/* implicit */_Bool) var_10);
                    arr_21 [i_0 - 1] [(_Bool)1] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) (signed char)15)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_19 [i_1] [i_6]) : (var_1))) : (((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [(unsigned short)6])) & (((/* implicit */int) (short)12315))))))), ((+((-(1596218197177743747LL)))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) max((((short) 1789995291U)), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))))) == (((((/* implicit */_Bool) 1186150776U)) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (short)32228))))));
                }
                for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) / ((((_Bool)0) ? (((/* implicit */unsigned long long int) 6U)) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_11)), (arr_17 [i_7] [i_1] [i_1] [0] [i_1] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_17 [i_7] [i_1] [i_1] [i_1] [i_1] [i_0]))))))))))));
                    arr_24 [12U] [14ULL] [i_0 - 1] [12U] = ((/* implicit */_Bool) arr_7 [i_0] [i_1]);
                }
            }
        } 
    } 
    var_20 ^= ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)120)))))))), (var_8)));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32766)) || (((/* implicit */_Bool) (short)-9544)))))))) || (((/* implicit */_Bool) min((((unsigned short) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned short) (((_Bool)0) && (((/* implicit */_Bool) -2069753544))))))))));
}
