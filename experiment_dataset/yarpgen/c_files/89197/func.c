/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89197
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
    var_11 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = var_9;
                /* LoopSeq 4 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_6))));
                        var_13 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32742)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_10 [i_3] [i_2 + 1] [6U] [(unsigned short)0])) : (((/* implicit */int) (short)-32761))))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-15954)) : (((/* implicit */int) arr_11 [i_3] [i_2] [i_1 - 2] [i_0])))))))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2]))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) ((signed char) var_4))) : ((-(1755660819))))) : (min((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((_Bool) arr_6 [0ULL])))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) arr_10 [i_1 - 2] [i_1 - 2] [i_3] [i_4])))))));
                            arr_14 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned int) var_9);
                            var_16 ^= ((/* implicit */unsigned int) var_4);
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_1])), (min((var_10), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((arr_7 [i_5]) ? (((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [i_5] [0ULL] [0ULL])) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [(unsigned short)11])) ? (((/* implicit */int) arr_3 [i_3] [i_5])) : (var_7))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_8)))) : (-1230654451)))));
                            arr_19 [(short)4] [(short)4] [i_1] [(_Bool)1] [i_3] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0])) ? (10934534064833742662ULL) : (var_9)))) ? (max((3201204926U), (((/* implicit */unsigned int) arr_17 [1U] [i_3] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24139)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_0)))))))) : (((unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_2 + 2]))));
                            arr_20 [i_5] [i_3] [i_2 + 1] [2ULL] [(short)11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)12] [(short)12])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_0] [(short)5] [i_2 - 1] [(unsigned short)1]))))) : (arr_12 [i_1 - 2] [i_2 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) & (32752U)))) : (((unsigned long long int) min((((/* implicit */unsigned short) (short)-23713)), (arr_8 [i_0] [i_1 - 2] [i_2] [i_3] [i_5]))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)29408)) ? (((((/* implicit */_Bool) 2112265974U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)27685)))) : (((((/* implicit */_Bool) (short)1792)) ? (-352385643) : (((/* implicit */int) (_Bool)0)))))))));
                            var_19 = ((/* implicit */unsigned short) 1576515211U);
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */int) var_3)) > (((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_0])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) var_4)))))))));
                        }
                        for (short i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (short)10291)) / (((/* implicit */int) (short)-64)))) : (((((/* implicit */int) arr_3 [(short)1] [i_2])) * (((/* implicit */int) (short)-1792))))))), (max((((/* implicit */unsigned long long int) (signed char)24)), (max((((/* implicit */unsigned long long int) 16384U)), (16474330180576863323ULL))))))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) (_Bool)0)))));
                            var_23 ^= ((((((/* implicit */_Bool) ((unsigned long long int) var_9))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_15 [i_0] [i_1] [i_2] [i_2] [i_7 + 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_18 [i_0] [i_3] [i_0] [i_3] [i_3]), (((/* implicit */unsigned int) (_Bool)1))))))))) : (((((/* implicit */_Bool) ((arr_7 [i_7]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_2] [(signed char)4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_8]))) | (((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) arr_6 [11])) : (((/* implicit */int) var_0))))));
                        var_25 = ((/* implicit */short) var_7);
                    }
                    arr_31 [i_2 + 2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_24 [i_2 + 1] [i_2 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 2])) < (((/* implicit */int) arr_24 [i_2] [i_2 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) ? ((~(((/* implicit */int) arr_24 [i_2] [i_2 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) : ((((_Bool)0) ? (((/* implicit */int) arr_24 [i_2] [i_2 - 3] [i_1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_24 [9ULL] [i_2 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 2]))))));
                    arr_32 [i_2] [(_Bool)1] [i_0] [5] = ((/* implicit */_Bool) ((short) (short)16384));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_2])))));
                }
                for (unsigned short i_9 = 4; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_10))) ? (((unsigned long long int) 2147483647)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_9 - 2] [i_1] [i_1 - 2] [(_Bool)1] [i_1])))))));
                                arr_40 [i_9] [(signed char)1] = ((((/* implicit */_Bool) (+(max((((/* implicit */int) (short)28209)), (16776192)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_9 + 1])) ? (((/* implicit */int) arr_28 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_9 - 2])) : (((/* implicit */int) arr_28 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_9 - 4]))))));
                            }
                        } 
                    } 
                    arr_41 [i_9] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)-32754))));
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)28164))))) ? (max((((/* implicit */unsigned int) arr_35 [i_9] [i_0] [i_0] [i_0])), (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned short)9] [i_9])) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_9] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_22 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2245))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9 - 4] [i_1] [i_1] [i_0] [i_0]))) : (6993581699630520996ULL))))) : (max((((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_0] [i_9 - 4])), ((+(var_2))))));
                    arr_42 [10] [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1772)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)1036)) ? (928956700) : (((/* implicit */int) (short)9769)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-23146))))) > ((+(var_10))))))));
                }
                for (unsigned short i_12 = 4; i_12 < 11; i_12 += 3) /* same iter space */
                {
                    arr_45 [i_12] = ((/* implicit */_Bool) 1829915911);
                    var_29 ^= ((/* implicit */short) ((unsigned short) ((_Bool) min((arr_12 [i_0] [i_12 - 3]), (arr_26 [i_12 - 1])))));
                }
                for (short i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    var_30 = ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0] [5] [i_1])) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_11 [2U] [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_7 [i_1 - 1])))) : (((/* implicit */int) max(((short)-15611), (((/* implicit */short) arr_7 [i_1 - 2]))))));
                    arr_48 [i_0] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(_Bool)1] [(short)4] [i_1 - 1] [(short)12] [i_1 - 1] [(short)4] [(short)12]))))) : (min((var_9), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_8)), (var_0))), (((/* implicit */unsigned short) (short)23843)))))) : (max((arr_43 [i_1 - 1] [i_1 - 1] [i_1 - 2]), (arr_43 [i_1 - 1] [i_1 - 2] [i_1 + 1])))));
                    arr_49 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1 + 1] [8U] [i_1 + 1] [(signed char)7]))))))));
                    var_31 = var_5;
                    var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_13])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_24 [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 1] [(short)1]))))) < (var_6)));
                }
            }
        } 
    } 
}
