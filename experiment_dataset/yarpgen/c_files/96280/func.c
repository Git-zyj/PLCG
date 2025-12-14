/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96280
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_3])))))));
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) 6950859234071015598ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_3 [i_0]))), (((unsigned long long int) var_8)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (signed char)119)) - (104))))))))));
                    }
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((max((((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -24LL)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_0] [i_1] [i_2] [(unsigned char)1])) : (((/* implicit */int) var_5))))))) | (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 3] [i_2])) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (short)-452))))))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 4; i_4 < 12; i_4 += 2) 
                    {
                        arr_16 [i_2] [i_1] [i_0] [i_4] = ((/* implicit */signed char) (short)32767);
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((long long int) 3276971027628446849LL)))));
                        var_19 = ((/* implicit */_Bool) (signed char)-108);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_20 = ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((max((9223372036854775807LL), (((/* implicit */long long int) (signed char)19)))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)3))))))));
                            arr_21 [i_5] [i_1] [i_2] [i_0] [i_6] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_0)))) ? (max((arr_2 [i_2 - 4]), (((/* implicit */unsigned long long int) 2188245193U)))) : ((-(12569162222289047612ULL)))));
                            var_21 = ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */_Bool) 6666135586147665546LL)) ? (var_2) : (((/* implicit */long long int) var_12)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (3276971027628446844LL) : (-8675045446935997156LL))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_25 [i_7] [i_1] [i_0] [i_1] [i_7] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-17)) + (38)))))) : ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))) <= (max((arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0]), (arr_7 [i_0] [i_0 + 1] [i_0] [i_0])))));
                            arr_26 [i_0] [i_1] [i_2 - 3] [i_5] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (unsigned char)33)) + (((/* implicit */int) (unsigned char)227)))));
                            var_22 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((long long int) var_2))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))) : (var_4))))), (((/* implicit */unsigned long long int) var_16))));
                            var_23 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (unsigned char)41)), (arr_5 [i_0] [(short)10] [i_7]))) < (((((/* implicit */_Bool) var_16)) ? (arr_5 [i_0] [i_1] [i_1]) : (arr_5 [i_0] [i_5] [i_7])))));
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) arr_23 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))), (max((var_3), (-3682287472045299762LL)))));
                            var_25 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_0 + 1])), (var_12))), (((/* implicit */unsigned int) var_15))));
                            arr_29 [i_0] [i_2 + 3] [i_2] [(signed char)7] [i_8] [i_0] [i_1] = ((/* implicit */unsigned char) 3186824173676263706ULL);
                        }
                        arr_30 [i_2] [i_0] [i_2] [i_5] [i_5] = var_10;
                    }
                    var_26 -= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) -1347616613))), ((+(((/* implicit */int) var_6))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) <= (((/* implicit */int) (signed char)-116))))), (var_3)));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_2])) >> (((max((9223372036854775807LL), ((-(arr_13 [i_0] [i_1] [(unsigned char)3] [i_2] [i_2] [i_1]))))) - (9223372036854775806LL)))));
                    }
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_29 = ((/* implicit */short) 3276971027628446824LL);
                            var_30 ^= ((/* implicit */unsigned char) ((max((max((13849372942279989279ULL), (var_9))), (((/* implicit */unsigned long long int) (signed char)-15)))) + (((/* implicit */unsigned long long int) ((var_11) + (((/* implicit */int) arr_6 [i_2 + 3] [13ULL] [i_0 + 1])))))));
                            var_31 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_38 [i_0] [i_2])) : (arr_33 [i_11] [i_0] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_1] [i_2 - 3] [i_2] [i_11]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) <= (var_4)))))))));
                            var_32 = var_3;
                            arr_40 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) + (var_9)))))), (((((var_2) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)247))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            arr_43 [i_2] [i_0] = ((/* implicit */signed char) (-(-9025828697436761351LL)));
                            var_33 = ((/* implicit */long long int) ((unsigned char) var_0));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            arr_48 [i_13] [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                            arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            var_34 += ((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) max((arr_32 [i_0 - 1] [i_0 + 1] [i_10] [i_2 - 2] [i_10]), (arr_32 [i_0 - 1] [i_0 - 1] [i_2] [i_2 + 3] [i_10]))))));
                        }
                        var_35 = ((/* implicit */unsigned short) max((6897008182373504709ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) >> (((arr_3 [i_10]) - (2316373207313269645ULL))))))));
                        arr_50 [i_0 - 1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) var_8)) : (var_11))) : (((/* implicit */int) var_16))));
    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) var_5))));
    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 2) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) var_6);
        arr_54 [i_14] [i_14] = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 3 */
        for (long long int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */long long int) max((var_40), (max(((((_Bool)1) ? (arr_53 [i_14 + 3]) : (((/* implicit */long long int) var_11)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)94))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))))));
            arr_59 [(_Bool)1] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
            arr_60 [i_15] = ((/* implicit */unsigned int) -1268779989);
            arr_61 [i_14] [i_15] = ((/* implicit */unsigned int) ((short) var_16));
            var_41 ^= ((/* implicit */short) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 8434074338613672536ULL)) ? (((/* implicit */int) arr_57 [i_14] [i_15])) : (((/* implicit */int) (signed char)96))))), (max((var_7), (3276971027628446843LL))))));
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_42 = ((((-6145032748277445591LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)103)) - (51))));
                arr_68 [i_14] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_14 + 1])) ? (((/* implicit */int) (unsigned short)1425)) : (((/* implicit */int) arr_64 [i_14 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_62 [i_17]), (((/* implicit */signed char) var_10)))))) : (((var_3) + (arr_52 [i_14 + 3])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 2; i_18 < 22; i_18 += 2) 
                {
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (max((((/* implicit */unsigned long long int) max((((unsigned char) var_12)), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)0)), (arr_64 [i_17]))))))), (arr_66 [i_14] [i_16] [i_16] [i_18])))));
                    arr_71 [i_16] [i_17] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) max((21600035499273150ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) 3276971027628446829LL)) : (((((/* implicit */_Bool) -19LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_18])))))))));
                }
            }
            for (long long int i_19 = 0; i_19 < 25; i_19 += 3) 
            {
                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_65 [i_14 + 4] [i_16] [i_19])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2329174449949448404LL)) ? ((-(((/* implicit */int) (unsigned char)200)))) : (((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-103))))))) : (max((arr_65 [8ULL] [i_14] [i_14 - 1]), (var_14)))));
                arr_75 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2823))) <= (9223372036854775807LL)))))));
                arr_76 [i_16] [i_16] [i_16] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_57 [i_14 - 1] [i_14 + 3])), (21600035499273165ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_57 [i_14 + 1] [i_14 + 1])))))));
                arr_77 [i_16] [i_16] = ((/* implicit */unsigned char) arr_62 [i_16]);
            }
            /* LoopNest 3 */
            for (signed char i_20 = 2; i_20 < 23; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    for (int i_22 = 2; i_22 < 23; i_22 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */long long int) min((var_45), ((-(var_1)))));
                            arr_86 [i_22 + 1] [i_16] [i_20 + 2] [(short)19] [i_16] [i_14 + 3] = ((/* implicit */long long int) (unsigned short)11);
                            arr_87 [i_14 + 3] [i_16] [i_16] [i_20 + 1] [i_21] [i_22 + 2] = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned long long int) (signed char)88))));
                            arr_88 [i_14] [i_14] [i_16] [23LL] [i_14] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8942491865445605479LL)) ? (((((/* implicit */_Bool) arr_74 [i_14] [i_16] [i_20 + 1] [14LL])) ? (((/* implicit */unsigned long long int) arr_72 [i_22])) : (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (9988895660450351583ULL))))) : (((/* implicit */unsigned long long int) arr_74 [i_14] [(unsigned char)13] [i_20 - 2] [(signed char)6]))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
        {
            arr_91 [i_14] [i_23] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_84 [i_23] [i_23] [i_23] [i_23] [i_14] [i_14 - 1]))))) * (((var_5) ? (((-6289535076924197696LL) / (9223372036854775807LL))) : (var_3)))));
            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */long long int) -196234165)), (8893502498638352155LL)))))));
        }
    }
    for (unsigned long long int i_24 = 1; i_24 < 21; i_24 += 2) /* same iter space */
    {
        var_47 -= max((max((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) arr_55 [i_24 + 4] [i_24] [i_24])))), (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (max((4501516664799394809ULL), (((/* implicit */unsigned long long int) arr_70 [i_24 + 2] [i_24] [i_24] [i_24 + 3])))))));
        var_48 = arr_73 [i_24] [i_24] [i_24];
        arr_95 [i_24] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_62 [i_24 + 4])), (var_14)))) ? (((max((((/* implicit */long long int) var_16)), (-5851225415240798437LL))) * (((((/* implicit */_Bool) 15806871592244874302ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (17592152489984LL))))) : (((/* implicit */long long int) 1395091200U)));
    }
}
