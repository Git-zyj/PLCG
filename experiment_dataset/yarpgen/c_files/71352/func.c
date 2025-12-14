/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71352
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
    var_16 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_17 |= ((/* implicit */long long int) (+(min(((+(((/* implicit */int) var_12)))), ((+(((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [(unsigned char)6] [i_0] = ((unsigned short) min((((/* implicit */unsigned long long int) var_4)), (arr_8 [i_0 + 1])));
                                var_18 *= ((/* implicit */signed char) (-(var_7)));
                                arr_14 [i_0] [(unsigned short)9] [i_2] [(unsigned short)9] [3U] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_5 [(signed char)8])) : (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) << (((/* implicit */int) (_Bool)1))))))))) : (max((((/* implicit */unsigned long long int) max((var_15), (arr_11 [i_1] [i_1] [i_4])))), (((7405376527088110479ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53065)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) (unsigned short)12470)) ? (394195458U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56360))))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9155)) || (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) arr_7 [(unsigned char)16] [(unsigned char)11] [(signed char)3] [(unsigned char)11])) ? (var_7) : (((/* implicit */int) (unsigned short)0)))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (min((arr_12 [i_0 - 2] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)0)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (arr_12 [i_0 + 1] [i_1] [i_2] [i_0] [i_1])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)63)))) : (((/* implicit */int) ((var_14) <= (arr_9 [i_0] [i_2]))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (~(arr_6 [i_0] [i_0 - 2] [i_0]))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) max(((unsigned short)12470), ((unsigned short)56360))))));
        var_22 = ((/* implicit */int) ((long long int) arr_0 [i_0] [i_0 + 1]));
    }
    var_23 = ((/* implicit */unsigned int) ((unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (6089282207588695145ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51518))))))));
    var_24 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(2876319400U)))) ? (max((((/* implicit */unsigned int) 2088433583)), (2234241145U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2997641036U)))))))) >= (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)127)), ((+(((/* implicit */int) (unsigned short)54351)))))))));
            arr_19 [i_5] = (unsigned short)65535;
            var_26 += ((/* implicit */unsigned short) (-(arr_2 [i_6])));
        }
        var_27 = ((/* implicit */unsigned short) min((-1), (((/* implicit */int) (unsigned char)167))));
        var_28 = ((/* implicit */signed char) max((((/* implicit */int) arr_15 [i_5] [i_5])), (((((/* implicit */int) var_3)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        var_29 = ((/* implicit */unsigned short) max((min((max((var_5), (((/* implicit */unsigned int) (unsigned char)99)))), (((/* implicit */unsigned int) ((arr_18 [i_5]) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (unsigned char)102))))))), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (511679445))))));
    }
}
