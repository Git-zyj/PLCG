/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5926
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((((((((((/* implicit */_Bool) (signed char)104)) ? (-1858012565) : (235573714))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_9)))))) + (1858012584))) - (6)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) (unsigned char)101)))) != (((((/* implicit */int) var_6)) & (((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((8064) != (((/* implicit */int) (unsigned short)16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0] [20]) : (((/* implicit */unsigned int) var_1))))) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((arr_3 [i_1]) ? (((/* implicit */int) (unsigned short)0)) : (-8052)))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (8986550032929144356LL))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (arr_7 [i_1] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)0))))) : ((-(8064))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                        arr_12 [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)3)), ((-2147483647 - 1))))) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), ((unsigned short)65533))))))) : (((/* implicit */int) ((((/* implicit */int) max((var_10), (arr_0 [i_1])))) == (((((/* implicit */int) arr_4 [i_0] [i_1])) & (((/* implicit */int) (signed char)79)))))))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1764827301) | (max((((/* implicit */int) (unsigned char)0)), (-8091)))))) ? (max((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (arr_5 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55252)) : (((/* implicit */int) (unsigned short)65520))))))))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 22; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((2097148U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)65520)), (-8063))))))) == (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36384)) ? (((/* implicit */int) (unsigned char)116)) : (-1044132265)))) + (((var_2) + ((-9223372036854775807LL - 1LL))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_2] = (+((((+(((/* implicit */int) arr_4 [(short)20] [(unsigned short)16])))) * (((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */short) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [(unsigned short)13])) * (0ULL))))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (0)))))))));
                            arr_20 [i_0] [i_2] [i_1] [i_2] [i_2] [(signed char)10] [(unsigned char)18] = ((((/* implicit */int) ((0) <= (((/* implicit */int) (unsigned char)188))))) / (((/* implicit */int) (unsigned short)16916)));
                        }
                        arr_21 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)5407), (((/* implicit */unsigned short) arr_0 [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */short) var_3)), ((short)-9012)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        arr_24 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) + (var_2))))));
                        arr_25 [i_2] [10U] = ((/* implicit */int) ((((/* implicit */int) (short)26277)) == (((arr_14 [i_2] [i_2] [i_1] [i_2]) ^ (((/* implicit */int) (short)6191))))));
                        arr_26 [i_6] [i_1] [(short)10] [(signed char)2] &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1083135810))))) < (((((/* implicit */_Bool) 4220836871U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)9910))))));
                    }
                }
            } 
        } 
        arr_27 [i_0 + 1] = ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1]))))))) == (max((min((((/* implicit */unsigned long long int) var_3)), (var_9))), (max((var_9), (var_9))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_33 [(unsigned char)18] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1044132265)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)9941))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_29 [i_7])) / (((/* implicit */int) arr_6 [(unsigned char)9])))))) + (max((0), (((/* implicit */int) (unsigned short)0))))));
                    arr_34 [i_0 + 1] [18] [i_7] [i_8] = (+(((((/* implicit */int) var_3)) + (((((/* implicit */int) arr_29 [12])) - (((/* implicit */int) (short)-3372)))))));
                    var_19 = ((max((var_1), (0))) << (((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_8] [i_8])) ^ (((/* implicit */int) arr_7 [i_0 + 1] [i_7] [(unsigned char)17] [i_7])))));
                }
            } 
        } 
        arr_35 [(short)1] [(short)1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_29 [i_0])), ((unsigned short)0)))))) % (max((((((/* implicit */int) (unsigned char)189)) % (22301275))), (((((-6) + (2147483647))) << (((74130425U) - (74130425U)))))))));
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-116))))) <= (((((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (signed char)108))))) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-22301275) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9] [i_9]))) : (1504493182U)));
        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9] [i_9])))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), ((-(arr_37 [i_9])))));
    }
}
