/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63885
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), ((-(var_9)))));
        var_13 = (unsigned short)6126;
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6119)))) & (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)194)), ((unsigned short)6121)))))), (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned short) ((unsigned char) 8806987435617462868LL));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        arr_15 [i_3] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-21002))) >= (8806987435617462863LL)));
                        var_14 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_11 [i_1] [i_4])))) + (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)18093)))))));
                        arr_16 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3] [i_3] [13U] [i_4]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_15 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [(unsigned short)4] [i_3] [(unsigned short)4]))));
                            arr_19 [(unsigned short)14] [(unsigned short)14] [i_2] [i_1] [(_Bool)1] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1416)) / (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)59420)) : (((/* implicit */int) (_Bool)1))))));
                            arr_20 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [(signed char)13] [16ULL]))));
                            arr_21 [i_5] [18ULL] [i_3] [18ULL] [i_1] &= ((/* implicit */_Bool) arr_13 [i_3]);
                            arr_22 [i_5] [i_4] [i_1] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_3]))));
                        }
                        arr_23 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) (((((_Bool)1) ? (arr_14 [(signed char)15] [i_3] [i_2] [(signed char)0] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) >> (((((/* implicit */int) (unsigned short)59422)) - (59406)))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                arr_27 [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((-319438065) == (((/* implicit */int) arr_7 [1U])))) ? (-8806987435617462868LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)31786)))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_34 [i_1] [(_Bool)1] [i_6] [i_7] [18U] = ((/* implicit */unsigned long long int) (-((+(2251172354U)))));
                            arr_35 [i_1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 3186648395U))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
            {
                arr_39 [i_1] = ((/* implicit */long long int) ((arr_18 [(signed char)12] [i_1] [i_9] [i_1] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(_Bool)1])))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -431614659350569914LL)) != (arr_4 [i_1])));
            }
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    var_17 *= ((/* implicit */unsigned long long int) ((((-6548381031968204988LL) == (((/* implicit */long long int) var_5)))) ? (((/* implicit */int) (unsigned short)38530)) : ((-(((/* implicit */int) (_Bool)1))))));
                    var_18 = ((/* implicit */signed char) ((_Bool) arr_11 [i_11] [i_2]));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) arr_25 [i_10] [i_1] [i_1]);
                    var_20 = ((/* implicit */int) (((+(595767750U))) / ((+(3186648390U)))));
                    var_21 = ((/* implicit */long long int) (~(var_6)));
                }
                arr_48 [i_2] [i_1] [i_1] = ((/* implicit */short) arr_45 [(_Bool)1] [i_1] [0ULL]);
            }
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    arr_54 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_40 [i_13]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_13] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)59410)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59410))) != (var_4))))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((arr_12 [i_15] [(unsigned char)4] [i_13] [(unsigned char)4] [i_1]) && (arr_12 [i_13] [18ULL] [i_15] [i_15] [0LL]))))));
                    }
                }
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    arr_60 [i_1] [(signed char)14] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_50 [i_1]))));
                    /* LoopSeq 4 */
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                    {
                        var_24 ^= (!(((/* implicit */_Bool) var_7)));
                        arr_64 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)6114))));
                    }
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                    {
                        arr_67 [i_18] [i_16] [i_16] [i_13] [i_1] = ((/* implicit */unsigned long long int) arr_46 [i_1] [i_16] [i_13] [i_1]);
                        arr_68 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        arr_69 [i_13] [i_2] [(_Bool)1] [i_16] [i_1] = (-((-(((/* implicit */int) (unsigned char)37)))));
                    }
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_25 ^= ((/* implicit */unsigned long long int) (+(arr_26 [i_19] [(unsigned short)14] [(unsigned short)14] [i_1])));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [(unsigned char)16] [i_16] [i_13] [(unsigned char)16])) ? (((/* implicit */long long int) 3923900131U)) : ((~(6548381031968204988LL))))))));
                        arr_72 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)14474)) <= (-319438089))))));
                        arr_73 [i_19] [i_1] [i_16] [i_13] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) (~(arr_36 [i_1] [(signed char)8] [i_1]))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        arr_76 [8U] [(unsigned short)18] [i_1] [8U] [i_20] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44421)) ^ (((/* implicit */int) (unsigned short)6112))))) : (var_4)));
                        var_27 = ((/* implicit */_Bool) (unsigned short)17634);
                    }
                    var_28 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)20]))) != (310057281616331336ULL))))));
                    var_29 = ((/* implicit */unsigned char) (+((~(-8806987435617462870LL)))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_80 [i_1] [(signed char)5] [i_13] [i_1] [i_21] = ((/* implicit */signed char) ((unsigned long long int) 8814688771613528530LL));
                    var_30 = ((/* implicit */int) (~(2157090148446791600ULL)));
                }
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned char)179)))))))));
                var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_61 [i_1] [(signed char)10] [16ULL] [(signed char)4] [i_2]) : (arr_61 [i_1] [i_1] [(signed char)18] [i_13] [i_13])));
                var_33 = ((/* implicit */signed char) arr_77 [i_1] [i_1] [i_2] [(unsigned char)22] [i_1] [i_13]);
            }
            var_34 = ((/* implicit */unsigned short) -319438062);
        }
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */long long int) 18136686792093220301ULL);
            var_36 = ((/* implicit */_Bool) (signed char)40);
            /* LoopSeq 3 */
            for (signed char i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                var_37 ^= (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_62 [i_23] [(signed char)16] [(unsigned char)19] [23ULL] [1LL] [i_1])) : (4897315016932808089ULL))));
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 24; i_24 += 4) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_89 [i_25] [i_22] [i_25] [i_24] [23ULL] [i_24] [i_1] = ((/* implicit */unsigned long long int) arr_59 [i_23] [i_1] [i_25] [i_24] [i_23] [i_1]);
                            arr_90 [i_24] [i_24] [i_1] [i_22] [i_1] = ((/* implicit */signed char) (~(arr_4 [i_1])));
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (+(arr_61 [i_25] [i_1] [i_24] [i_22] [i_1]))))));
                        }
                    } 
                } 
                arr_91 [i_1] [i_22] [20ULL] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_26 = 0; i_26 < 24; i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 24; i_27 += 1) 
                {
                    for (signed char i_28 = 0; i_28 < 24; i_28 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)-6))))));
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((arr_8 [i_26]) ? (((((/* implicit */_Bool) -319438089)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_27] [(_Bool)1] [i_27]))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -319438089)) || (((/* implicit */_Bool) (unsigned short)47618)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_29 = 0; i_29 < 24; i_29 += 3) 
                {
                    for (long long int i_30 = 0; i_30 < 24; i_30 += 3) 
                    {
                        {
                            arr_108 [i_1] [(_Bool)1] [i_29] [i_29] [i_26] [i_22] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */long long int) -1239614977)) : (-6548381031968204988LL)));
                            arr_109 [i_1] [i_22] [i_1] [(_Bool)1] [i_29] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_38 [i_29] [i_29]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_31 = 0; i_31 < 24; i_31 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_32 = 0; i_32 < 24; i_32 += 3) 
                {
                    arr_115 [i_1] [i_31] [i_22] [i_1] [i_1] = ((/* implicit */unsigned short) (+(16289653925262760015ULL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_33 = 0; i_33 < 24; i_33 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18136686792093220278ULL)) ? (2102851478) : (((/* implicit */int) arr_37 [i_33])))))));
                        var_42 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 4151422582U)) + (310057281616331336ULL)))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [(unsigned char)0] [i_22] [i_33] [i_1])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39729))) : (18136686792093220280ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6)))))))))));
                        arr_118 [i_1] [i_22] [i_31] [i_1] [i_33] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) (signed char)-28)))));
                    }
                    for (unsigned char i_34 = 0; i_34 < 24; i_34 += 4) 
                    {
                        arr_123 [i_1] [i_34] [i_31] [i_1] [i_34] &= ((arr_12 [i_1] [i_34] [i_31] [(signed char)4] [i_34]) ? (((/* implicit */int) arr_12 [(signed char)22] [i_34] [i_34] [i_22] [(signed char)12])) : (((/* implicit */int) arr_12 [i_31] [i_34] [i_1] [i_34] [i_31])));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (18136686792093220278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_31] [(_Bool)1] [i_31]))))))));
                        var_45 &= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1243164653U)))))));
                    }
                }
                for (unsigned long long int i_35 = 0; i_35 < 24; i_35 += 3) 
                {
                    arr_126 [i_31] [i_1] [i_1] [10LL] = ((/* implicit */long long int) (-(var_9)));
                    var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned short)17918)))))));
                    var_48 &= ((/* implicit */unsigned long long int) (signed char)-48);
                }
                for (unsigned int i_36 = 0; i_36 < 24; i_36 += 3) 
                {
                    arr_130 [(_Bool)1] [(signed char)12] [12LL] [i_22] [12ULL] [i_36] &= ((/* implicit */long long int) (-(arr_71 [i_31] [i_1])));
                    var_49 = ((/* implicit */long long int) (~((~(310057281616331335ULL)))));
                }
                arr_131 [i_22] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1]);
            }
            /* LoopSeq 2 */
            for (signed char i_37 = 0; i_37 < 24; i_37 += 3) 
            {
                var_50 |= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_124 [10ULL] [i_1] [i_1] [i_1] [i_1] [i_37])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [(signed char)8]))) : ((((_Bool)1) ? (18136686792093220286ULL) : (18136686792093220278ULL)))));
                var_51 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-30))));
                arr_135 [i_1] [i_37] [21] = (+(((/* implicit */int) arr_74 [i_37] [(unsigned short)1] [6ULL] [i_22] [i_22] [i_1] [i_1])));
                var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_22])))))));
            }
            for (unsigned long long int i_38 = 0; i_38 < 24; i_38 += 1) 
            {
                var_53 *= ((/* implicit */unsigned int) ((long long int) (_Bool)1));
                /* LoopNest 2 */
                for (long long int i_39 = 0; i_39 < 24; i_39 += 1) 
                {
                    for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned long long int) arr_47 [i_39] [i_1] [i_38]);
                            var_55 ^= ((/* implicit */unsigned short) (~(-4245590457289890960LL)));
                            var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6116))))) : (((/* implicit */int) (signed char)-50))));
                            var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2161759864129451165ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_31 [i_40] [i_39] [i_38] [i_1]))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_42 = 0; i_42 < 24; i_42 += 1) 
            {
                for (short i_43 = 0; i_43 < 24; i_43 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_44 = 0; i_44 < 24; i_44 += 3) 
                        {
                            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_1] [i_1] [i_41] [i_43] [(unsigned short)6] [16LL])) < (((/* implicit */int) arr_59 [i_44] [i_1] [i_42] [i_41] [i_1] [i_1]))));
                            arr_154 [(short)4] [i_44] &= ((((((/* implicit */int) arr_38 [i_43] [i_41])) | (((/* implicit */int) (unsigned short)23893)))) <= (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))));
                            arr_155 [i_43] [i_1] [i_1] = ((/* implicit */unsigned short) -319438065);
                        }
                        arr_156 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_150 [i_1] [i_41] [2U] [i_43]))));
                        var_59 *= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                } 
            } 
            var_60 = ((/* implicit */unsigned short) ((310057281616331334ULL) > (((/* implicit */unsigned long long int) var_10))));
        }
    }
    var_61 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)18428))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */unsigned long long int) var_10)) : (2081104980170132630ULL)))))) : (var_6)));
    var_62 += ((/* implicit */signed char) (_Bool)1);
    var_63 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-28)), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned short) 1519242173U))))));
    var_64 = ((/* implicit */signed char) ((2161759864129451165ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
}
