/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89294
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_0] = max(((+(((/* implicit */int) (signed char)(-127 - 1))))), (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)15)))) * ((-(((/* implicit */int) (unsigned char)0)))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((arr_6 [i_0]), (18446744073709551615ULL))))));
                    var_20 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_2 [i_2 - 1])), ((-(7454232240778851206ULL)))));
                    var_21 *= ((signed char) var_0);
                    arr_11 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25931))))) ^ (((unsigned long long int) max(((signed char)-27), (arr_1 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
    {
        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                {
                    arr_18 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((long long int) arr_16 [i_3] [i_4] [i_4] [i_3]));
                    arr_19 [i_4] = ((/* implicit */unsigned short) ((unsigned char) max(((signed char)0), (arr_14 [i_4 + 1] [i_4]))));
                    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_16 [i_4] [i_4] [i_4] [i_4])))));
                    arr_20 [i_4] [i_4] [i_4] [i_5] = (unsigned char)9;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_23 = (!(((/* implicit */_Bool) arr_5 [i_6 + 1] [i_6 + 1] [i_6 + 1])));
        var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_15 [i_6] [i_6])))))));
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) var_4);
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551584ULL)) ? (2040126650U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))));
        }
        for (short i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) arr_22 [i_6] [i_6 + 1]);
            /* LoopSeq 2 */
            for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
            {
                var_27 = ((/* implicit */_Bool) var_10);
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 1; i_10 < 6; i_10 += 2) 
                {
                    var_28 ^= ((/* implicit */unsigned char) (short)2888);
                    var_29 = ((/* implicit */unsigned long long int) (signed char)36);
                }
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_11] [i_8] [i_9] [i_11])) ? (17644503487436346782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6 + 1] [i_6 + 1])))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_6 [i_6 + 1]) : (((/* implicit */unsigned long long int) arr_23 [i_6]))));
                }
                var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_9 - 2] [i_6 + 1]))));
                /* LoopSeq 2 */
                for (unsigned char i_12 = 3; i_12 < 9; i_12 += 1) 
                {
                    var_33 = ((unsigned char) (unsigned short)0);
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        arr_45 [i_6] [i_6] [i_6] [i_6] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3763303512U)) ? (4294967273U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9 - 1])))));
                        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_32 [i_6] [i_6 + 1] [i_12 - 2] [i_9 - 2])) : (((/* implicit */int) arr_32 [i_6] [i_6 + 1] [i_12 + 1] [i_9 + 1]))));
                    }
                    arr_46 [i_6] [i_8] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) var_15);
                }
                for (unsigned int i_14 = 2; i_14 < 6; i_14 += 3) 
                {
                    var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_14] [i_14] [i_14] [i_14 - 2] [i_14 - 1] [i_14 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 5618766430182473919ULL)) ? (2367014641883014089ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    arr_50 [i_6] [i_8] [i_9] [i_6] = ((/* implicit */short) var_8);
                }
            }
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                arr_53 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_6 + 1] [i_6 + 1])) < (-579584721)));
                /* LoopSeq 4 */
                for (unsigned long long int i_16 = 2; i_16 < 8; i_16 += 1) 
                {
                    var_36 = var_4;
                    var_37 = ((/* implicit */unsigned int) var_7);
                    var_38 ^= ((/* implicit */unsigned short) 366664696);
                }
                for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    arr_59 [i_6] [i_8] [i_15] [i_8] [i_15] [i_6] = ((/* implicit */unsigned char) (((_Bool)1) ? ((-(((/* implicit */int) (signed char)81)))) : (((/* implicit */int) (unsigned char)70))));
                    var_39 = ((/* implicit */unsigned char) ((arr_8 [i_6] [i_6 + 1] [i_6]) ? (((/* implicit */int) arr_30 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_57 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]))));
                    var_40 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)0))));
                }
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 3; i_19 < 6; i_19 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)50239)) < (((/* implicit */int) (unsigned char)191))));
                        var_42 *= ((unsigned char) ((((/* implicit */_Bool) var_9)) || ((_Bool)0)));
                        var_43 ^= ((/* implicit */signed char) ((short) arr_15 [i_6] [i_6 + 1]));
                    }
                    arr_64 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_6] [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_14))));
                    var_44 = ((/* implicit */unsigned char) min((var_44), (var_17)));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_68 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) / (9223372036854775807LL)));
                    arr_69 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6 + 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_35 [i_6] [i_6] [i_15] [i_20] [i_8]))) : (arr_35 [i_6 + 1] [i_8] [i_6 + 1] [i_20] [i_8])));
                    var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((signed char) (unsigned char)17)))));
                    var_46 *= ((unsigned char) ((((/* implicit */_Bool) 13406364482600713826ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
                }
                var_47 ^= ((/* implicit */unsigned short) arr_1 [i_15] [i_15]);
                /* LoopNest 2 */
                for (unsigned char i_21 = 3; i_21 < 8; i_21 += 1) 
                {
                    for (unsigned char i_22 = 1; i_22 < 8; i_22 += 4) 
                    {
                        {
                            arr_75 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_6])))) && (((/* implicit */_Bool) arr_72 [i_6] [i_8] [i_21 - 2] [i_8] [i_6]))));
                            arr_76 [i_6] [i_8] = ((/* implicit */unsigned short) ((int) 12137953301756690608ULL));
                            arr_77 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7215)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) (unsigned short)51236)) : (((/* implicit */int) arr_26 [i_6] [i_6])))) : (((/* implicit */int) var_6))));
                            arr_78 [i_6] [i_8] [i_6] [i_6] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_74 [i_22 + 2] [i_8] [i_15] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_74 [i_22 + 2] [i_8] [i_15] [i_6 + 1] [i_6 + 1]))));
                            var_48 ^= ((/* implicit */unsigned long long int) arr_73 [i_6 + 1] [i_22 + 1] [i_21 - 2] [i_8] [i_22] [i_8] [i_22]);
                        }
                    } 
                } 
            }
            var_49 *= ((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_8] [i_6] [i_6] [i_8] [i_8] [i_6]))) * (((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_8] [i_8] [i_6] [i_6] [i_8]))) / (var_2))));
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16573320482328083234ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)240))));
        }
        for (unsigned char i_23 = 1; i_23 < 7; i_23 += 2) /* same iter space */
        {
            arr_83 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (unsigned char)0);
            var_51 ^= ((/* implicit */signed char) (~(-3878024289203618648LL)));
            /* LoopSeq 3 */
            for (unsigned long long int i_24 = 2; i_24 < 9; i_24 += 1) 
            {
                arr_86 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6]);
                var_52 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_23 - 1] [8U] [i_6 + 1])) ? (((/* implicit */int) arr_74 [i_23 + 2] [i_23 + 3] [i_23 + 2] [i_23] [i_23 - 1])) : (((/* implicit */int) arr_74 [i_23 - 1] [i_23 + 3] [i_23] [i_23 + 3] [i_23 - 1]))));
            }
            for (unsigned char i_25 = 0; i_25 < 10; i_25 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_26 = 0; i_26 < 10; i_26 += 2) 
                {
                    var_53 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 549755813887ULL)) ? (((/* implicit */int) arr_22 [i_6] [i_23])) : (((/* implicit */int) arr_32 [i_6] [i_23] [i_25] [i_23]))))));
                    var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (unsigned short)41307)) : (((/* implicit */int) (unsigned char)189)))))));
                }
                for (int i_27 = 0; i_27 < 10; i_27 += 2) 
                {
                    var_55 = ((/* implicit */unsigned char) var_8);
                    var_56 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)52877))));
                    arr_97 [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_73 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_23]))) : (8796092497920ULL)))));
                    var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_6] [i_6 + 1] [i_25] [i_6] [i_23 + 2] [i_23])) ? (arr_6 [i_6]) : (arr_6 [i_6]))))));
                }
                var_58 = 10517983811558803656ULL;
                var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_62 [i_25] [i_25] [i_25] [i_25]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (5055818683685687555ULL))))))));
                arr_98 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_3 [i_6] [i_6]);
            }
            for (unsigned char i_28 = 0; i_28 < 10; i_28 += 4) /* same iter space */
            {
                var_60 = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 3 */
                for (unsigned char i_29 = 0; i_29 < 10; i_29 += 4) 
                {
                    var_61 = ((/* implicit */unsigned long long int) min((var_61), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_65 [i_6] [i_6])) * (((/* implicit */int) var_0)))))))));
                    var_62 = ((/* implicit */signed char) ((arr_103 [i_29] [i_29] [i_6] [i_29] [i_29] [i_23 + 1]) % (arr_103 [i_28] [i_23] [i_6] [i_29] [i_29] [i_6])));
                    arr_104 [i_6] [i_6] [i_28] = ((/* implicit */unsigned long long int) arr_102 [i_6] [i_6] [i_6] [i_6]);
                }
                for (unsigned char i_30 = 0; i_30 < 10; i_30 += 1) /* same iter space */
                {
                    var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1849179102U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((unsigned char) var_5)))));
                    arr_107 [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) arr_36 [i_6] [i_23 + 1] [i_23] [i_30] [i_6] [i_6 + 1])) || (((/* implicit */_Bool) arr_13 [i_6] [i_23])));
                    var_64 = ((/* implicit */signed char) arr_34 [i_30] [i_30] [i_30]);
                    arr_108 [i_6] [i_23] [i_30] [i_30] = ((/* implicit */signed char) ((unsigned long long int) var_2));
                    arr_109 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) 14853390714181215368ULL);
                }
                for (unsigned char i_31 = 0; i_31 < 10; i_31 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_32 = 1; i_32 < 8; i_32 += 3) /* same iter space */
                    {
                        var_65 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_71 [i_32] [i_32 + 2] [i_6] [i_32 + 2]))));
                        arr_116 [i_6] [i_6] [i_28] [i_31] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6]))))));
                        arr_117 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = 134217720;
                        var_66 = ((/* implicit */unsigned char) min((var_66), (((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */int) arr_111 [i_6] [i_23] [i_28] [i_31] [i_32])) : (((/* implicit */int) (_Bool)0)))))))));
                    }
                    for (unsigned char i_33 = 1; i_33 < 8; i_33 += 3) /* same iter space */
                    {
                        arr_120 [i_6] [i_6] [i_6] [i_31] [i_33] [i_6] [i_28] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 248ULL)))) && (((/* implicit */_Bool) var_4))));
                        var_67 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)243))));
                    }
                    for (signed char i_34 = 0; i_34 < 10; i_34 += 1) 
                    {
                        arr_123 [i_6] [i_6] [i_6] [i_23] [i_6] = ((/* implicit */signed char) arr_80 [i_6 + 1] [i_6]);
                        arr_124 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)17930)) || (((/* implicit */_Bool) var_3))));
                        var_68 ^= ((/* implicit */unsigned long long int) arr_93 [i_6] [i_6] [i_23] [i_6]);
                        var_69 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14206578861954130912ULL)) ? (((/* implicit */int) (unsigned short)65508)) : (1552566789)));
                    }
                    for (unsigned short i_35 = 1; i_35 < 8; i_35 += 1) 
                    {
                        var_70 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32767))));
                        var_71 = ((/* implicit */short) arr_5 [i_6] [i_6] [i_6]);
                        var_72 = ((/* implicit */unsigned char) min((var_72), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_112 [i_6] [i_6] [i_28] [i_28] [i_35] [i_6] [i_23]))))))))));
                        var_73 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_35 [i_28] [i_23] [i_28] [i_31] [i_31])))))) : (arr_92 [i_35] [i_35] [i_35])));
                    }
                    var_74 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) < (((((/* implicit */_Bool) arr_29 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (5385769097512392569ULL)))));
                    var_75 = ((/* implicit */signed char) max((var_75), (((/* implicit */signed char) (~(((/* implicit */int) var_17)))))));
                }
            }
        }
        for (unsigned char i_36 = 1; i_36 < 7; i_36 += 2) /* same iter space */
        {
            var_76 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_112 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]))));
            var_77 = ((/* implicit */signed char) min((var_77), (((/* implicit */signed char) arr_9 [i_6] [i_6]))));
            var_78 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_36 - 1] [i_36 + 1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_101 [i_6])) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_7))));
        }
    }
    for (signed char i_37 = 0; i_37 < 12; i_37 += 4) 
    {
        var_79 ^= ((/* implicit */long long int) ((unsigned short) (unsigned char)149));
        arr_134 [i_37] [i_37] = ((/* implicit */short) var_10);
    }
}
