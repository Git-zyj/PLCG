/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64439
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
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((unsigned long long int) 17U)))))));
                        var_13 -= ((/* implicit */short) var_2);
                        var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned short) (short)-32332))) ? (var_8) : (((/* implicit */int) (short)32301))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_4))));
        var_16 = (((-(((((/* implicit */_Bool) (short)32334)) ? (467127546) : (((/* implicit */int) (short)-32351)))))) | (((((/* implicit */_Bool) (short)-32320)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned short)2046)))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_17 = ((/* implicit */short) min((((/* implicit */int) (signed char)4)), (((int) (short)32339))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (short)32348))))) ? ((+(((/* implicit */int) ((unsigned short) 15579870972415539487ULL))))) : (min((var_2), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-32342)), ((unsigned short)2041))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_18 [(unsigned short)6])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5])) | (var_8))))));
            var_20 = ((/* implicit */int) (+(var_1)));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 3; i_7 < 24; i_7 += 4) 
            {
                var_21 = ((/* implicit */signed char) var_10);
                var_22 = arr_17 [i_7 + 1] [i_5];
            }
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                arr_24 [13U] [0ULL] [i_6] [i_6] = ((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (unsigned short)51109)) : (((/* implicit */int) (unsigned short)30850)))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    var_24 = (+(((((/* implicit */_Bool) (unsigned short)63480)) ? (15579870972415539488ULL) : (((/* implicit */unsigned long long int) 4294967295U)))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (11524913522291793658ULL) : (((/* implicit */unsigned long long int) 3438634474U))));
                    var_26 = ((/* implicit */unsigned long long int) var_11);
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15263))) + (var_0)))) ? ((-(((/* implicit */int) (unsigned char)248)))) : (20)));
                }
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_28 = (~(((/* implicit */int) (_Bool)1)));
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_20 [i_10] [i_10] [i_8] [i_10])))) ? (((/* implicit */unsigned long long int) arr_26 [i_5] [20LL] [i_8] [i_10])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) / (15579870972415539492ULL))));
                    }
                    var_30 += ((/* implicit */unsigned int) ((unsigned long long int) arr_30 [i_5] [i_5] [i_8]));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) arr_13 [i_8]))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2866873101294012134ULL)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))));
                        }
                    } 
                } 
                var_33 = 86628704067062249LL;
            }
            /* LoopSeq 3 */
            for (short i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                var_34 = ((/* implicit */signed char) arr_21 [i_6] [i_14]);
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2866873101294012109ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60876))) : (274877898752LL)))) ? (11524913522291793662ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23804))) ^ (var_7))))));
            }
            for (unsigned int i_15 = 4; i_15 < 24; i_15 += 3) 
            {
                arr_45 [10U] [i_15] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_35 [i_5] [i_6] [i_6] [0ULL] [i_5]))));
                var_36 -= ((/* implicit */short) (unsigned char)211);
            }
            for (short i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                var_37 = ((/* implicit */_Bool) var_1);
                var_38 = ((unsigned int) 227093753U);
                var_39 = ((/* implicit */unsigned int) var_4);
                var_40 = ((/* implicit */unsigned long long int) var_2);
            }
        }
        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
        {
            arr_52 [i_17] = var_7;
            arr_53 [i_5] [i_17] = ((/* implicit */unsigned long long int) ((152984926U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83)))));
            arr_54 [16U] [i_5] [16U] |= ((/* implicit */unsigned long long int) (signed char)4);
        }
        var_41 = ((/* implicit */long long int) ((int) arr_18 [i_5]));
        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) <= (28278727U))) ? (arr_51 [i_5] [i_5]) : (15579870972415539488ULL)));
        var_43 *= ((/* implicit */unsigned long long int) ((_Bool) var_7));
        /* LoopSeq 3 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 2; i_19 < 22; i_19 += 1) 
            {
                for (short i_20 = 3; i_20 < 22; i_20 += 1) 
                {
                    {
                        var_44 = ((unsigned short) ((signed char) (unsigned char)244));
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 2; i_21 < 24; i_21 += 4) 
                        {
                            var_45 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_20 - 1] [i_19 - 2] [i_21 + 1])) ? (((unsigned int) 11524913522291793654ULL)) : (((arr_58 [i_19] [i_21]) % (arr_15 [i_19])))));
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) var_3))));
                            var_47 = ((/* implicit */long long int) var_7);
                        }
                        var_48 = ((/* implicit */int) ((((int) (unsigned char)3)) > ((+(((/* implicit */int) (signed char)4))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_22 = 2; i_22 < 23; i_22 += 1) 
            {
                var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_5] [(unsigned char)18] [i_22] [i_22] [i_22 + 1] [i_5])))))) ? (((((/* implicit */_Bool) 777836035U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1))) : ((~(1071644672U)))));
                /* LoopSeq 3 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_50 = 1071644651U;
                    var_51 = ((/* implicit */long long int) ((var_8) == (((/* implicit */int) arr_55 [i_22 - 2] [i_18 - 1] [i_18 - 1]))));
                }
                for (signed char i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    arr_75 [i_22] [i_22] [i_24] = ((/* implicit */int) arr_38 [i_22 - 2] [(signed char)9] [i_22 - 2] [i_22 - 2] [i_22]);
                    arr_76 [i_22] [i_22 + 1] [i_18] [i_22] = ((/* implicit */unsigned int) arr_72 [i_5] [i_18] [(signed char)19] [i_24]);
                    var_52 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)118))));
                    var_53 -= ((/* implicit */long long int) var_5);
                }
                for (signed char i_25 = 1; i_25 < 24; i_25 += 1) 
                {
                    var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) (+(-1853712808))))));
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 25; i_26 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned int) var_4);
                        arr_81 [i_26] [i_22] [i_26] [i_26] = ((/* implicit */int) ((signed char) 11524913522291793682ULL));
                    }
                    var_56 = ((/* implicit */unsigned short) arr_49 [i_25] [i_22] [i_5] [i_5]);
                }
            }
        }
        for (unsigned int i_27 = 0; i_27 < 25; i_27 += 3) 
        {
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 25; i_28 += 1) 
            {
                for (unsigned char i_29 = 0; i_29 < 25; i_29 += 3) 
                {
                    {
                        var_57 ^= ((/* implicit */unsigned long long int) var_2);
                        var_58 *= ((/* implicit */unsigned int) (signed char)124);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_30 = 0; i_30 < 25; i_30 += 1) 
                        {
                            var_59 *= ((/* implicit */_Bool) ((2866873101294012107ULL) ^ (15579870972415539503ULL)));
                            var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3655)) ? ((+(1794415974U))) : (arr_49 [i_5] [i_5] [i_27] [i_29])));
                            var_61 = ((((/* implicit */int) (signed char)9)) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) (signed char)118))))));
                            var_62 = ((((/* implicit */int) arr_66 [i_28] [i_29] [i_30])) * (((/* implicit */int) arr_13 [7U])));
                        }
                        for (unsigned int i_31 = 0; i_31 < 25; i_31 += 1) 
                        {
                            var_63 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-123)) * (((/* implicit */int) (signed char)126))));
                            var_64 = ((/* implicit */signed char) arr_15 [i_29]);
                            var_65 = ((/* implicit */unsigned short) arr_82 [i_5] [24LL] [20]);
                            var_66 = (unsigned char)90;
                        }
                    }
                } 
            } 
            var_67 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)18209))));
            /* LoopSeq 4 */
            for (unsigned int i_32 = 2; i_32 < 23; i_32 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 1; i_33 < 22; i_33 += 3) 
                {
                    for (long long int i_34 = 0; i_34 < 25; i_34 += 1) 
                    {
                        {
                            var_68 += ((/* implicit */unsigned int) ((unsigned short) ((signed char) 18446744073709551613ULL)));
                            var_69 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_32 - 1] [i_32 + 1] [i_32 - 2] [i_32 + 2])) && (((/* implicit */_Bool) ((int) arr_86 [i_34] [(unsigned short)18] [i_5] [i_5] [i_5])))));
                            var_70 = ((/* implicit */unsigned long long int) min((var_70), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (short)16555)))))));
                        }
                    } 
                } 
                var_71 = ((/* implicit */_Bool) (-(arr_26 [i_5] [i_5] [i_27] [11ULL])));
                /* LoopNest 2 */
                for (short i_35 = 0; i_35 < 25; i_35 += 1) 
                {
                    for (unsigned char i_36 = 1; i_36 < 23; i_36 += 3) 
                    {
                        {
                            arr_108 [i_35] [i_27] = ((/* implicit */long long int) (unsigned char)255);
                            var_72 = ((/* implicit */unsigned int) max((var_72), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18213)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)26)))))));
                            var_73 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) (unsigned char)29))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_97 [(signed char)22])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (short)32763)))))));
                        }
                    } 
                } 
                var_74 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8732044836030471514LL)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (signed char)37)))))));
                var_75 = (-(((/* implicit */int) (signed char)126)));
            }
            for (unsigned int i_37 = 1; i_37 < 24; i_37 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_38 = 0; i_38 < 25; i_38 += 3) 
                {
                    for (unsigned int i_39 = 4; i_39 < 23; i_39 += 3) 
                    {
                        {
                            var_76 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_39 + 1] [16ULL] [2U] [16ULL] [i_5])) ? (((/* implicit */unsigned long long int) var_1)) : (15579870972415539466ULL)));
                            var_77 = ((/* implicit */int) ((_Bool) (unsigned short)59973));
                            var_78 = ((/* implicit */unsigned short) min((var_78), (((/* implicit */unsigned short) arr_33 [i_37] [i_37 + 1] [i_39 + 1] [i_39 + 2]))));
                            var_79 = ((/* implicit */_Bool) arr_99 [i_5] [i_5] [(unsigned short)21] [i_39]);
                        }
                    } 
                } 
                arr_117 [i_5] [i_27] [20LL] [i_37] &= (-(((unsigned int) arr_17 [2ULL] [i_27])));
            }
            for (unsigned int i_40 = 1; i_40 < 24; i_40 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_41 = 0; i_41 < 25; i_41 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_42 = 3; i_42 < 24; i_42 += 2) 
                    {
                        var_80 = 3596992051U;
                        var_81 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (-13) : (((/* implicit */int) (signed char)-68)))));
                        var_82 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3445852692U)) ? (((361420449U) ^ (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) 1821568710))));
                    }
                    for (unsigned int i_43 = 0; i_43 < 25; i_43 += 3) 
                    {
                        var_83 *= ((/* implicit */_Bool) ((signed char) 2480901641789353505ULL));
                        var_84 = (~(54675483U));
                    }
                    var_85 ^= ((/* implicit */unsigned short) ((unsigned long long int) 17141807832051258736ULL));
                }
                arr_131 [i_27] [i_40] = ((/* implicit */int) (~(((unsigned int) 3596992059U))));
                var_86 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_5] [(unsigned short)13] [i_5] [i_40])) + (((/* implicit */int) arr_78 [i_40 - 1]))));
            }
            for (long long int i_44 = 1; i_44 < 24; i_44 += 3) 
            {
                var_87 = ((/* implicit */int) var_0);
                var_88 = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)55));
                /* LoopNest 2 */
                for (unsigned int i_45 = 0; i_45 < 25; i_45 += 1) 
                {
                    for (unsigned short i_46 = 0; i_46 < 25; i_46 += 1) 
                    {
                        {
                            var_89 = ((/* implicit */int) var_1);
                            var_90 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3596992030U)) ? (((/* implicit */int) (short)-19348)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (20U))))));
                            var_91 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_44 - 1] [i_44 + 1] [12ULL] [i_44 - 1] [i_44 + 1])) ? (arr_35 [i_44 + 1] [i_44 - 1] [i_44] [i_44 - 1] [i_44]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            var_92 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_44 - 1] [i_44 + 1] [i_44 - 1] [i_44 + 1] [i_44 + 1]))) <= ((-(15579870972415539512ULL)))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_47 = 0; i_47 < 25; i_47 += 1) 
        {
            var_93 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)55)) ? (17713663991685777529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) - (((((/* implicit */_Bool) 1866706955U)) ? (17377850054673038115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_94 = ((/* implicit */unsigned long long int) ((short) 4294967289U));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_48 = 0; i_48 < 21; i_48 += 2) 
    {
        var_95 = ((/* implicit */unsigned long long int) min((var_95), (((/* implicit */unsigned long long int) arr_91 [i_48] [i_48] [i_48] [i_48] [(unsigned short)24]))));
        var_96 = ((/* implicit */short) (unsigned char)85);
    }
}
