/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96569
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16912))) & (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (short)-18276))));
            arr_6 [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) max((max(((short)-6), ((short)-6))), (arr_5 [13])))) + (2147483647))) << (((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)10677)) / (((/* implicit */int) (unsigned char)192)))))) - (55)))));
            var_18 = ((/* implicit */int) (((((~(var_8))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1]))))) <= (((/* implicit */long long int) ((/* implicit */int) (short)32187)))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_9 [i_2] = ((/* implicit */signed char) (~(var_13)));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (short)2874);
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((_Bool) (short)0)))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_13 [i_4] [i_4] [i_4] [8ULL] [(unsigned char)5]))));
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_22 = ((((((((/* implicit */_Bool) (signed char)-90)) ? (88817107111978382ULL) : (((/* implicit */unsigned long long int) var_3)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 18446744073709551602ULL)))))) ? (arr_8 [i_2] [i_2] [i_2]) : (((((/* implicit */_Bool) min((27ULL), (((/* implicit */unsigned long long int) (short)2874))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)19465)))));
                        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (13513385382110784325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5])))))), (max((((/* implicit */unsigned long long int) 2031004925532759822LL)), (67108863ULL)))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_0 - 1] [i_2] [i_2])), (((int) var_11)))))));
                        var_25 += ((/* implicit */unsigned char) (signed char)-118);
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)54859);
                        var_26 = ((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (var_10)));
                        var_27 = ((/* implicit */int) (-((-(min((((/* implicit */unsigned long long int) var_10)), (var_15)))))));
                        arr_23 [i_6] [0LL] [i_2] [i_1] [i_0 - 1] &= ((/* implicit */long long int) 13513385382110784325ULL);
                        var_28 = (+(min((((/* implicit */long long int) (short)7981)), (min((2305843009213693951LL), (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_6])))))));
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) arr_20 [i_0 - 1] [i_1] [(unsigned short)4] [i_0 - 1] [i_7]);
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        arr_30 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */long long int) ((unsigned int) (-(var_1))));
                        arr_31 [i_1] [i_7] [i_2] [i_7] [i_8] [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))) : (max((8ULL), (((/* implicit */unsigned long long int) (unsigned short)54859))))));
                        arr_32 [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) var_4);
                        var_30 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [i_1]))));
                    }
                    for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]), (max((var_3), (((/* implicit */long long int) var_12))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)231)) <= (((/* implicit */int) (unsigned char)24)))))) - (18446744073709551603ULL)))));
                        var_32 = ((/* implicit */long long int) min((var_32), (max(((~(var_3))), (((/* implicit */long long int) ((-1584170718) != (((/* implicit */int) (unsigned short)8191)))))))));
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_13)))));
                        var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32741))) ^ (33554431U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (short)-1))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 1610612736)) != (25ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [13ULL] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (1038936891220694562LL))))))) : ((+(((/* implicit */int) var_10))))));
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29411))) : (8540010732316306746ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (short)(-32767 - 1)))))) * (var_3)))))))));
                    }
                    var_37 += ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    var_38 += ((/* implicit */unsigned long long int) 1655953018U);
                }
            }
        }
        for (int i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
        {
            arr_42 [i_0] [i_11] [i_11] = ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21975)) & (((/* implicit */int) (short)-2874))))) - (((unsigned long long int) (unsigned short)25807))));
            /* LoopSeq 3 */
            for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        arr_50 [i_11] [i_13] = ((/* implicit */_Bool) ((((min((((/* implicit */long long int) arr_21 [i_0 - 1] [i_0 - 1] [i_0 + 1])), (var_8))) + (9223372036854775807LL))) << (((max((4294967295U), (((/* implicit */unsigned int) (short)32767)))) - (4294967295U)))));
                        var_39 = ((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        var_40 ^= ((/* implicit */_Bool) (+(var_1)));
                        arr_55 [i_13] [i_13] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) 2557966516U);
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44001)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) >= (((/* implicit */unsigned long long int) -1111470142)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (11675994381549367407ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((0U) >> (((((/* implicit */int) arr_10 [i_0] [i_12] [(unsigned char)7] [i_0])) + (63)))))) : (((long long int) arr_2 [i_0 + 1] [i_11]))))) : (((((/* implicit */_Bool) arr_36 [i_0 - 1] [i_13] [i_12] [i_12])) ? (var_15) : (var_15)))));
                        var_42 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-23141)) + (2147483647))) << (((((/* implicit */int) var_5)) - (223)))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (((/* implicit */long long int) 2639014277U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((-3468381825220368652LL) - (((/* implicit */long long int) -987186010))))))))));
                    }
                    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) 1655953018U)) && (((/* implicit */_Bool) (unsigned short)20550))));
                }
                for (short i_16 = 2; i_16 < 22; i_16 += 2) 
                {
                    var_44 = ((/* implicit */long long int) ((((int) (~(arr_34 [i_0 - 1] [i_0 - 1] [i_12] [i_16] [i_16])))) * (((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_45 -= ((/* implicit */short) ((_Bool) 2639014276U));
                        var_46 = ((/* implicit */long long int) max((max((min((3390953999607320736ULL), (((/* implicit */unsigned long long int) (unsigned char)240)))), ((~(var_14))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)6)))))));
                        var_47 ^= ((/* implicit */unsigned char) 847767222636071393LL);
                    }
                    for (long long int i_18 = 4; i_18 < 22; i_18 += 4) 
                    {
                        var_48 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_56 [(short)5] [i_0 + 1])) ? (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))))) : (1221320420U))));
                        var_49 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2996))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (427846143809980421LL))))), (((/* implicit */long long int) var_0))));
                    }
                    var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 562881233944576ULL)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)115)))))));
                    arr_64 [i_0 + 1] [7LL] [7LL] [7LL] [i_0] = ((/* implicit */long long int) (short)4096);
                }
                for (long long int i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */signed char) var_7)))))) + (((unsigned long long int) 5656020941215971279ULL))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16533)) ^ (((/* implicit */int) (short)-8335))))), (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_11)))))));
                    var_52 = -8392414611283559760LL;
                    var_53 = ((/* implicit */unsigned int) 2147483647);
                }
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    var_54 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (2147483635)))) << (((((((/* implicit */_Bool) arr_5 [i_20])) ? (min((((/* implicit */long long int) var_11)), (8210154728762898870LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (41808LL)))));
                    var_55 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_3 [i_20]) ? (arr_35 [16ULL] [i_11] [i_12] [i_20] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0LL)) - (18446744073709551603ULL)))))) ? ((+(((/* implicit */int) ((short) var_13))))) : (((/* implicit */int) arr_65 [i_11] [(unsigned short)17] [i_11] [i_0 - 1] [i_11] [i_20]))));
                    var_56 = ((/* implicit */unsigned long long int) var_8);
                }
                var_57 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) / (3838187575116205097ULL)))) ? (arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */int) arr_66 [i_0] [i_0 - 1] [i_0 - 1] [13LL])))));
            }
            for (unsigned int i_21 = 0; i_21 < 23; i_21 += 2) /* same iter space */
            {
                var_58 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) 427846143809980423LL)), (7486857121664287119ULL))), (max((13ULL), (((/* implicit */unsigned long long int) (short)32767))))));
                var_59 = ((/* implicit */short) ((2008322941U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13175))) >= (-4190408228168023484LL)))))));
                arr_73 [i_0] [13LL] [i_21] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)93))) ? (arr_18 [i_0] [i_0 - 1] [i_0] [i_0] [(unsigned char)4]) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_12))))))));
            }
            for (unsigned int i_22 = 0; i_22 < 23; i_22 += 2) /* same iter space */
            {
                var_60 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1538091053)) / (18446744073709551590ULL)));
                arr_77 [i_0 - 1] [i_11] [8LL] = ((unsigned char) (((!(((/* implicit */_Bool) (short)-1690)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_70 [i_0] [i_0] [6ULL])) : (((/* implicit */int) var_12))))) : (((long long int) (unsigned char)39))));
                var_61 = ((/* implicit */int) max((min((arr_66 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0]), (((/* implicit */unsigned short) arr_65 [5U] [i_11] [i_11] [i_11] [i_11] [(short)17])))), (((/* implicit */unsigned short) ((((/* implicit */int) (short)19086)) == (((/* implicit */int) var_12)))))));
                var_62 = ((/* implicit */_Bool) min((var_62), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_5 [i_0 - 1])) : ((-(((/* implicit */int) var_9))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) / (-93583999283071253LL))) : (max((((/* implicit */long long int) ((signed char) 0U))), (((((/* implicit */_Bool) arr_27 [i_22])) ? (var_8) : (var_3))))))))));
            }
        }
    }
    /* LoopSeq 1 */
    for (short i_23 = 0; i_23 < 15; i_23 += 3) 
    {
        arr_81 [i_23] = ((/* implicit */int) ((min((arr_52 [i_23] [i_23] [22] [20LL] [i_23]), (((/* implicit */long long int) (_Bool)1)))) % ((-9223372036854775807LL - 1LL))));
        var_63 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_23])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (min((7564193014263878059ULL), (arr_13 [21U] [i_23] [i_23] [i_23] [i_23]))))))));
        arr_82 [i_23] = ((((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (var_14))), (((1960757349) <= (((/* implicit */int) var_10)))))))) * (1125899906841600LL));
        var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_78 [i_23]))))) > ((+(var_14)))));
        var_65 = ((/* implicit */unsigned int) min(((-(12790723132493580329ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)77)) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((4128058429133676093ULL) >= (6814186682022048329ULL))))) : (max((((/* implicit */long long int) (short)-17548)), (-4105750448927073290LL))))))));
    }
}
