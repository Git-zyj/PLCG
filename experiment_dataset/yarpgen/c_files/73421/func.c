/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73421
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [8])) ? (0) : (((/* implicit */int) var_0))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_0 + 3] [i_1] [i_1] = ((/* implicit */int) ((-3375133362916842129LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3])))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_20 |= ((/* implicit */_Bool) arr_10 [i_1] [i_0 + 3]);
                arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_19);
            }
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                arr_17 [i_0] [(signed char)5] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [(short)1]))) : (var_7))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_3]))) & (4010429057U)))));
                arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32178))))) : (arr_10 [i_1] [i_3])));
                arr_19 [i_1] [i_1] [i_3 + 2] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) arr_1 [i_1] [i_0])))) << (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) arr_9 [4U] [i_1] [i_1] [i_3])) : (((/* implicit */int) var_16))))));
                arr_20 [i_0] [i_1] [i_1] [i_3] = ((short) ((((/* implicit */_Bool) (unsigned short)36043)) ? (((/* implicit */unsigned int) 1024)) : (1739830185U)));
            }
            for (int i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                arr_24 [8U] [8U] &= ((/* implicit */unsigned char) var_14);
                arr_25 [i_1] [(_Bool)1] [i_4 - 2] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_4 + 2] [i_1] [i_1] [i_0 - 1])) - (((/* implicit */int) (!((_Bool)1))))));
            }
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(26U))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_38 [i_8] [(unsigned char)3] [i_5] [i_5] [i_0 + 2] [i_0 + 2] = ((/* implicit */_Bool) (-(arr_22 [i_5] [i_5] [i_5])));
                            var_22 ^= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_8 [i_5] [i_0] [i_0] [i_0 + 2]))));
        }
        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_6 [i_0 + 3])) : (((/* implicit */int) var_16))));
        arr_39 [i_0] = ((/* implicit */short) ((long long int) (((_Bool)1) && ((_Bool)1))));
    }
    for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775808ULL))))) == (arr_40 [i_9 + 3]))))));
        var_26 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 12633640576195427585ULL)) ? (((((/* implicit */_Bool) 1912439073)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) ((_Bool) (signed char)38)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            arr_46 [i_9 - 2] [i_9 + 4] = ((/* implicit */signed char) ((9223372036854775807ULL) - (((/* implicit */unsigned long long int) 4010429039U))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                for (unsigned int i_12 = 3; i_12 < 17; i_12 += 2) 
                {
                    {
                        arr_51 [i_12] [(unsigned char)4] [i_10] [i_9] [i_9] = ((/* implicit */int) (short)-890);
                        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10256))) * (524287U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_9 + 2] [i_9 + 2]))) : (((((/* implicit */unsigned long long int) var_4)) * (arr_40 [i_9])))));
                    }
                } 
            } 
            var_28 = ((/* implicit */short) arr_41 [i_9]);
            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_42 [i_9 + 4]))));
            arr_52 [i_9] [i_10] = ((/* implicit */_Bool) arr_48 [i_9] [i_10] [i_10]);
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_45 [i_9 + 4])) : (((/* implicit */int) ((4053530847662682749LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-101)))))));
            var_31 = ((/* implicit */short) (~(var_11)));
        }
        for (short i_14 = 2; i_14 < 17; i_14 += 3) 
        {
            arr_58 [i_14] [i_14] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775804ULL)) ? (10U) : (284538238U)))) : (max((((/* implicit */unsigned long long int) arr_56 [i_14] [i_14 - 1] [(short)14])), (arr_40 [i_14]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)137)), (10U)))) ? (min((arr_41 [i_14]), (((/* implicit */long long int) (short)-32767)))) : ((-(-35184372088832LL))))))));
            arr_59 [i_9] [i_14] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_43 [i_9] [3ULL] [i_14]))))));
            arr_60 [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (9223372036854775823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)202)), ((short)32767))))))))));
            var_32 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 9223372036854775787ULL)) ? (((/* implicit */int) (unsigned short)16491)) : (((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [(unsigned short)2]))))) ? (((/* implicit */int) ((_Bool) arr_47 [i_9]))) : (((/* implicit */int) arr_42 [i_14 - 1]))))));
            arr_61 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) -8518957165710898819LL)) ? (((((/* implicit */_Bool) var_18)) ? (11549924664431043320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))))) : (((/* implicit */unsigned long long int) arr_57 [i_14] [i_9] [i_9]))));
        }
        for (short i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18036)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_14))) ^ (((/* implicit */int) ((signed char) arr_42 [i_9])))));
            /* LoopSeq 1 */
            for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                var_35 *= max((6896819409278508309ULL), (((/* implicit */unsigned long long int) (signed char)-68)));
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 15; i_17 += 1) 
                {
                    for (int i_18 = 2; i_18 < 16; i_18 += 1) 
                    {
                        {
                            var_36 *= ((/* implicit */_Bool) (+(((((/* implicit */int) arr_71 [i_18] [i_18] [i_18 - 2] [(short)17] [i_18] [i_17 + 1])) % (((/* implicit */int) arr_71 [i_18] [i_17 + 1] [i_18 - 2] [i_18 + 1] [i_18 - 1] [i_17 + 1]))))));
                            var_37 -= ((/* implicit */_Bool) ((((arr_71 [8ULL] [8ULL] [9U] [i_17 + 3] [i_9 + 1] [i_9 + 1]) ? (((/* implicit */int) arr_71 [i_18] [i_18 - 2] [i_18] [i_17 + 3] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_71 [(short)14] [i_17 + 3] [(short)14] [i_17 + 3] [i_15] [i_9 + 1])))) + (((arr_71 [3] [i_18] [(_Bool)1] [i_17 + 3] [i_17] [i_9 + 1]) ? (-1197916114) : (((/* implicit */int) var_1))))));
                            arr_73 [i_16] [i_17] [i_16] [i_17] [i_9] = ((2) % (((/* implicit */int) arr_70 [i_18] [i_18 - 1] [(short)0] [(signed char)5])));
                        }
                    } 
                } 
                var_38 += ((((/* implicit */_Bool) 319538836U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775793ULL));
                arr_74 [i_9] [i_9] [i_15] [i_16] = 1197916116;
            }
        }
    }
    /* vectorizable */
    for (short i_19 = 3; i_19 < 15; i_19 += 3) 
    {
        var_39 = ((/* implicit */unsigned int) ((unsigned long long int) 284538256U));
        arr_77 [15] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) < (11549924664431043320ULL))))) % (((((/* implicit */_Bool) (short)19964)) ? (11549924664431043320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_19] [(short)10] [i_19])))))));
    }
    for (signed char i_20 = 0; i_20 < 14; i_20 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 14; i_21 += 2) 
        {
            var_40 |= ((/* implicit */unsigned short) ((_Bool) (signed char)-123));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (short)14389)) ? (((/* implicit */long long int) 284538256U)) : (arr_81 [i_21])));
        }
        for (unsigned int i_22 = 4; i_22 < 11; i_22 += 3) 
        {
            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) -1197916104)) ? (284538243U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
            var_43 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)18035)) | (((/* implicit */int) (unsigned short)0)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)24647))))) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (_Bool)1))))));
            arr_88 [i_22] = ((/* implicit */int) max((((4010429024U) + (284538238U))), (((/* implicit */unsigned int) arr_66 [i_22]))));
            var_44 = ((/* implicit */long long int) (((!(arr_53 [i_22 + 3] [i_22] [i_22 - 1]))) ? (((9223372036854775827ULL) & (((((/* implicit */_Bool) arr_85 [i_22] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32645))) : (8ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (short)18052))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)22)), (0LL)))) : (arr_69 [i_22 + 2] [i_22 - 3] [i_22 + 2] [i_22 + 1] [i_22 - 2] [i_22])))));
        }
        arr_89 [i_20] = ((/* implicit */unsigned long long int) ((int) (unsigned short)2));
    }
    var_45 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (319538859U)))) ? (((((/* implicit */_Bool) 3975428436U)) ? (((/* implicit */int) (short)-18023)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((var_0) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) var_0))))))) | (min((max((((/* implicit */unsigned int) (unsigned short)0)), (var_7))), (((/* implicit */unsigned int) var_12))))));
    /* LoopNest 2 */
    for (short i_23 = 0; i_23 < 11; i_23 += 4) 
    {
        for (unsigned short i_24 = 0; i_24 < 11; i_24 += 2) 
        {
            {
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18052))) * (2309731195U)))) > (((((/* implicit */_Bool) (+(-6978469071771836979LL)))) ? (((/* implicit */unsigned long long int) -1)) : (((16740318750175566689ULL) - (((/* implicit */unsigned long long int) 2365885507U)))))))))));
                arr_96 [(short)10] [3U] = ((/* implicit */short) (!(((((((/* implicit */int) var_9)) == (((/* implicit */int) arr_63 [i_23])))) && (((_Bool) arr_83 [i_24] [i_23]))))));
            }
        } 
    } 
}
