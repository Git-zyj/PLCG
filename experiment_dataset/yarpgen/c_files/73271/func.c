/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73271
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (((_Bool)1) && (((((((/* implicit */_Bool) 2969788972562764186LL)) ? (2990777374U) : (((/* implicit */unsigned int) -742089012)))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 + 1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 2])) && (((/* implicit */_Bool) (short)8433)))))));
                arr_7 [i_0 + 1] [i_1 + 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)29)) << (((339649521U) - (339649497U))))))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_11 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8433)) - (((/* implicit */int) (short)8827))));
                    arr_12 [(signed char)2] [(signed char)2] [(unsigned char)1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((arr_10 [(unsigned char)5] [i_1] [9LL]) + (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */int) (unsigned char)110)) % (((/* implicit */int) (unsigned char)123)))) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 2])))));
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    var_15 ^= (-(((((/* implicit */unsigned long long int) 742089012)) % (arr_0 [i_3 - 2]))));
                    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30235)) ? (arr_8 [i_3 + 2]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)117)))))));
                    arr_15 [4LL] [i_1 + 2] [8LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (var_9) : (var_8)));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5608019791052488475LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (-2969788972562764204LL)))) ? (((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (-1942941520)));
                }
                for (signed char i_4 = 2; i_4 < 8; i_4 += 2) 
                {
                    arr_18 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) -2969788972562764186LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16051))) : (5608019791052488474LL)))));
                    arr_19 [i_1 - 2] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_3 [i_0 + 1] [4])) << (((arr_9 [i_0] [i_0] [i_4 - 1] [i_0 + 1]) - (8432222277691268785LL)))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((232440113) >> (((402653184U) - (402653174U)))))), (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)1264)))) ? (((/* implicit */unsigned long long int) 2969788972562764172LL)) : (min((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_0]))))))))));
                    arr_20 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 1])) ? (arr_14 [i_0 - 1]) : (arr_14 [i_0 + 1])))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        for (long long int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_7 = 3; i_7 < 21; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_5] [i_6 - 2] [i_6 + 1] [i_7] [i_7] [i_5] = ((/* implicit */long long int) ((unsigned short) max((max((var_3), ((unsigned char)22))), (((/* implicit */unsigned char) arr_22 [i_6 - 1])))));
                        var_19 = ((/* implicit */unsigned int) 2969788972562764178LL);
                        arr_32 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((signed char) ((arr_28 [i_5] [i_5 - 1] [i_6 - 1] [i_7 - 3]) / (arr_28 [i_5] [i_5 + 1] [i_6 - 2] [i_7 + 2]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((int) -7656701090304684542LL)))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (var_11)));
                    }
                    var_22 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65516)) != (-15)))), (arr_25 [i_5 - 1] [i_5 + 1] [i_5 + 1])))));
                    arr_37 [i_5] = ((/* implicit */int) (unsigned char)116);
                }
                for (int i_10 = 1; i_10 < 22; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (min(((unsigned char)113), (((/* implicit */unsigned char) (signed char)-1))))));
                        var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-1)), (-8065556723484666861LL)))) ? (min((-742088994), (var_9))) : (((((/* implicit */_Bool) -1595191411)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned char)29)))))), (((/* implicit */int) (short)-14038))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        arr_48 [i_5] [17LL] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) arr_40 [i_5] [i_6] [i_5 - 1] [(_Bool)1])) : (((((/* implicit */_Bool) 8158492285773815446LL)) ? (2147483647) : (((/* implicit */int) (signed char)-1))))));
                        /* LoopSeq 3 */
                        for (long long int i_13 = 1; i_13 < 20; i_13 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) arr_23 [i_5 + 1])) : (((/* implicit */int) arr_23 [i_5 + 1]))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) arr_33 [i_5] [i_5] [i_6 + 1] [i_10] [i_12] [i_5])))))) ^ (arr_25 [20LL] [i_13] [i_13]))))));
                            var_27 ^= ((/* implicit */unsigned short) (signed char)22);
                        }
                        for (long long int i_14 = 1; i_14 < 20; i_14 += 3) /* same iter space */
                        {
                            arr_54 [i_5] [i_6] [(unsigned char)20] [(unsigned char)20] [(unsigned char)22] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_5] [i_5] [(short)16] [i_12 + 3] [i_6 + 1])) < (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -1584977136)))))));
                            arr_55 [i_5 + 1] [i_5] [i_10] [14LL] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)31744)) ? (arr_49 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_5] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32760)))));
                        }
                        for (long long int i_15 = 1; i_15 < 20; i_15 += 3) /* same iter space */
                        {
                            arr_59 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (-2147483647 - 1));
                            var_28 += ((/* implicit */unsigned char) ((short) arr_45 [i_5 + 1] [i_6 + 1] [i_6 + 1] [i_6]));
                            var_29 += ((/* implicit */int) ((19U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-103))))))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned short) var_3);
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (!(arr_27 [18U] [i_6] [i_10]))))));
                }
                /* vectorizable */
                for (unsigned short i_16 = 1; i_16 < 22; i_16 += 3) 
                {
                    var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)227))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 19; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 1; i_18 < 22; i_18 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) 6187867813584814293ULL))));
                                arr_68 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_63 [i_5] [i_16 - 1] [i_5] [i_5])) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)21498)) : (((/* implicit */int) arr_53 [i_18] [i_5] [i_17] [i_16] [i_6] [i_5] [19LL]))))));
                                arr_69 [i_5] [i_17 + 2] [i_16] [i_5 - 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_5] [i_6] [i_6] [i_6 - 1] [i_6]))) : (arr_35 [i_6] [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 2])));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned char) (_Bool)1);
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [3LL] [i_6 - 1] [i_6 - 1] [i_5] [i_6 + 1] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) : (arr_49 [i_5 + 1] [i_5 + 1] [i_16] [i_6 + 1] [i_5] [i_5])));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_19 = 4; i_19 < 19; i_19 += 4) 
                {
                    arr_73 [i_19] [i_5] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10931)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned char)11))))) ? (((((/* implicit */int) (unsigned short)40306)) >> (((((/* implicit */int) (unsigned short)31736)) - (31705))))) : (var_9)));
                    arr_74 [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (unsigned short)65519))));
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_19] [i_19 - 4] [(_Bool)1] [i_19 - 1])) ? (arr_71 [i_19 + 4] [i_19 - 4] [i_19 - 4] [i_19 - 1]) : (arr_71 [i_19] [i_19 - 4] [i_19] [i_19 - 1]))))));
                        var_37 += ((((/* implicit */_Bool) arr_44 [i_19] [i_5] [i_6 + 1] [i_20])) ? (2444740401U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_19] [i_6] [i_6 - 1] [i_20 - 1]))));
                        arr_78 [i_5] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-16)) && (((/* implicit */_Bool) (unsigned char)44)))))));
                        /* LoopSeq 1 */
                        for (short i_21 = 1; i_21 < 19; i_21 += 1) 
                        {
                            var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_19 - 3] [i_20 - 1])) ? (arr_41 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))))) ? (((3LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) -1833351320)));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */int) ((-8583359186335398203LL) > (((/* implicit */long long int) var_8))))) <= (((((/* implicit */_Bool) (unsigned short)25217)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)45612))))));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_34 [i_5 + 1]))));
                        }
                    }
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 1) 
                    {
                        arr_85 [i_5] [5LL] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [i_5 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_22 [i_5 - 1])) + (49))) - (2)))));
                        arr_86 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) var_9)) ? (876894710U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        var_41 ^= ((/* implicit */unsigned char) ((((-1399867018270515261LL) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_76 [i_5 - 1] [i_6 - 2] [i_5 - 1] [i_22] [i_19])) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (_Bool)1)))) - (122)))));
                    }
                }
            }
        } 
    } 
}
