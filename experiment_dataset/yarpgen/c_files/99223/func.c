/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99223
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_6)) : (var_9)))) < (var_4)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) var_10);
                arr_4 [i_1] [(unsigned char)7] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_3 [i_0 + 2] [i_1]) ? (5863262413119734695LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 4])))))) : (17080035049063347359ULL)));
                var_14 = ((/* implicit */unsigned char) ((short) (short)-1));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_15 = ((/* implicit */_Bool) 4294967295U);
                    arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((((-(var_4))) + (9223372036854775807LL))) << (((((((/* implicit */int) ((short) var_2))) + (6444))) - (48)))))) + (31ULL)));
                    var_16 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned int) -20))))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((var_3) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (short)2958)))) : (((/* implicit */int) arr_0 [i_0 + 4])))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) arr_5 [i_0 + 3]))))) ? (((unsigned int) arr_2 [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 4])) ? (((/* implicit */int) (short)-333)) : (((/* implicit */int) (short)1)))))));
                    var_18 = ((/* implicit */unsigned char) arr_9 [i_0]);
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? ((-(((/* implicit */int) (unsigned short)224)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3913820604067936484LL)))))));
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_20 = arr_7 [i_0 - 1];
                        var_21 = ((/* implicit */short) max((var_21), ((short)-2975)));
                    }
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)4)) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) -5503994949492452898LL)) && (((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3] [i_3]))))))));
                        arr_17 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_5])), (var_4)))) ? (((/* implicit */int) (signed char)16)) : (((((/* implicit */_Bool) (short)2958)) ? (((/* implicit */int) (unsigned short)36269)) : (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2958))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_0 + 1] [i_5 + 1])) ? (-3913820604067936484LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_3] [(signed char)11] [i_5])))))));
                        var_23 = ((/* implicit */unsigned short) arr_2 [i_1]);
                    }
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_18 [i_3])))), (min((((/* implicit */int) arr_1 [i_6])), ((+(((/* implicit */int) (short)14))))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) 1056025728U)) ? (((/* implicit */long long int) ((arr_7 [i_0 + 1]) ? (((/* implicit */int) (short)22)) : (((/* implicit */int) arr_7 [i_0 + 4]))))) : ((~(-3913820604067936485LL)))))));
                    }
                }
            }
        } 
    } 
}
