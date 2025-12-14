/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83346
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((8388607ULL) / (((/* implicit */unsigned long long int) 6109310926985728523LL)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) var_10)))))))));
        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (var_11) : (853462982U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16010)) >> (((((/* implicit */int) (short)-15)) + (30)))))) || (((var_4) >= (var_11)))))) >= (((((/* implicit */_Bool) 18446744073701163021ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (var_3)))));
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_5 [10LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        arr_6 [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (8388608ULL) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 2])))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (~(var_2))))));
                    var_15 = ((((8388597ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 - 2]))))) ? (((-6109310926985728528LL) | (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            var_16 += ((/* implicit */short) var_0);
                            var_17 = ((/* implicit */unsigned short) ((var_9) * (var_1)));
                            var_18 = ((/* implicit */_Bool) arr_8 [1] [4]);
                            var_19 = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_20 = (~(((/* implicit */int) var_8)));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_6 + 3])) ? (var_10) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned char)189)))))));
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)189)))))));
                            arr_19 [16U] [16U] [i_3] [i_3] [i_4 - 1] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [5] [5] [5] [i_6 + 4])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40391)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -6109310926985728520LL)) ? (var_4) : (((/* implicit */unsigned int) var_2))))) : (-6109310926985728523LL)));
                        }
                        for (int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            arr_22 [i_1] [i_7] [(unsigned short)5] [i_7] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)54927)) >> (((/* implicit */int) ((((/* implicit */int) (short)14)) != (var_10))))));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-127))));
                            arr_23 [i_7] [i_2] [(signed char)1] [i_2] [i_2] = (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
                            var_24 *= ((arr_1 [5] [i_1 - 2]) < (((((/* implicit */_Bool) (unsigned short)3221)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1)))));
                        }
                        for (int i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8])))))));
                            arr_26 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) var_2))));
                            arr_27 [i_2] [(short)20] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */int) ((11859459270667858511ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                        arr_28 [12] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_27 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35621))))));
                        arr_32 [i_9] [i_2] [i_2] [i_9] [i_2] [(unsigned short)17] = ((/* implicit */int) ((((-6109310926985728523LL) + (9223372036854775807LL))) >> ((((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_9 - 1]))) : (arr_20 [(signed char)1] [i_2] [i_3] [i_9]))))) - (18446744073709551390ULL)))));
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) var_2)) : (68719476735ULL))));
                            arr_36 [i_1] [(unsigned short)7] [i_9] = ((/* implicit */unsigned short) (((~(var_10))) - (((/* implicit */int) arr_3 [i_1] [i_1]))));
                            arr_37 [i_1] [i_1 - 1] [i_1] [i_9] [i_1] [12] [i_1 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) <= (var_3))), ((!((_Bool)1)))));
                        }
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_29 = var_1;
                            arr_41 [i_11] [i_9] [1LL] [i_9] [4] [i_9] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((_Bool) var_2))) : ((~(((/* implicit */int) arr_14 [i_1 + 1]))))));
                            arr_42 [i_11] [i_9] [i_2] [i_2] [i_9] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)6))));
                            var_30 = ((/* implicit */_Bool) (-((+(var_10)))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (var_10) : (arr_18 [(signed char)12] [i_2] [i_2] [i_2] [i_12])))));
                            arr_45 [i_3] [i_3] [i_12] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (6109310926985728537LL) : (((/* implicit */long long int) 815235449)))))));
                            var_32 = ((/* implicit */short) var_6);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)511)) ? (1036225883) : (((/* implicit */int) (unsigned short)5282))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))) : (524288U)))) ? (((((/* implicit */_Bool) 8010333045899575293LL)) ? (3942855304282483020ULL) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) min((4294443000U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                        {
                            arr_49 [i_1] [i_2] [i_1] [i_9] [i_2] = ((/* implicit */int) var_11);
                            arr_50 [i_9] [i_9] [i_2] [i_3] [i_9 - 1] [i_9] [4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26726))) : (var_5))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))));
                        }
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) (unsigned char)198);
                        arr_55 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_14 - 1] [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) != (min((var_11), (((/* implicit */unsigned int) (unsigned short)0))))))) : (max(((+(var_2))), (((((/* implicit */_Bool) 18446744073701163009ULL)) ? (var_3) : (((/* implicit */int) (_Bool)1))))))));
                        var_35 = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)51053)));
                        arr_56 [10] [i_14 - 1] [10] [i_14] [10] [10] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
            } 
        } 
        arr_57 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) (-(((unsigned int) 1468166998))))) : (((((/* implicit */_Bool) arr_48 [i_1 - 2] [i_1 + 1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_1)) ? (7671449955071952600LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    }
    var_36 = ((/* implicit */unsigned short) max((var_2), ((((!(((/* implicit */_Bool) (short)-511)))) ? (((((/* implicit */int) (_Bool)1)) % (-314524328))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)0)) : (var_3)))))));
    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) min(((short)-511), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((~(var_6))))) : (((/* implicit */unsigned int) var_3))));
    var_38 = ((/* implicit */unsigned long long int) max((var_38), ((+(var_5)))));
}
