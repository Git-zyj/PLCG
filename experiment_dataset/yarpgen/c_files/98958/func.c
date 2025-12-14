/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98958
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
    var_10 = ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (-1149092057) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32767)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_4))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max(((unsigned char)83), ((unsigned char)79))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) var_1)))))) <= (((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (30)))))))) : (((/* implicit */int) ((((13292810333909402323ULL) / (5708629748674672408ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_2 - 2] [i_2])) && (((/* implicit */_Bool) arr_0 [i_2 - 1] [i_0])))), (((((/* implicit */_Bool) 3010236275U)) && (((/* implicit */_Bool) ((unsigned int) (unsigned char)172)))))));
                                arr_16 [(signed char)16] [i_3] [i_2] [i_3] [i_0] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 18014398509481982LL)) / (((unsigned long long int) (~(arr_12 [i_4 - 1] [i_1] [i_2] [i_3]))))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)59)))))));
                                var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)74))));
                                var_15 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? ((-(8341665369723713286ULL))) : (((/* implicit */unsigned long long int) (-(18014398509481982LL)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_24 [i_0] [15] [i_2] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) % (((((/* implicit */int) (unsigned char)213)) % ((~(((/* implicit */int) (_Bool)1))))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 1])) - (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((3469099520U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) != (-6312422059459089042LL)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 7613465090654247809LL))) || (((/* implicit */_Bool) -18014398509481982LL)))))));
                        }
                        var_17 = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */_Bool) 576460752303423487ULL)) ? (825867778U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) (short)23172)))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (min((5153933739800149292ULL), (5153933739800149293ULL)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 - 2])) ? (((((/* implicit */long long int) var_7)) & (-4904892951221370160LL))) : (max((var_0), (((/* implicit */long long int) (signed char)-51)))))) : (((/* implicit */long long int) var_2))));
                        arr_25 [i_0] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)18]))) % (var_2)))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        arr_28 [i_0] = ((/* implicit */unsigned short) -2220434881481444322LL);
                        var_19 = 897162370252068382ULL;
                        var_20 = arr_5 [i_1] [i_2];
                        var_21 = ((/* implicit */long long int) 17549581703457483234ULL);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */int) var_5);
                        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_2)) <= (min((arr_17 [i_0] [i_1] [i_1 + 1] [i_2 + 2]), (arr_17 [9ULL] [9ULL] [i_1 - 1] [i_2 + 1])))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_36 [i_9] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) min((((short) 5153933739800149293ULL)), (((/* implicit */short) (unsigned char)2))));
                        var_24 = ((/* implicit */short) ((unsigned short) (unsigned char)102));
                        arr_37 [i_0] = ((/* implicit */long long int) 897162370252068381ULL);
                    }
                    var_25 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)50466)))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_2)) : (var_5))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1 - 1] [i_2 - 1] [i_2 - 1]))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */int) ((13292810333909402307ULL) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (17549581703457483238ULL))))));
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 24; i_10 += 2) 
        {
            for (int i_11 = 1; i_11 < 22; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    {
                        arr_48 [i_12] [i_12] [i_0] [i_11] [i_12] [i_0] |= ((/* implicit */unsigned short) var_0);
                        var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) var_4)))), ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_19 [i_0])) : (var_3)))))));
                        var_28 ^= ((/* implicit */unsigned char) -499354147);
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */int) min(((~(max((((/* implicit */unsigned long long int) 524286U)), (11686168284660816822ULL))))), (((/* implicit */unsigned long long int) (!(arr_50 [i_13] [i_13]))))));
        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) ^ ((((_Bool)1) ? (18014398509481953LL) : (var_5))))) ^ (((((((/* implicit */_Bool) var_3)) ? (1833352520821458654LL) : (((/* implicit */long long int) -1194086088)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_13])))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) 11384287906120593485ULL);
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((unsigned int) var_0)))));
    }
    var_34 += (+(((((var_0) * (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (var_0))));
    /* LoopSeq 2 */
    for (short i_15 = 1; i_15 < 23; i_15 += 3) /* same iter space */
    {
        arr_58 [i_15] = ((var_1) ? (((/* implicit */long long int) 825867775U)) : (((((/* implicit */_Bool) arr_29 [i_15] [17U] [i_15 + 1] [i_15 - 1] [i_15] [i_15 + 1])) ? (((/* implicit */long long int) max((var_2), (var_2)))) : (((long long int) var_8)))));
        arr_59 [i_15] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) ((_Bool) 17549581703457483215ULL))) : ((+(((/* implicit */int) (unsigned char)180))))))), (min((((((/* implicit */_Bool) var_9)) ? (-1833352520821458654LL) : (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) (-(var_7))))))));
        var_35 = ((((((var_3) / (((/* implicit */unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) (+(var_7)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 825867775U)) ? (((/* implicit */int) (unsigned char)19)) : (arr_8 [i_15] [i_15] [i_15])))), ((+(1656892250248272048ULL))))) : (((((/* implicit */unsigned long long int) 2147483647)) % (17549581703457483235ULL))));
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 3; i_17 < 21; i_17 += 1) 
            {
                for (unsigned char i_18 = 4; i_18 < 20; i_18 += 1) 
                {
                    for (int i_19 = 1; i_19 < 23; i_19 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) (_Bool)1)), ((-(549755813887ULL)))))));
                            var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) >= (((((/* implicit */_Bool) arr_66 [i_15] [i_16] [i_15])) ? (((/* implicit */int) arr_66 [i_15 + 1] [i_15] [22ULL])) : (((/* implicit */int) arr_66 [i_15 - 1] [i_17] [i_18]))))));
                            arr_72 [i_17] [i_15] [(unsigned short)18] [i_17] [i_15] [i_15 + 1] = ((/* implicit */short) 3469099520U);
                            arr_73 [i_15] [i_16] [i_16] [i_18] [i_19 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_15 + 1] [i_16] [i_17] [i_15] [i_19 - 1])) ? (((/* implicit */unsigned long long int) 1833352520821458654LL)) : (var_3))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1032084057)) ? (((3624630926383011266LL) / (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_17])))))))));
                        }
                    } 
                } 
            } 
            arr_74 [i_15] [10LL] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) (+(6232134U))))) % (min((((17549581703457483235ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))))), (((/* implicit */unsigned long long int) max((1941278859), (var_7))))))));
            var_38 += ((/* implicit */short) ((max((var_7), (((/* implicit */int) arr_66 [i_15] [i_15] [i_15])))) >= (((/* implicit */int) arr_66 [i_15] [i_15] [i_15]))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 1; i_20 < 23; i_20 += 2) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */int) (!(var_1)))) / (var_7)));
                        var_40 += ((/* implicit */unsigned long long int) arr_46 [i_15]);
                        var_41 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_38 [i_15] [i_15 - 1] [i_15])), (var_5)));
                        var_42 = ((/* implicit */unsigned int) 18446743523953737729ULL);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_22 = 2; i_22 < 23; i_22 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_23 = 1; i_23 < 21; i_23 += 3) 
            {
                for (unsigned char i_24 = 2; i_24 < 21; i_24 += 1) 
                {
                    {
                        var_43 = ((short) ((_Bool) var_5));
                        /* LoopSeq 2 */
                        for (int i_25 = 3; i_25 < 21; i_25 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned char) var_2);
                            var_45 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((short) arr_79 [i_25] [i_15] [i_15] [i_15] [i_22] [i_15]))) ? (((13868167428105468742ULL) % (10105078703985838353ULL))) : (((/* implicit */unsigned long long int) ((1300597027) % (((/* implicit */int) arr_88 [i_15] [i_22 - 1] [i_23] [i_24] [i_15] [i_25]))))))));
                        }
                        for (unsigned long long int i_26 = 3; i_26 < 22; i_26 += 2) 
                        {
                            arr_95 [i_15] [i_22] [i_26] [i_24] [i_26] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) arr_8 [i_15] [i_26 - 3] [i_24 + 1])) : (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((-(2941028296U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            var_46 = ((/* implicit */long long int) var_7);
                            arr_96 [i_15] [i_22] [6ULL] [i_23] [i_24] [i_15] = ((/* implicit */_Bool) min((var_0), (((((/* implicit */_Bool) arr_94 [i_23] [i_23 + 3] [i_23] [i_23 + 3])) ? (-1833352520821458664LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((_Bool) 1833352520821458663LL))), (min((10105078703985838330ULL), (((/* implicit */unsigned long long int) arr_69 [i_15] [i_15] [i_22] [i_22])))))) - (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned char)22)), (arr_60 [i_15] [i_15] [i_15]))), (((/* implicit */unsigned int) ((var_7) - (((/* implicit */int) var_8))))))))));
        }
        for (unsigned int i_27 = 2; i_27 < 22; i_27 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_28 = 3; i_28 < 23; i_28 += 4) 
            {
                var_48 -= arr_22 [i_15 - 1] [i_27] [i_28 - 2];
                /* LoopNest 2 */
                for (unsigned int i_29 = 1; i_29 < 22; i_29 += 1) 
                {
                    for (int i_30 = 0; i_30 < 24; i_30 += 3) 
                    {
                        {
                            arr_109 [i_30] [i_15] [23ULL] [i_15] [23ULL] = min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) var_2)) ? (3834459571U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_27 + 2] [i_27 + 2] [i_28 - 2] [i_29 + 2]))))));
                            var_49 = ((/* implicit */int) ((unsigned short) min((arr_69 [i_27] [i_27 - 2] [i_28 - 2] [i_29 + 2]), (((/* implicit */long long int) -1719186135)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_31 = 4; i_31 < 20; i_31 += 4) 
                {
                    for (short i_32 = 1; i_32 < 20; i_32 += 2) 
                    {
                        {
                            arr_115 [i_32] [i_15] [i_28] [i_27] [i_15] [i_15] = ((/* implicit */long long int) arr_93 [i_15]);
                            arr_116 [i_15] [i_32] [i_32] [i_31] [i_31] [i_31 + 3] [i_15] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_55 [i_15]))))) | (((((/* implicit */_Bool) -1833352520821458664LL)) ? (17549581703457483235ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_33 = 4; i_33 < 22; i_33 += 2) 
            {
                var_50 = ((/* implicit */short) ((unsigned int) (_Bool)1));
                /* LoopNest 2 */
                for (unsigned long long int i_34 = 0; i_34 < 24; i_34 += 4) 
                {
                    for (unsigned int i_35 = 2; i_35 < 23; i_35 += 4) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                            var_52 = ((/* implicit */unsigned char) (~((~((+(((/* implicit */int) (unsigned short)8301))))))));
                            var_53 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_0)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_36 = 2; i_36 < 21; i_36 += 1) 
            {
                var_54 = ((/* implicit */unsigned long long int) ((967115981) >= (((/* implicit */int) var_4))));
                var_55 = ((/* implicit */unsigned short) (~(arr_60 [i_27] [i_15] [i_36 - 1])));
                var_56 = ((/* implicit */unsigned int) ((unsigned char) 8341665369723713286ULL));
                /* LoopNest 2 */
                for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
                {
                    for (int i_38 = 0; i_38 < 24; i_38 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)64512))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_89 [i_36 + 2] [i_36] [i_36] [i_36 - 2] [i_36] [i_36 + 3] [i_36])));
                            var_59 = ((/* implicit */int) ((((long long int) 10105078703985838350ULL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))));
                            arr_132 [i_15] [i_15] [i_15] [i_15] [i_38] = ((/* implicit */unsigned char) (short)-26690);
                            arr_133 [i_15] [i_38] [i_36 + 3] [i_37] [i_15] [i_15] [i_37] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)64522)) ? (17ULL) : (6760575789048734774ULL))));
                        }
                    } 
                } 
            }
            var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (+(17549581703457483235ULL)))) ? (((/* implicit */int) ((unsigned short) var_0))) : (arr_8 [13U] [i_15 + 1] [i_27]))) : (((((/* implicit */_Bool) arr_40 [i_15 + 1] [i_27 - 2])) ? (((/* implicit */int) ((unsigned short) arr_127 [i_15]))) : (((/* implicit */int) ((unsigned short) -8614808226496245458LL)))))));
            var_61 = ((/* implicit */unsigned long long int) ((unsigned int) (~(var_2))));
            /* LoopNest 2 */
            for (unsigned char i_39 = 2; i_39 < 20; i_39 += 2) 
            {
                for (_Bool i_40 = 0; i_40 < 0; i_40 += 1) 
                {
                    {
                        var_62 = ((/* implicit */unsigned long long int) ((unsigned short) ((8341665369723713286ULL) & (((/* implicit */unsigned long long int) var_6)))));
                        var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) ((_Bool) max((var_0), (((/* implicit */long long int) var_7))))))));
                        arr_140 [i_15 + 1] [i_15] [i_15 + 1] [i_15 + 1] [i_15] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (unsigned short)6527)) | (((/* implicit */int) var_1)))));
                        var_64 = ((/* implicit */unsigned int) var_9);
                        var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) ((short) (+(10105078703985838329ULL)))))));
                    }
                } 
            } 
        }
    }
    for (short i_41 = 1; i_41 < 23; i_41 += 3) /* same iter space */
    {
        var_66 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) >= (-1833352520821458654LL)))))));
        arr_143 [i_41] [i_41 + 1] = ((/* implicit */signed char) var_1);
        var_67 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-2814)), ((unsigned short)42759))))) != (max((var_2), (((/* implicit */unsigned int) (unsigned short)6527))))));
    }
    var_68 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42763)))))) << (((((/* implicit */int) var_8)) - (93))))) & (((/* implicit */int) max((((signed char) var_4)), (((/* implicit */signed char) var_1)))))));
}
