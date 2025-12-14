/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57122
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
    var_14 = ((/* implicit */long long int) (~(var_8)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_11)))) | ((+(((/* implicit */int) (signed char)-1)))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (1237625668U)))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) | (((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_4))))) | (((((/* implicit */_Bool) (unsigned short)57917)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (short)-1))))), (min((arr_4 [i_1]), (4294967295U)))))), (5791904925913590213ULL))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((((((/* implicit */int) (signed char)-110)) + (((/* implicit */int) arr_7 [i_1 - 1])))) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 1])) < (((/* implicit */int) arr_7 [i_1 - 1])))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [19ULL])))))) : (var_2)))) || (((/* implicit */_Bool) ((int) var_10)))));
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_10 [i_1 - 1] [i_1] [i_1 - 1])), ((short)30316))))));
            }
            var_20 *= ((/* implicit */short) (signed char)-41);
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_21 = ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (var_10) : (((/* implicit */unsigned long long int) (-(var_5)))));
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-25190)));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */int) (short)0)) / (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_12)))))))));
                            arr_22 [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (-8509328260379858660LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((unsigned long long int) ((arr_12 [i_1]) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_23 [i_4] [i_1] [i_7] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_5] [i_6] [i_7] [i_4]))))));
                            arr_24 [i_1] [i_4] [i_5] [i_6] [i_7] [(short)2] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            arr_25 [i_1] [i_4] [i_4] [i_6] [i_1] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4]))) ^ (var_5))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_3)), (arr_21 [i_1]))))))) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (unsigned char)92))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33265)) ? (var_8) : ((((~(((/* implicit */int) var_12)))) & (min((((/* implicit */int) (signed char)-113)), (var_8)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    var_24 *= ((/* implicit */signed char) arr_7 [i_1]);
                    arr_35 [i_1] [i_1 - 1] [i_8] [16U] [i_9] [(short)14] |= ((/* implicit */unsigned long long int) ((unsigned short) min(((short)-19550), (((/* implicit */short) (unsigned char)45)))));
                    var_25 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1 - 1] [i_10] [i_10]))) | (var_10))) > (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) arr_20 [i_1 - 1] [i_9] [i_9])))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        arr_38 [i_1] [i_10] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)2)));
                        arr_39 [i_1] [3ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((unsigned int) arr_36 [13ULL] [i_1] [i_1] [(signed char)21]))));
                        arr_40 [i_1] [i_1] [(short)18] [i_10] [i_11] [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? ((-(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_9 [i_10]))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 654880915)) && (((/* implicit */_Bool) arr_18 [i_1 - 1] [i_8] [i_8 - 3] [i_10 + 2] [i_10 + 2])))))) | (-1438496619541772229LL))))));
                        arr_41 [i_1 - 1] [i_1] [i_11] [i_10 + 1] [i_11] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)114))))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_10] [(signed char)17] [i_9] [i_10] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) - (((((/* implicit */_Bool) 6528491930546788813LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (18446744073709551615ULL)))));
                        arr_46 [i_12 - 1] [i_1] [i_9] [(short)9] [i_1] [i_1] = ((/* implicit */signed char) 18446744073709551615ULL);
                        arr_47 [12] [i_8] [i_9] &= ((/* implicit */unsigned long long int) ((arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1]) - (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    }
                    for (short i_13 = 1; i_13 < 21; i_13 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((long long int) 0ULL)) <= (((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_10] [i_10] [i_8 - 1] [16] [i_1 - 1])) >> (((var_1) - (408759716136684924LL)))))))))));
                        arr_51 [i_1 - 1] [i_1 - 1] [(signed char)18] [i_1 - 1] [i_1] [i_1 - 1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) 654880919)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) : (3686545541647814495ULL)));
                    }
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_28 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_13 [i_8 - 1] [i_8 + 1] [i_8 + 2])));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) 1497040308U))));
                    var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)20688)) || (((/* implicit */_Bool) arr_53 [12ULL] [i_1] [i_1 - 1] [6LL]))));
                    arr_54 [i_1] [(unsigned short)4] [i_1] [i_9] [i_1] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_13 [i_1] [i_8] [i_9])))) ? (arr_43 [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (short)23414)))))));
                }
                arr_55 [i_1] [i_9] [i_8 - 1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_36 [i_8 - 2] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) ((_Bool) 2064805025U)))))));
                var_31 = var_9;
                arr_56 [i_1] [i_1] [i_9] = ((/* implicit */short) (+(((((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1]))))) / (((/* implicit */long long int) arr_4 [i_1]))))));
            }
        }
        for (unsigned int i_15 = 3; i_15 < 20; i_15 += 3) /* same iter space */
        {
            var_32 = var_6;
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_11))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29621))) * (var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (signed char)-10))))) ? (arr_13 [i_1 - 1] [i_15 + 1] [i_15]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27222)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_3))))))))))));
            arr_59 [12U] [12U] [(signed char)18] |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-15709)), (-1LL)))) ? (((/* implicit */unsigned long long int) var_6)) : (((unsigned long long int) var_10)))));
            var_34 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (!((_Bool)0)))), (((min((((/* implicit */long long int) arr_27 [12])), (var_9))) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1 - 1] [i_1] [i_1 - 1] [i_15] [i_1 - 1] [i_15 - 3])))))));
        }
    }
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)120)))), (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (short)-20890)) : (((/* implicit */int) (unsigned char)197)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 6ULL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
    {
        for (short i_17 = 3; i_17 < 16; i_17 += 2) 
        {
            {
                var_36 = ((/* implicit */unsigned int) 7196246233637125434LL);
                arr_65 [i_17] = ((/* implicit */signed char) (unsigned short)30770);
            }
        } 
    } 
}
