/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86806
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
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1584378347) ^ (((/* implicit */int) var_7))))) ? (3970219443575525709LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 293969786U))))))))))))));
                var_14 = ((/* implicit */unsigned short) (+(3943249133677791937LL)));
            }
            /* vectorizable */
            for (int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                arr_13 [(unsigned short)6] [(unsigned short)6] [i_1] |= ((/* implicit */_Bool) (-(var_11)));
                arr_14 [i_0] = ((/* implicit */unsigned short) 382541400);
            }
            for (int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -382541401)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_1 [i_1 + 1])))), (((/* implicit */int) arr_7 [i_0] [i_0]))));
                var_16 ^= (signed char)-59;
                arr_18 [9ULL] [(unsigned short)5] [i_0] = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) var_11)) : (9ULL))))) >> (((((/* implicit */int) arr_0 [i_4])) - (110))));
            }
            arr_19 [i_0] [i_1] = arr_4 [i_0] [i_0] [9LL];
            var_17 = ((((arr_9 [i_1 - 1] [i_0] [i_0]) ? (-2811470229491561332LL) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 - 1] [i_1]))))))) - (arr_3 [i_0] [i_1] [i_1]));
            var_18 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (signed char)-119)), ((-(((/* implicit */int) (short)21611))))))));
        }
        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
            {
                arr_25 [i_0] [i_5] [i_6] = ((/* implicit */short) max((arr_12 [i_0] [i_5] [i_0]), (2811470229491561344LL)));
                arr_26 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((2070171116357593212LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    var_19 = ((/* implicit */long long int) min((var_19), ((~(min((((/* implicit */long long int) 1982621515)), (((((/* implicit */_Bool) (unsigned short)63832)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))))))));
                    arr_29 [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) (-(((/* implicit */int) var_9))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(signed char)7] [(signed char)7])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2811470229491561357LL)))))))))));
                    arr_30 [i_0] [i_5] [i_6] [i_7 - 1] = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)30541)))), (min((-382541401), (arr_17 [(signed char)8] [(signed char)8] [i_6] [i_7])))))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    arr_33 [i_0] [i_0] [i_6] [i_0] = min((-6921840597710306570LL), ((-(var_11))));
                    arr_34 [i_0] = max((((((((/* implicit */_Bool) arr_7 [i_6] [i_0])) ? (var_3) : (((/* implicit */long long int) arr_22 [i_8])))) & (((/* implicit */long long int) (+(-829340859)))))), (((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)24))))))));
                    var_20 += ((/* implicit */unsigned short) ((((((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_4 [i_5] [i_5] [i_6])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_31 [6] [6] [i_6] [6])))))) || (((/* implicit */_Bool) ((((((((/* implicit */_Bool) 382541400)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) : (2116368860226125520LL))) + (9223372036854775807LL))) >> (((2147483647) - (2147483600))))))));
                }
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    var_21 *= ((/* implicit */signed char) (-(829340857)));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_39 [i_10] [4ULL] [i_6] [(unsigned short)5] [i_6] [i_5] [i_0] = ((/* implicit */int) var_11);
                        arr_40 [i_0] [i_0] [i_0] [i_9] [11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -554834323)) ? (4593671619917905920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        arr_41 [i_5] |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_7))))));
                    }
                    for (int i_11 = 3; i_11 < 11; i_11 += 3) 
                    {
                        arr_45 [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (arr_20 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_9 - 1] [i_9])))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_0] [i_5] [i_6] [i_6] [i_9 + 2] [i_11 - 3])) ? (((/* implicit */int) arr_35 [i_0] [i_5] [i_6] [i_9 - 1] [i_11 - 2] [i_11 - 2])) : (((/* implicit */int) arr_35 [i_0] [i_5] [i_6] [i_9 + 3] [i_9 - 1] [i_11 - 1]))));
                        var_23 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5]))) <= (var_6))))));
                    }
                    arr_46 [i_0] [i_5] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-59))))) > (((((/* implicit */_Bool) 1923539197)) ? (18ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))))));
                    arr_47 [i_0] [i_5] [i_0] [i_9 + 1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))));
                }
            }
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) arr_31 [i_0] [i_0] [i_5] [i_0]);
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_0] [i_5] [(unsigned short)8])) * (((/* implicit */int) arr_0 [i_0]))));
            }
            arr_50 [i_5] &= ((/* implicit */unsigned short) ((min(((-(var_11))), (((/* implicit */long long int) arr_11 [i_0] [i_5] [i_5])))) <= (((/* implicit */long long int) -1318116470))));
            arr_51 [i_0] [9ULL] = ((/* implicit */long long int) (-(1235285073)));
        }
        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_54 [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0]);
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [0LL]))) * (arr_48 [i_0] [(unsigned short)5] [i_13] [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (-6267635212863685648LL))))) : (((arr_2 [(unsigned short)7] [i_0]) | (((/* implicit */long long int) arr_31 [1U] [i_13] [i_13] [i_0])))))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(3149154479822500392LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8166034759126637270LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [7U] [8LL] [i_15] [7U] [6LL]))) : (arr_3 [i_0] [i_14] [i_15])))) : ((-(arr_43 [i_0] [i_14] [i_14] [9ULL] [i_15] [9ULL]))))))));
                /* LoopSeq 3 */
                for (long long int i_16 = 0; i_16 < 12; i_16 += 1) /* same iter space */
                {
                    arr_61 [i_0] [i_0] [i_0] [(_Bool)1] [i_15] [i_15] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 35184304979968LL)) ? (((/* implicit */int) arr_37 [i_14] [i_14])) : (((/* implicit */int) var_1))))));
                    arr_62 [i_14] [i_0] [i_14] = ((/* implicit */unsigned short) (~(var_2)));
                    arr_63 [i_0] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)56128))) ? (((9221120237041090560ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_0]))))) : (((/* implicit */unsigned long long int) arr_59 [i_0] [i_14] [i_15]))));
                }
                for (long long int i_17 = 0; i_17 < 12; i_17 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) 5146791341044904492LL))));
                    var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 10571166599600904002ULL)) ? (8549462017450774783ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_14] [i_0] [i_17]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4234)))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7521394482427451910LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_64 [10LL] [(unsigned short)9] [(unsigned short)9] [10LL] [i_15] [(unsigned short)0])))) : (var_6)));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (-((~(521139799))))))));
                }
                for (long long int i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25655))))) ^ (-2147483636))))));
                    var_33 ^= (!(((_Bool) 3368696664007154985ULL)));
                }
                arr_70 [i_0] [i_0] [i_15] [i_15] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) (~(((((arr_5 [i_0] [i_14] [i_14]) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (103)))))))) : (((/* implicit */_Bool) (~(((((((arr_5 [i_0] [i_14] [i_14]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (103))))))));
                arr_71 [i_0] [i_0] [i_15] [i_14] = ((/* implicit */_Bool) ((unsigned short) -1263896659));
            }
            for (signed char i_19 = 3; i_19 < 9; i_19 += 1) 
            {
                var_34 = var_7;
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_14])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) ((arr_53 [i_14] [i_19]) < (((/* implicit */int) var_8))))))))));
            }
            arr_75 [i_0] = (~(-2316846035045403122LL));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) arr_8 [i_14]))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_60 [i_0] [i_14] [i_14] [i_21]))));
                        /* LoopSeq 2 */
                        for (long long int i_22 = 0; i_22 < 12; i_22 += 1) 
                        {
                            arr_84 [i_14] [i_0] [i_0] [i_0] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_23 [i_0] [i_21] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [11] [i_14] [i_14] [i_21 - 1] [i_21 - 1]))) : (((((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_14] [i_21])) ? (18ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))));
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) 829340858)) ? (-382541393) : (((/* implicit */int) (signed char)-63)))))));
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) arr_3 [(unsigned short)7] [i_22] [i_20]))));
                            var_40 = arr_83 [i_0] [i_0] [i_20] [i_0] [i_22] [i_22];
                        }
                        for (signed char i_23 = 0; i_23 < 12; i_23 += 2) 
                        {
                            arr_88 [i_0] [i_0] [i_0] [4U] [i_21] [(unsigned short)9] [4U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_22 [i_0])) / (3356886790575493353LL))))));
                            var_41 = ((/* implicit */long long int) (+(((unsigned long long int) (unsigned short)3635))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                arr_91 [i_0] [i_14] [i_14] [i_0] = (unsigned short)4234;
                arr_92 [i_0] [i_0] [0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_24]);
                /* LoopSeq 2 */
                for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_24] [i_24] [i_0] [i_24] [i_25])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_87 [i_0])) || ((_Bool)0)))) : ((+(((/* implicit */int) arr_73 [i_0] [i_24]))))));
                    arr_96 [i_0] [i_14] [6LL] [i_14] [i_24] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_80 [i_0])) % (((/* implicit */int) arr_67 [i_0] [i_0] [i_0] [i_25]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [i_24] [i_0] [i_0])))));
                }
                for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 1) /* same iter space */
                {
                    arr_100 [i_0] [i_0] [i_0] [i_0] [i_0] [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)52456))));
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (-(422816229))))));
                    arr_101 [i_0] [i_14] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (+(-6095478261986073784LL))));
                    var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)31422))))))));
                }
            }
        }
        arr_102 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) (((((-((~(arr_23 [i_0] [i_0] [(unsigned short)9]))))) + (9223372036854775807LL))) >> ((((~((~(var_3))))) - (959439283975941744LL)))))) : (((/* implicit */signed char) (((((((-((~(arr_23 [i_0] [i_0] [(unsigned short)9]))))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> ((((~((~(var_3))))) - (959439283975941744LL))))));
        var_45 = ((/* implicit */_Bool) (unsigned short)38358);
    }
}
