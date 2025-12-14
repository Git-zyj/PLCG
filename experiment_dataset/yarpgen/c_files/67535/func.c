/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67535
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
    var_11 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) < ((-(((/* implicit */int) (unsigned short)53685)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned short)11851)) ? (var_2) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) arr_4 [i_0] [i_2] [i_1] [i_0])))))))))));
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((var_8) + (9223372036854775807LL))) << (((((((/* implicit */long long int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1))))) - (73LL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) arr_13 [i_0] [(unsigned char)14] [i_2] [i_2] [i_4]);
                            arr_15 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */long long int) (~(((/* implicit */int) (signed char)50)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3598013129U)) ? (((/* implicit */int) (short)-29860)) : (((/* implicit */int) (unsigned short)41051))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) | (11881326527892968066ULL)))))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_2] [6LL] [(unsigned char)1] [i_1] [i_2] = ((/* implicit */long long int) arr_5 [i_5 + 1] [i_5 + 2] [i_2] [i_5 + 2]);
                            arr_21 [i_2] [i_2] [i_5] = (i_2 % 2 == 0) ? (((/* implicit */short) min((arr_9 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [(unsigned short)21])) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_5])) : (((/* implicit */int) (_Bool)0)))) % (((((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (15695))))))))))) : (((/* implicit */short) min((arr_9 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [(unsigned short)21])) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_5])) : (((/* implicit */int) (_Bool)0)))) % (((((((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (15695)))))))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_2] [i_0] [24ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 45787858U);
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) (signed char)-97);
                            var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (18446744073709551615ULL)));
                            arr_26 [i_2] [i_3] [i_6 - 2] = max((((/* implicit */int) ((_Bool) arr_13 [i_6 + 1] [i_2] [i_6 + 1] [i_2] [i_6 + 2]))), (((((/* implicit */int) arr_23 [i_6 - 1] [i_6 + 1] [i_6 - 1])) % (((/* implicit */int) max(((short)-29860), (((/* implicit */short) var_4))))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_6 [i_6] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_6])))), (((((var_1) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_6])) + (151))) - (36))))))))));
                        }
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_3])) : (((/* implicit */int) arr_1 [i_3] [i_2]))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_2] [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) < (arr_3 [i_7] [i_1])));
                            arr_34 [i_2] [i_1] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)51)) < (((/* implicit */int) (unsigned short)38374))));
                            arr_35 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (short)10335)) < (arr_10 [i_0] [i_0] [i_0] [i_0])));
                            var_16 = ((/* implicit */unsigned long long int) var_3);
                            arr_36 [i_2] [(signed char)13] [i_2] [i_2] [12ULL] [24] = ((/* implicit */_Bool) ((arr_4 [i_2] [i_1] [i_1] [i_8]) ? (((/* implicit */int) ((unsigned short) (unsigned char)41))) : (((((/* implicit */_Bool) arr_12 [20LL] [i_2] [22LL] [i_2] [i_7] [i_7] [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            arr_39 [i_9] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_2] [i_7] [i_1] [i_1] [i_2] [i_0]))) ^ (602485633U)));
                            arr_40 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [i_0])) : (((/* implicit */int) var_9))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [i_0] [i_2] [i_0] [6LL]))) : (var_2)))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 3ULL))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_2])) : (((/* implicit */int) (short)10335)))) : (((/* implicit */int) (_Bool)1))));
                            arr_45 [i_0] [i_1] [i_0] [i_2] [i_10 - 1] [i_10 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)3] [i_7])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41155))))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_0] [5])))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_8 [i_11] [i_7] [i_2] [i_1] [i_0])))))));
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(var_1)));
                            arr_49 [i_1] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (((-(var_10))) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            arr_50 [i_7] [i_1] [i_2] [i_0] [i_11] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) arr_10 [i_1] [i_1] [(_Bool)0] [14LL])) : (var_1)));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_5))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((_Bool) arr_0 [i_0])))));
                        }
                        for (int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            arr_55 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_0] [i_2] [i_1] [i_2] [i_2] [i_7] [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
                            var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_2] [i_2] [i_13] [2LL] [i_13] [i_0]))) >= (((var_1) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
                            var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)24389)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3953299524616023173ULL)))));
                        }
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) -2517130200322173388LL))));
                            arr_59 [i_0] [i_0] [i_0] [i_7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_14])) % (((/* implicit */int) (short)-23539))));
                            var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)214))));
                        }
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50870)) ? (((/* implicit */int) (unsigned short)50870)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (unsigned short)14666)) : (((/* implicit */int) ((unsigned char) var_6)))));
                        arr_60 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((-(arr_54 [i_2] [i_7]))) << ((+(((/* implicit */int) arr_37 [i_0] [i_1] [i_2] [i_7]))))));
                        arr_61 [i_2] [i_2] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-9)) + (2147483647))) << (((((((/* implicit */int) (short)-10336)) + (10344))) - (8)))));
                    }
                    arr_62 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) -2035157090296450097LL);
                }
            } 
        } 
    } 
    var_28 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((var_3), (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) var_3))))));
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)27))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
    var_30 = var_7;
}
