/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91761
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
    var_16 = ((/* implicit */_Bool) (unsigned char)246);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1708264085096179562LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((+(min((((/* implicit */long long int) var_15)), (var_2)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (var_14)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_2])))))))), (min((arr_7 [i_2 + 2] [7LL]), (arr_7 [i_2 - 1] [i_2 - 1])))));
            var_18 = arr_5 [i_2];
        }
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_14 [i_1] [(_Bool)1] = ((/* implicit */long long int) (+(arr_8 [(unsigned char)14])));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_3] [i_1]))))) ? (arr_13 [i_3] [i_1]) : (arr_8 [i_3])));
        }
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        arr_23 [i_1] [i_6] = ((/* implicit */_Bool) max((((((((/* implicit */int) arr_20 [i_1] [i_1] [i_5])) >= (((/* implicit */int) (signed char)(-127 - 1))))) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_5]))))))), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_4] [i_4] [i_5] [i_5] [i_6]))) / (3619459919U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_4] [i_4] [i_1] [i_6]))))))));
                        arr_24 [i_1] [(signed char)6] [(signed char)6] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    }
                } 
            } 
        } 
        arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)177)))) & (min((arr_5 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_15)))))))));
        arr_26 [i_1] [i_1] = ((/* implicit */long long int) max((((unsigned short) arr_19 [i_1])), (((/* implicit */unsigned short) ((unsigned char) 4373804644657013088LL)))));
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        arr_31 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7] [i_7])) || (((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_4)), (arr_20 [(signed char)13] [i_7] [i_7])))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_13))))));
        /* LoopSeq 4 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_36 [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) var_2);
            arr_37 [i_8] [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) ((487504472091996272LL) % (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)39432))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
        {
            arr_41 [i_7] [i_7] = ((/* implicit */unsigned int) var_9);
            arr_42 [i_7] [i_7] = ((/* implicit */unsigned char) arr_8 [i_7]);
            /* LoopSeq 1 */
            for (signed char i_10 = 1; i_10 < 10; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((((long long int) arr_21 [i_10 + 2] [i_10] [i_10 - 1] [i_12])), (((/* implicit */long long int) (~(675507370U))))));
                        var_21 = ((/* implicit */unsigned short) arr_39 [i_10 + 1] [i_10 + 1]);
                        arr_50 [i_7] [i_9] [i_10] [i_11] [i_9] [i_7] [i_12] = ((((/* implicit */_Bool) (signed char)-110)) ? (((((/* implicit */_Bool) min((arr_38 [i_7] [i_9] [i_10 + 1]), (((/* implicit */unsigned short) (unsigned char)255))))) ? (arr_0 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_44 [i_7] [i_7] [(unsigned short)1] [i_11])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (4018695714U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63338)))))) ? (((/* implicit */int) (unsigned short)27298)) : (((/* implicit */int) (unsigned short)63318))))));
                    }
                    arr_51 [i_10] [(signed char)2] [i_10] [i_7] [i_10] [i_10 + 3] = ((/* implicit */unsigned short) (_Bool)1);
                    var_22 = ((/* implicit */long long int) arr_9 [i_10 + 1] [i_10 + 1] [i_10 + 2]);
                    arr_52 [i_7] [(signed char)8] [i_7] [i_10 + 2] [i_11] = ((/* implicit */long long int) ((unsigned short) arr_10 [i_10 + 2] [i_10 - 1] [i_10 - 1]));
                }
                for (unsigned int i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)16179)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_9 [(signed char)15] [(unsigned short)7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_7] [i_13] [i_13] [i_14] [i_14]))) : (arr_5 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2238))) >= (-4636757285467891199LL)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))) : (var_11));
                        var_24 = ((/* implicit */signed char) 3880717906U);
                        var_25 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) var_2);
                        arr_64 [i_7] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7] [i_7] [i_10 + 2] [i_7]))) / (var_9))), (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_9] [i_9] [i_7])) * (((/* implicit */int) arr_45 [i_13])))))))) ? (min((arr_18 [i_10 + 3] [i_10 + 1] [i_10 - 1]), (((long long int) arr_61 [i_7] [i_9] [i_10] [i_7] [i_15])))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_27 = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2226))) : (4294967290U))) * (2616256984U))));
                        arr_65 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 401733752105412384LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (-846727935993309595LL)));
                    }
                    var_28 = ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */long long int) var_1)) > (arr_62 [i_7] [i_9] [i_10 - 1] [i_13 - 1] [(signed char)9]))))))) % (min((((/* implicit */long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_45 [i_9]))))), (max((arr_19 [i_10]), (((/* implicit */long long int) (unsigned short)2241)))))));
                }
                arr_66 [i_7] [i_9] [i_10] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 846727935993309568LL)) ? (((/* implicit */int) arr_34 [(signed char)0])) : (((/* implicit */int) arr_29 [i_7]))))));
                var_29 = ((/* implicit */long long int) (unsigned short)60310);
                arr_67 [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_54 [i_7] [i_9])) : (((/* implicit */int) arr_63 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)93))) : (min((arr_0 [i_7]), (((/* implicit */long long int) arr_63 [i_7]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-6287143106583527063LL) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_10 + 1] [i_10 + 2] [i_10 + 2]))) : (var_6))) : (((/* implicit */long long int) max((((unsigned int) arr_53 [i_7] [i_7] [i_7] [6LL] [i_10 + 2])), ((~(var_1))))))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) (!(arr_34 [i_7])))), (((((/* implicit */_Bool) arr_55 [i_16] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) arr_13 [i_7] [i_16])) : (4636757285467891198LL))))));
            var_31 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13043)) ? (((var_7) ? (((/* implicit */int) arr_63 [i_7])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_15), (arr_27 [i_7] [i_16]))))))), ((~(((((/* implicit */_Bool) (unsigned char)208)) ? (arr_49 [i_7] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
            arr_71 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (-6287143106583527072LL)));
        }
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-19)) || (((/* implicit */_Bool) (unsigned short)63296))))), (arr_49 [i_7] [i_17])))) ? (arr_0 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)0) && (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) min((arr_1 [i_7]), (((/* implicit */long long int) arr_57 [i_7] [i_17] [i_7] [i_7] [i_7] [i_17] [i_17])))))))))));
            /* LoopSeq 2 */
            for (unsigned char i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    for (unsigned int i_20 = 1; i_20 < 12; i_20 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) arr_0 [i_7]);
                            var_34 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_59 [i_7] [i_7] [i_7] [i_7] [i_7] [i_20 - 1] [i_7])) ? (6287143106583527074LL) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_7] [i_17] [i_18] [i_20 + 1] [i_20 - 1] [i_20 - 1] [(signed char)4]))))) & (((long long int) (unsigned char)215)))) > (max((arr_0 [i_7]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_19])))))))));
                            var_35 = ((/* implicit */signed char) arr_55 [i_20 - 1] [i_7] [i_7] [i_17]);
                        }
                    } 
                } 
                arr_82 [i_7] [i_7] [i_18] = ((/* implicit */unsigned short) ((arr_44 [i_7] [i_7] [i_18] [i_18]) - (((long long int) var_14))));
                /* LoopNest 2 */
                for (signed char i_21 = 4; i_21 < 11; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_90 [i_7] [i_17] [i_18] [i_22] = ((/* implicit */unsigned short) (signed char)118);
                            arr_91 [i_7] [i_18] [i_7] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) arr_59 [i_7] [i_7] [i_7] [i_18] [i_7] [i_21 - 2] [i_22]))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_54 [i_7] [i_7])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned short)52482))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_61 [i_7] [i_18] [i_18] [i_7] [i_18])) > (arr_2 [i_7])))) : ((~(((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) -6287143106583527072LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
                            arr_92 [i_7] [i_7] = min((min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2240))) >= (arr_0 [i_7])))), (((unsigned short) (unsigned short)7189)))), (arr_73 [i_7]));
                            var_36 = ((/* implicit */signed char) var_8);
                            arr_93 [i_7] [i_7] [i_18] [i_21 + 1] [i_7] [i_22] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned char) ((signed char) arr_89 [i_7] [i_7] [i_7] [i_7] [i_7]))), (arr_81 [(signed char)8] [i_21 - 2] [i_21] [i_7] [i_22])))), ((+(6287143106583527063LL)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_23 = 3; i_23 < 11; i_23 += 1) 
            {
                arr_96 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) -6287143106583527072LL);
                /* LoopSeq 1 */
                for (unsigned short i_24 = 0; i_24 < 13; i_24 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)40))));
                    var_38 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(arr_68 [i_7] [i_17] [8LL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_7] [i_17] [i_17] [i_17] [i_7] [i_23 - 2] [i_17]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_58 [i_7] [i_23]))) / (6287143106583527063LL))))), (min((((/* implicit */long long int) min((arr_58 [i_7] [i_17]), ((unsigned short)63310)))), (((((/* implicit */long long int) ((/* implicit */int) arr_98 [i_7] [i_23] [i_7] [i_7]))) / (var_6)))))));
                    arr_99 [i_7] = max((((/* implicit */unsigned short) arr_84 [3LL] [i_7] [i_7] [11LL])), (arr_78 [i_7] [i_17] [i_23 - 1] [i_7]));
                    var_39 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_77 [i_7] [i_23 + 1] [i_17] [i_23 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_7] [i_23 + 2] [i_23] [i_24]))) : (arr_62 [i_24] [i_23 - 3] [i_23 - 1] [i_24] [i_24]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)58352)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_7]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_7] [i_7] [i_23])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 3 */
                    for (long long int i_25 = 2; i_25 < 10; i_25 += 2) /* same iter space */
                    {
                        var_40 = ((unsigned short) ((((/* implicit */_Bool) arr_62 [i_25 - 2] [i_25] [i_23 + 1] [i_23 + 2] [i_23 + 2])) ? (arr_44 [i_24] [i_7] [i_7] [i_23 - 1]) : (arr_62 [i_25 + 2] [i_23 - 2] [i_23 - 2] [i_23] [i_23 + 1])));
                        arr_104 [i_7] [i_7] [i_7] [i_7] [i_25 - 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (var_9)));
                        var_41 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)47)))) ^ (((((/* implicit */int) arr_53 [i_7] [(unsigned short)5] [i_7] [i_7] [i_7])) & (((/* implicit */int) (unsigned char)255))))))) >= (-4636757285467891199LL)));
                        arr_105 [i_7] [(_Bool)1] [(_Bool)1] [i_25] = ((/* implicit */unsigned short) arr_7 [i_17] [i_25 + 2]);
                    }
                    for (long long int i_26 = 2; i_26 < 10; i_26 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) min((var_4), (var_4)))), (-6287143106583527086LL))) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        arr_109 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_23] [i_23] [i_23 - 2] [i_7])) ? (((/* implicit */int) arr_78 [i_17] [i_23] [i_23 - 1] [i_7])) : (((/* implicit */int) arr_78 [i_7] [i_17] [i_23 - 3] [i_7]))))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)210))) ? (((((-8100379752826523482LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_58 [i_7] [i_26])) - (15282))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58352))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        arr_110 [i_7] [1U] [i_23] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_100 [i_7] [i_23 + 1] [i_7] [i_23 - 3] [i_24] [i_24])) && (((/* implicit */_Bool) 2U))))), (max((((/* implicit */long long int) arr_100 [i_7] [i_23 + 1] [i_7] [i_26 - 2] [i_26 - 2] [i_26 + 1])), (var_11)))));
                        var_43 = ((/* implicit */unsigned short) ((long long int) max(((((_Bool)1) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned short)833)))), (((/* implicit */int) arr_85 [i_7] [(unsigned short)3] [i_23 + 1] [i_7] [i_26 + 1] [i_26])))));
                        var_44 = ((/* implicit */signed char) min((min((((arr_5 [i_26 - 1]) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned int) min((var_0), ((unsigned char)13)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
                    }
                    for (long long int i_27 = 2; i_27 < 11; i_27 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) var_6);
                        arr_114 [i_27] [i_27] [i_24] [i_7] [(signed char)8] [i_17] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_23] [(_Bool)1] [i_7]))));
                    }
                }
                arr_115 [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (-4636757285467891199LL) : (var_6)));
                arr_116 [i_7] [i_7] [i_23] [i_7] = (unsigned char)223;
            }
            var_46 = ((/* implicit */signed char) max((arr_113 [i_7] [i_7]), (((/* implicit */long long int) ((((/* implicit */_Bool) max((1124966212U), (((/* implicit */unsigned int) (unsigned short)2246))))) ? (max((2979545577U), (((/* implicit */unsigned int) arr_22 [i_17] [i_17] [i_7] [i_7] [i_7] [i_17])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7204))))))));
        }
    }
    var_47 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4296))) : (var_1)))) / (max((var_2), (((/* implicit */long long int) (unsigned short)2246))))))));
}
