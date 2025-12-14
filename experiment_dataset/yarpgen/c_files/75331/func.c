/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75331
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
    var_15 = ((/* implicit */short) ((((((/* implicit */int) var_6)) & (((((/* implicit */int) (signed char)43)) - (((/* implicit */int) var_6)))))) & (((/* implicit */int) ((short) var_6)))));
    var_16 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_1] [i_2] [i_1] [i_1] = (!(((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)9)))) - (((/* implicit */int) max((((/* implicit */unsigned short) (short)127)), ((unsigned short)4092))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) (short)-27522));
                    arr_8 [i_2] [i_1] = (+(min((((int) var_1)), (((1032192) & (1032192))))));
                    var_17 = ((/* implicit */long long int) (-(9399464773234646923ULL)));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_3 - 1] [i_1] [i_3])) * (((/* implicit */int) arr_11 [i_0]))));
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) (~(982131054)));
                }
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))), (((max((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])), (-982131078))) ^ (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_4])))))))))));
                    arr_16 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (min((var_1), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16471345030933937854ULL))))))))) ? (((((/* implicit */_Bool) 18446743936270598144ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64994)))) : (((min((-1032211), (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_0])))) & (((/* implicit */int) min((arr_14 [i_0] [i_1] [i_4] [i_0]), (((/* implicit */short) var_10)))))))));
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    arr_20 [i_1] = ((((((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_5]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [2ULL])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_5] [i_0])) : (-769522649)))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */short) min((min((min((((/* implicit */unsigned long long int) -982131054)), (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0]) ? (((/* implicit */int) arr_24 [i_0] [i_5])) : (arr_0 [i_0] [i_6 - 1]))))));
                                arr_27 [i_0] [i_5] [i_5] [i_1] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1152780767118491648ULL))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((_Bool) -982131052));
                            arr_34 [9ULL] [i_1] [i_1] [i_5] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [6U] [i_1] [i_5] [i_5])) ^ (((int) (unsigned short)31549))));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_17 [i_9] [i_5])))));
                            var_23 ^= ((/* implicit */unsigned short) 9399464773234646923ULL);
                            var_24 = ((/* implicit */int) (short)31740);
                        }
                        for (unsigned short i_10 = 3; i_10 < 9; i_10 += 1) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */short) max(((((~(-982131054))) - (((/* implicit */int) arr_5 [i_5] [i_10 + 2] [i_10])))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-23106)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(unsigned char)9] [i_5] [i_5])) ? (10735769674734405895ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0])))))))))));
                            var_26 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)-93)) ? (137438953472ULL) : (((/* implicit */unsigned long long int) -7245308294055114125LL)))) - (min((((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_5] [i_1])), (6553346693336286404ULL))))) & (min((((/* implicit */unsigned long long int) ((7593615089499929278LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-109)))))), (((((/* implicit */_Bool) 9399464773234646923ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [5] [i_1] [i_5] [i_8]))) : (7710974398975145721ULL)))))));
                            arr_38 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((unsigned int) ((_Bool) (signed char)109))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_5] [i_0] [i_10 - 1] [i_8] [i_5])) & (((/* implicit */int) arr_31 [i_0] [i_1] [i_10 + 3] [i_10 + 3] [(signed char)2])))))));
                            var_27 = ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)82)) ^ (((/* implicit */int) arr_28 [i_1] [i_5] [i_8 - 1] [i_1])))));
                            arr_39 [i_10] [i_8 + 1] [i_0] [i_0] [i_0] &= ((/* implicit */int) var_14);
                        }
                        for (unsigned short i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
                        {
                            arr_43 [i_8] [i_8] [i_11] [i_8 + 2] [i_1] [(unsigned char)6] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_28 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_1])) - (((/* implicit */int) min(((short)-8746), (((/* implicit */short) arr_23 [i_0] [i_1] [i_5] [i_5] [(unsigned short)3] [i_11 - 1])))))))));
                            var_28 = ((((/* implicit */_Bool) ((((int) (signed char)-98)) - (((/* implicit */int) arr_32 [i_8 + 1] [i_8] [i_8] [i_11 - 1] [i_11 + 3]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (7710974398975145721ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24436)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_5] [i_11])) : (((/* implicit */int) (short)-24433))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-98)), (arr_5 [i_1] [i_1] [i_1])))) : (((((/* implicit */int) arr_9 [i_0] [i_1] [5ULL] [(unsigned short)5])) & (((/* implicit */int) var_9))))))));
                            var_29 -= ((/* implicit */long long int) ((_Bool) min((((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_8 + 2] [i_11]))))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned char) arr_23 [i_8 + 2] [i_1] [i_11] [i_8 + 2] [i_0] [(unsigned char)11]))))))));
                            arr_44 [i_0] [i_1] [i_1] [i_1] [(signed char)1] [i_0] [i_11] = ((((((/* implicit */int) max((((/* implicit */short) var_12)), ((short)32767)))) << (((/* implicit */int) (signed char)7)))) & (((((((/* implicit */int) arr_22 [i_0] [i_1])) | (((/* implicit */int) arr_1 [i_8])))) ^ (((((/* implicit */int) arr_25 [7U] [i_1])) & (var_8))))));
                        }
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)78))))), (((((18446744073709551599ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)103))))))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) ((int) max((arr_4 [i_1] [i_5] [i_8 + 2] [i_12]), (((/* implicit */short) arr_25 [i_0] [5ULL])))));
                            arr_48 [i_0] [i_0] [i_0] [i_1] [i_12] [i_12] [i_0] = ((/* implicit */unsigned char) 18446743936270598144ULL);
                            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) 982131054)) ^ (1152921500311879680LL)));
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_5] |= ((/* implicit */short) arr_52 [3ULL] [(short)4] [i_13]);
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13596)) ? (65011712) : (((int) (unsigned char)126))));
                            arr_54 [i_0] [i_1] [i_1] [i_5] [i_8] [i_13] [i_13] = ((/* implicit */_Bool) (-(((int) (+(((/* implicit */int) (short)13594)))))));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (((+(arr_3 [i_8] [i_8 - 1] [i_8]))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_1] [(short)2] [(signed char)0] [i_8 - 1] [i_13]))))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_52 [i_0] [i_0] [i_0])))))))));
                        }
                        for (unsigned long long int i_14 = 4; i_14 < 11; i_14 += 3) 
                        {
                            arr_58 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1])), (((((/* implicit */_Bool) max((((/* implicit */int) arr_56 [3U] [3U] [i_1] [3U] [3U] [3U] [i_14])), (-1032192)))) ? (((/* implicit */unsigned long long int) (~(-1932273948)))) : (((((/* implicit */unsigned long long int) -65011712)) & (6244800703199793250ULL)))))));
                            arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) -512021909);
                            arr_60 [i_0] [i_0] [i_5] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */long long int) 2186375718U)) - (arr_26 [i_0] [i_1] [i_5] [i_0] [i_5]))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_34 = max((-65011739), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53242))))) - (-1032192))));
                            arr_63 [i_0] [4] [i_5] [i_8 + 2] [i_5] [i_1] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_46 [i_0] [(short)7] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (947103264))))) ^ (min((((/* implicit */int) ((short) 1356118253))), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_14))))))));
                            var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((arr_46 [i_0] [i_0] [i_1] [i_0]) / (var_8)))))), (max((((5528797257529188451ULL) ^ (((/* implicit */unsigned long long int) 2740933449U)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_37 [i_1] [i_0] [i_1] [i_5] [i_5] [i_8] [i_1])))))));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (((-(((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)42010)))))) ^ (520662557))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
                        {
                            arr_66 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((var_5), (((/* implicit */unsigned short) var_12)))))) | ((((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (-1032210))) & (((((/* implicit */int) (_Bool)1)) | (arr_65 [i_1])))))));
                            arr_67 [i_0] [i_1] [i_5] [i_1] [i_0] [i_16] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_65 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (162860877U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)100)) - (((/* implicit */int) arr_45 [6] [6] [i_5] [(_Bool)1] [i_16]))))))))));
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_9);
                            var_37 ^= ((/* implicit */_Bool) 2936129238U);
                        }
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                        {
                            arr_71 [i_0] [i_1] [i_5] [i_5] &= 1554033860U;
                            arr_72 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_1]))))) & (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) var_0)) : (496U)))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (11516383713708652185ULL)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
                        {
                            arr_75 [i_1] = ((/* implicit */unsigned long long int) arr_47 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            arr_76 [i_0] [i_0] [i_5] [i_1] [i_18] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (_Bool)1))))) & (((unsigned long long int) var_9))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0])) - (-520662557)));
                        }
                    }
                }
                for (int i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
                {
                    arr_80 [i_0] [i_1] [i_19] = ((/* implicit */int) ((((((/* implicit */_Bool) ((1554033843U) - (((/* implicit */unsigned int) -922415304))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_19] [i_19] [i_0] [i_1] [i_0] [i_0] [5U]))) : (((((/* implicit */_Bool) arr_64 [i_0] [i_1] [i_1] [i_1] [i_19])) ? (((/* implicit */unsigned long long int) -4481056483685679935LL)) : (var_1))))) + (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) (signed char)109))))));
                    arr_81 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) - (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 947103264)))))) - (-4481056483685679935LL)))));
                    arr_82 [i_1] = ((/* implicit */short) min(((~((~(((/* implicit */int) var_3)))))), (((((((/* implicit */_Bool) -520662557)) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_0))) | (((/* implicit */int) var_3))))));
                }
                arr_83 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) 4132106422U)) / (-4320213900613228091LL)))) ? (((0LL) ^ (((/* implicit */long long int) 520662537)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))))) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)95)) ^ (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                arr_84 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_5))))));
                var_39 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
            }
        } 
    } 
}
