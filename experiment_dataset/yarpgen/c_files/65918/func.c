/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65918
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
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_1))))))), (max((min((((/* implicit */unsigned long long int) 576460743713488896LL)), (193845686288184780ULL))), (((/* implicit */unsigned long long int) var_8))))));
    var_13 = ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (15469022932225201672ULL)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-3701))))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-576460743713488896LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)6)), ((unsigned short)57344)))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((long long int) ((long long int) (unsigned short)49152))), (((/* implicit */long long int) ((unsigned char) (unsigned short)768))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (short)-20256);
                var_16 = ((/* implicit */unsigned short) ((((long long int) 576460743713488889LL)) << ((((+(max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_3 [8ULL] [i_1])))))) - (4118134616U)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */int) ((long long int) 576460743713488905LL));
                                var_18 ^= ((/* implicit */unsigned char) var_1);
                            }
                            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) 
                            {
                                arr_16 [i_5] [(signed char)8] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_5] [i_3]);
                                arr_17 [i_0 - 1] [6] [i_1] [(signed char)9] [(signed char)9] [i_5] [i_5] = arr_4 [i_0] [i_1 + 1];
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) 0U))));
                                arr_18 [i_0] [i_2] [i_3 - 2] [i_3 + 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_12 [i_5] [i_3] [i_3] [i_2] [i_1] [i_0])))) ? (arr_0 [i_0] [(_Bool)1]) : (((4732722652906880704LL) | (-4104556163050906589LL)))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_7))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 1; i_6 < 10; i_6 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)61))))) ? (arr_15 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6))))));
                                arr_22 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (-4732722652906880698LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 1] [i_3] [i_0 - 3] [i_0 - 3] [i_0 - 3])))));
                            }
                            arr_23 [(unsigned char)7] [i_3 + 1] [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned char) min(((~(min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))) : (298940282U))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned short)43381)) : (((/* implicit */int) arr_9 [i_0] [1LL] [i_2] [1LL])))))));
                            arr_24 [(unsigned short)0] [i_1 + 1] [i_2] [i_3] &= ((/* implicit */unsigned short) arr_14 [i_3 - 2] [i_3] [i_2] [i_1] [i_0 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
