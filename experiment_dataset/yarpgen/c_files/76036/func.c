/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76036
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) var_12);
        arr_4 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) (unsigned char)199)))))) : ((~(((/* implicit */int) arr_3 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) <= (arr_6 [i_1])))) ^ ((+(((/* implicit */int) arr_3 [i_1]))))));
    }
    for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(-588313099))))));
        var_23 = ((/* implicit */unsigned long long int) var_2);
    }
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 *= ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_16))))));
        var_25 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_11 [i_3])))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_4 + 2])) ^ (((/* implicit */int) var_8))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) (+(arr_8 [i_4 + 1])));
                        arr_28 [i_4] [i_5 - 1] [i_6] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) var_16)))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            arr_32 [i_6] [i_5 + 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2029312823)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65504)))) : (3703898022082253856ULL)));
                            var_28 = ((/* implicit */unsigned char) ((signed char) (signed char)124));
                            var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4 + 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_12))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            arr_36 [i_4] [i_4 + 2] [i_5] [i_6] [i_6] [i_9] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_6] [i_4])) : (arr_27 [i_4 + 1] [i_5] [i_5] [i_7] [i_9]))));
                            arr_37 [i_5 + 1] [i_6] = ((/* implicit */unsigned short) ((int) var_7));
                            arr_38 [i_4] [i_6] = arr_8 [i_9];
                        }
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_35 [i_4 + 1] [i_5 + 1]))));
                            arr_42 [i_4] [i_5] [i_4] [i_7] [i_6] = ((/* implicit */unsigned char) var_8);
                            arr_43 [i_4 + 2] [i_5 + 1] [i_6] [i_6] [i_10] = ((/* implicit */unsigned char) ((int) arr_1 [i_4 - 1]));
                            arr_44 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */signed char) arr_25 [11U] [i_7] [i_6] [i_5]);
                            var_31 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_4 + 1] [i_4 + 1] [i_6] [i_10] [i_10] [i_5 - 1]))));
                        }
                    }
                } 
            } 
        } 
        var_32 ^= ((/* implicit */unsigned short) ((unsigned char) (unsigned short)0));
        var_33 = ((/* implicit */short) var_8);
        var_34 = ((((/* implicit */_Bool) (signed char)-6)) ? (8215024527422065093LL) : (((/* implicit */long long int) arr_22 [i_4 - 1] [(unsigned short)12] [(unsigned short)12] [i_4 - 1])));
    }
    for (int i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_11] [i_11]))))) ? (((arr_8 [i_11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) var_9)))))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 2; i_12 < 12; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                arr_51 [i_12] [i_12] [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_8 [i_11])))));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (unsigned short)32))))))));
                arr_52 [i_11] [i_12 - 2] [i_13] = ((/* implicit */unsigned short) ((_Bool) (~(var_10))));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 1; i_14 < 9; i_14 += 4) 
                {
                    var_37 += ((/* implicit */unsigned char) (signed char)(-127 - 1));
                    var_38 = ((/* implicit */int) var_2);
                }
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    var_39 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) var_9)))));
                    arr_60 [i_12] [i_15] = var_17;
                    var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_55 [i_12] [i_12 + 1] [i_13] [i_15]))));
                }
            }
            for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_17 = 4; i_17 < 12; i_17 += 1) 
                {
                    arr_67 [i_16] = ((/* implicit */unsigned long long int) ((var_17) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_12 - 2] [i_12 + 1])) * (((/* implicit */int) (unsigned short)0)))))));
                    arr_68 [i_12] [i_12] [i_12] = (~((-(((/* implicit */int) (unsigned short)65490)))));
                    arr_69 [i_17 - 2] [i_16] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                    arr_70 [i_11] [i_12 - 2] [i_16] [i_17 - 4] [i_17] = ((/* implicit */int) ((((long long int) arr_19 [i_17 - 2] [i_12 - 1])) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_17 - 1] [i_12 - 1])) && (((/* implicit */_Bool) var_11))))))));
                }
                for (unsigned char i_18 = 3; i_18 < 10; i_18 += 2) 
                {
                    arr_73 [i_12] [i_16] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_12 + 1] [i_18 - 2])) ? (((/* implicit */int) arr_49 [i_12 - 2] [i_18 - 2])) : (((/* implicit */int) (unsigned short)65509))))) ? (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_12 - 2] [i_18 + 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_12 - 1] [i_18 + 2]))))))));
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) arr_0 [i_16]))));
                }
                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_66 [i_11] [i_11] [i_11])))) && (((/* implicit */_Bool) (-(arr_66 [i_11] [i_12 + 1] [i_16])))))))));
                /* LoopSeq 4 */
                for (unsigned short i_19 = 2; i_19 < 11; i_19 += 1) 
                {
                    var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_46 [i_11]) / (((/* implicit */long long int) var_9)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_20 = 2; i_20 < 12; i_20 += 2) 
                    {
                        var_44 -= ((/* implicit */signed char) (+(arr_25 [i_11] [i_19 - 1] [i_11] [i_20 + 1])));
                        var_45 -= ((/* implicit */int) var_13);
                        arr_79 [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) (unsigned char)254))))) ^ (arr_17 [i_12 + 1])));
                    }
                    for (unsigned short i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        var_46 = ((/* implicit */long long int) ((_Bool) arr_18 [i_11]));
                        var_47 = ((/* implicit */_Bool) ((unsigned char) arr_46 [i_11]));
                        arr_83 [i_11] [i_12] [i_11] [(short)7] [i_21] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) ((var_3) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)65511))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_86 [i_11] [i_12] [i_22] = ((/* implicit */unsigned short) var_6);
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21942)) ? (((/* implicit */int) (unsigned short)3640)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15030332026247162821ULL)) ? (((/* implicit */int) arr_72 [(unsigned short)6] [(unsigned short)6] [i_16] [i_16])) : (((/* implicit */int) (unsigned char)221))))) && (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25))) != (arr_17 [i_16])))))) : (((/* implicit */int) var_4))));
                        var_49 = ((/* implicit */int) arr_16 [i_16] [i_22]);
                        var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_41 [i_11] [i_11] [i_11] [(unsigned char)9] [i_11]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) arr_1 [i_16]))))))))));
                        arr_87 [i_11] [i_22] [i_16] [i_19] [i_22] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14876694169733693087ULL)) && (((/* implicit */_Bool) (unsigned short)62013))));
                    }
                    for (unsigned int i_23 = 3; i_23 < 11; i_23 += 1) 
                    {
                        arr_91 [i_11] [i_16] [i_16] [i_16] [i_19] [i_23] &= ((/* implicit */int) (unsigned char)147);
                        arr_92 [i_16] [i_23] [i_16] [i_23] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7))));
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) (-(((/* implicit */int) arr_75 [i_23 - 2] [i_23 + 2] [i_23 - 3])))))));
                    }
                    arr_93 [(unsigned char)2] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) var_0);
                }
                for (unsigned short i_24 = 3; i_24 < 10; i_24 += 3) /* same iter space */
                {
                    arr_98 [i_24] [i_12] [i_24] [i_11] = arr_89 [i_11] [i_24] [i_11] [i_11] [i_11];
                    arr_99 [i_11] [i_24] [i_11] [i_11] [i_11] [(unsigned char)4] = ((/* implicit */long long int) var_17);
                }
                /* vectorizable */
                for (unsigned short i_25 = 3; i_25 < 10; i_25 += 3) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned char) max((var_52), (var_13)));
                    var_53 = var_11;
                    var_54 = ((/* implicit */unsigned short) max((var_54), (var_5)));
                }
                /* vectorizable */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_55 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12 + 1] [i_12] [i_12 + 1] [i_12 - 1]))) & (((var_6) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                    var_56 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_17)));
                }
                arr_104 [i_11] [i_11] [i_16] [i_16] = ((/* implicit */long long int) ((unsigned long long int) arr_84 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1] [(signed char)0]));
            }
            arr_105 [i_11] [i_12 + 1] [i_12] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) < (((((/* implicit */_Bool) var_12)) ? (arr_41 [i_11] [i_11] [i_11] [i_12 - 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) var_6))));
            arr_106 [i_12] = ((unsigned char) (+(18446744073709551607ULL)));
            var_57 = ((((/* implicit */_Bool) (~(((5633192183956323027LL) ^ (((/* implicit */long long int) var_14))))))) ? (((/* implicit */int) ((unsigned char) max((var_1), (((/* implicit */long long int) var_8)))))) : (((((/* implicit */int) var_16)) + (((/* implicit */int) arr_7 [i_12 - 1])))));
        }
    }
    var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (signed char i_27 = 0; i_27 < 19; i_27 += 1) 
    {
        arr_111 [i_27] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 2 */
        for (long long int i_28 = 0; i_28 < 19; i_28 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_29 = 0; i_29 < 19; i_29 += 1) 
            {
                var_59 = ((/* implicit */unsigned char) var_10);
                arr_117 [i_27] [i_27] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_115 [i_29] [i_28] [i_27])) ? (((/* implicit */int) var_8)) : ((-(((((/* implicit */int) var_2)) % (((/* implicit */int) arr_112 [i_27] [i_28] [i_27]))))))));
            }
            /* vectorizable */
            for (unsigned char i_30 = 1; i_30 < 18; i_30 += 4) 
            {
                arr_121 [i_30] [i_28] [i_28] [i_27] = ((/* implicit */unsigned short) (~(var_14)));
                var_60 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) 6074541167010475270LL)))));
                arr_122 [i_27] = (!(((_Bool) arr_9 [i_27] [i_30])));
            }
            for (unsigned short i_31 = 2; i_31 < 17; i_31 += 2) 
            {
                var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_126 [i_31 + 2] [i_31 + 1] [i_31 - 1] [i_31 + 1]))))) ? (((/* implicit */int) arr_123 [i_31 + 1] [i_31 - 1] [i_31 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)186)))))));
                var_62 = ((/* implicit */unsigned short) arr_107 [i_31]);
            }
            arr_127 [i_27] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (unsigned short)65488)) ? (((/* implicit */int) arr_1 [i_27])) : (((/* implicit */int) (unsigned char)236)))))) ^ (((((/* implicit */_Bool) ((unsigned char) arr_125 [i_27] [i_27] [i_27] [(_Bool)1]))) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) var_8))))));
        }
        for (unsigned short i_32 = 0; i_32 < 19; i_32 += 1) 
        {
            var_63 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8305863876090286286LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (5633192183956323027LL)));
            arr_131 [i_32] [i_27] [i_27] = (unsigned char)82;
        }
    }
    var_64 = var_7;
}
