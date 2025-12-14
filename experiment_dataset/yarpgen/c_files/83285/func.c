/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83285
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
    var_19 = var_3;
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(short)4] [(short)4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))) : (var_1)))) ? (2034216200U) : (((/* implicit */unsigned int) (~((~(var_16))))))));
        arr_2 [i_0] = ((/* implicit */int) ((unsigned char) ((-7922608851858310937LL) * (((/* implicit */long long int) ((((/* implicit */_Bool) -3573265236219252575LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (2016374560U)))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) ((((/* implicit */_Bool) -673364585)) && (((/* implicit */_Bool) 673364584))))) : (((var_10) | (((/* implicit */int) arr_0 [i_0 - 1] [i_1]))))))) <= (((((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((long long int) (signed char)-109)) : (((/* implicit */long long int) (((_Bool)0) ? (2278592735U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
            arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 - 2])), (((((/* implicit */_Bool) -4335991200214722120LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (224571065194422305LL)))))) ? (((/* implicit */int) (!(arr_0 [i_1 + 4] [(signed char)4])))) : (((/* implicit */int) var_11)));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(signed char)12] [i_0 - 3])) ? (((arr_0 [i_0 - 1] [i_0 - 1]) ? (var_5) : (((/* implicit */int) (unsigned short)29169)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)2] [(unsigned short)2])))))))) ^ (2265734975U))))));
            arr_6 [i_0 - 3] [i_0] [i_1] = ((((((/* implicit */_Bool) arr_4 [i_1 + 4] [i_0 - 3])) ? ((-(14552888913779203249ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) / (((((/* implicit */_Bool) var_7)) ? (3960653487860023372LL) : (((/* implicit */long long int) 1291299284))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [(_Bool)1] [i_2] [i_3] = ((((/* implicit */int) (unsigned short)4246)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (var_13)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)0)))) : (var_5))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 3893855159930348366ULL))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_6 = 2; i_6 < 14; i_6 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_4 + 2])) : (((/* implicit */int) arr_0 [i_5] [i_4 + 1]))));
                    arr_24 [i_0] = ((/* implicit */unsigned long long int) var_11);
                    arr_25 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) var_18);
                }
                /* vectorizable */
                for (short i_7 = 2; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    arr_28 [i_5] [i_0] [i_4] = ((/* implicit */unsigned char) var_3);
                    arr_29 [i_0] [i_4] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */int) ((signed char) ((unsigned short) arr_0 [i_0] [i_0])));
                }
                arr_30 [i_5] [i_4 + 2] |= ((/* implicit */unsigned char) arr_12 [i_5] [i_5] [i_5] [i_0 - 2]);
            }
            for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 4) 
            {
                arr_34 [i_0] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_16 [(short)13] [i_4 + 2])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_8 - 1])) ? (arr_11 [i_0] [i_8 + 1]) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0U))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-881))))) ? (((1970405733U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22993))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_0])))));
                            var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_10 [i_0] [i_4] [i_8 + 1] [i_4] [i_8 + 1] [i_10]) : (((/* implicit */unsigned int) -762946284))))) ? (((-1264250727) ^ (((/* implicit */int) (signed char)-37)))) : (arr_23 [i_0] [(short)1] [(short)1] [(signed char)13])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_18) - (((/* implicit */unsigned long long int) arr_7 [i_0] [9LL] [i_10]))))) ? (var_10) : (((/* implicit */int) (unsigned short)61291))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 956980762U)) ? (arr_26 [i_0] [i_9] [i_0] [i_9] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) arr_17 [i_8 - 2] [i_4 - 1] [i_0 + 1])) : (((((/* implicit */_Bool) arr_4 [i_4] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (var_12)))))));
                            arr_42 [i_0] [i_4] [(signed char)14] [i_9] [i_9] [i_0] [i_8 - 1] |= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-118632728) : (((/* implicit */int) (signed char)-63))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (-118632728) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_14 [i_10] [i_8])) : (var_10))))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((-5) - (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17726659830299772145ULL)) ? ((+(((/* implicit */int) (short)3466)))) : (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_0)))))))) : (max((((((/* implicit */_Bool) 2418258083U)) ? (((/* implicit */unsigned long long int) arr_39 [i_0] [i_8 - 1] [i_8 - 2])) : (var_6))), (((/* implicit */unsigned long long int) arr_20 [i_4 + 1] [i_4 - 1] [i_0] [i_4 + 2]))))));
                            var_29 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3286620197239837543LL)) ? (arr_10 [i_0 - 1] [i_4 - 1] [i_8 - 3] [i_4 - 1] [i_9 + 1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_4] [i_8 - 1] [i_9 + 1] [i_10] [i_4] [(short)9]))) : (((((/* implicit */_Bool) -3642027820316777343LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))) : (480717656U)))))));
                        }
                    } 
                } 
                var_30 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 0LL)) & (15ULL)));
            }
            var_31 ^= ((/* implicit */signed char) ((1587258922266206994LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 673364565)) ? (((/* implicit */long long int) var_16)) : (var_2)));
        }
        arr_43 [i_0] = ((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */_Bool) ((long long int) arr_22 [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0]))) - (var_9))) : (((/* implicit */unsigned long long int) ((arr_39 [i_0 - 3] [i_0] [i_0 - 1]) * (((/* implicit */unsigned int) var_13))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1780316827704420142LL)) ? (((/* implicit */long long int) (+(var_10)))) : (((9223372036854775807LL) / (((/* implicit */long long int) var_5))))))));
    }
}
