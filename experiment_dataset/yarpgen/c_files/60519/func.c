/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60519
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
    var_20 = var_1;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        var_21 *= ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) arr_1 [i_0 - 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 470683773505812980LL)) ? (((/* implicit */int) (unsigned short)56804)) : (((/* implicit */int) (signed char)-112))))));
        arr_2 [i_0 - 3] = ((/* implicit */int) (signed char)-10);
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        arr_6 [8ULL] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8730))));
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11333198278596129621ULL)) ? (((/* implicit */int) (unsigned short)62)) : (((/* implicit */int) (unsigned char)31))));
        arr_7 [i_1] = ((/* implicit */long long int) max((max((arr_3 [i_1 + 1]), (arr_3 [i_1 + 2]))), (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_18))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) (unsigned char)214)) || (((/* implicit */_Bool) (signed char)5)))), ((!(((/* implicit */_Bool) var_8)))))) ? (-6295054726610926308LL) : (max((max((((/* implicit */long long int) arr_3 [i_1 + 4])), (-2217980860786247418LL))), (((/* implicit */long long int) max((arr_5 [0]), (((/* implicit */int) (unsigned char)255))))))))))));
    }
    for (long long int i_2 = 3; i_2 < 24; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 + 1])) & (-242184261)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8712))) : (1729382256910270464LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-52)) * (((/* implicit */int) (unsigned short)19756)))))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (25ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_25 = ((/* implicit */signed char) (unsigned short)54780);
                    var_26 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)28672)) <= (((/* implicit */int) arr_9 [i_2 - 1]))))), (((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) (signed char)-48)))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 130944U)) ? (3) : (((/* implicit */int) (signed char)-31))));
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 3]);
        /* LoopSeq 2 */
        for (unsigned int i_5 = 2; i_5 < 24; i_5 += 3) 
        {
            var_29 = ((/* implicit */long long int) (unsigned short)6513);
            arr_17 [i_2 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 4125064064325532149ULL)) ? (((/* implicit */int) (unsigned short)56823)) : (((/* implicit */int) (unsigned short)50316))));
            arr_18 [i_2 - 3] [i_5 - 2] = ((/* implicit */unsigned int) arr_15 [i_2 - 2] [i_5 - 2]);
        }
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            arr_21 [(signed char)22] [(signed char)22] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)50316)), (9221444217907569880ULL)))) ? (max((((/* implicit */long long int) (short)24435)), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 3]))) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            arr_22 [2LL] [i_6] |= ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) | (((((/* implicit */_Bool) (short)-24450)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (17179869183ULL)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                arr_26 [i_2 - 1] [i_6] [i_6] = ((((/* implicit */_Bool) -15)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-47)) >= (((/* implicit */int) (short)-28672))))) : (((/* implicit */int) arr_16 [i_2 - 2])));
                arr_27 [i_2 - 1] [i_2 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 4294967288U)) : (6687381115574456202ULL)));
                var_30 |= ((/* implicit */signed char) ((unsigned long long int) (+(9955282836383714148ULL))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */int) arr_30 [i_6] [i_6] [i_7] [i_8] [i_7]);
                            var_32 |= ((/* implicit */unsigned long long int) arr_30 [(_Bool)1] [i_7] [i_7] [i_7] [i_7]);
                            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [i_7] [i_8] [i_9]))) : (576460752303422464ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((487139854) == (((/* implicit */int) var_4))))))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_14 [i_2 - 3])) : (((/* implicit */int) (signed char)42))));
                            var_35 *= ((/* implicit */unsigned char) ((arr_11 [i_6] [(short)6]) > (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_2 - 3] [i_2 + 1] [i_2 - 2])))));
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 1; i_10 < 23; i_10 += 3) 
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) + (max((max((11759362958135095413ULL), (((/* implicit */unsigned long long int) (unsigned short)50316)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_2 + 1] [i_2 + 1] [i_6] [i_10 + 1])))))))));
                /* LoopSeq 3 */
                for (long long int i_11 = 1; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_37 |= ((/* implicit */unsigned short) 36028797018832896LL);
                    arr_38 [i_6] = (~(((((((/* implicit */int) (signed char)-123)) == (((/* implicit */int) (signed char)84)))) ? (max((11333198278596129624ULL), (((/* implicit */unsigned long long int) (signed char)125)))) : (((/* implicit */unsigned long long int) -3440456288562596041LL)))));
                    var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned char)31))) / ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_10 - 1] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 - 2] [i_10 + 1]))))));
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) max((((/* implicit */signed char) max((((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47313))))), (((18446744073709551604ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10 - 1] [(_Bool)1])))))))), (var_18))))));
                    arr_39 [i_11 + 2] [i_6] [i_2 - 2] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_34 [i_2 - 3] [i_6] [i_11 + 1]))), (((/* implicit */unsigned long long int) max(((unsigned short)58921), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_37 [i_11 - 1] [i_10 - 1] [i_6] [i_2 - 2])), (((((/* implicit */_Bool) arr_8 [i_10 - 1] [i_11 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (2766545018295839832LL))))))));
                }
                for (long long int i_12 = 1; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    arr_43 [i_6] [i_6] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    var_40 |= ((/* implicit */int) 17445079842751044894ULL);
                    arr_44 [i_2 + 1] [i_2 - 3] [i_2 + 1] [(short)8] [i_2 - 1] &= ((/* implicit */signed char) 6687381115574456210ULL);
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)30057)))), (((((/* implicit */_Bool) 1537944233990199048LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))))))));
                }
                for (long long int i_13 = 1; i_13 < 22; i_13 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */int) arr_14 [i_10 - 1]);
                    var_43 = ((/* implicit */_Bool) 16934856526185369137ULL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        var_44 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)42)) : (((/* implicit */int) (_Bool)0))));
                        arr_50 [i_2 - 1] [i_6] [i_10 + 1] [i_13 + 2] [i_14] [i_10 + 2] [i_6] = ((/* implicit */unsigned int) 2147483647);
                        var_45 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_13 + 1] [(short)16] [i_14] [i_14] [i_14] [i_14]))));
                    }
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        arr_55 [i_6] [i_13 + 2] [i_13 + 1] [i_13 + 2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -2018609514166258053LL)), (var_12)));
                        arr_56 [i_2 + 1] [i_10 + 1] [i_13 + 3] [8] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((signed char)108), ((signed char)80)))) ? (((/* implicit */int) (unsigned short)45816)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4435483557692411856ULL)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5558783767341636676LL)) ? (67108863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))))) ? (4539244577146089142ULL) : (0ULL)))));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 806324099288336918ULL))) <= (((/* implicit */int) max((((/* implicit */short) arr_46 [i_6] [i_10 - 1] [i_15] [i_6] [i_15])), (arr_25 [i_6] [i_10 - 1] [i_10 - 1]))))));
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (((11ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104)))))))) ? (((max((6ULL), (((/* implicit */unsigned long long int) var_19)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_46 [i_2 - 3] [i_6] [i_10 + 1] [i_6] [i_15]), ((signed char)125))))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4486)))))));
                    }
                }
            }
            for (unsigned short i_16 = 2; i_16 < 24; i_16 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    var_48 += ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) > (14321680009384019473ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)7717))))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))) : (8687262945051354158ULL)))));
                    arr_62 [16U] [i_17] |= ((/* implicit */int) ((long long int) 1352008032));
                    var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 2093421716870568646ULL))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) arr_16 [i_2 + 1])))))));
                }
                var_50 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_28 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 3])) ? (((/* implicit */unsigned long long int) (+(-6313582506127409060LL)))) : (max((var_5), (((/* implicit */unsigned long long int) 12U))))))));
            }
            for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                arr_67 [i_6] [i_2 - 2] [i_6] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((0ULL) / (max((((/* implicit */unsigned long long int) 0)), (8687262945051354158ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) == (((((/* implicit */_Bool) 4706393691255781786ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50294))) : (8804388279703293031ULL)))))) : (((/* implicit */int) max((max((arr_8 [i_6] [i_18]), (var_14))), (((signed char) arr_10 [i_2 + 1] [i_2 - 2])))))));
                var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46992)) << (((((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) max((arr_48 [i_18] [i_18]), (((/* implicit */long long int) (unsigned char)20))))) : (max((13166697360123955659ULL), (((/* implicit */unsigned long long int) (signed char)-109)))))) - (6ULL)))));
            }
        }
    }
}
