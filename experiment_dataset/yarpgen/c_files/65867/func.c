/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65867
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
    var_20 = ((/* implicit */unsigned long long int) var_10);
    var_21 = ((/* implicit */short) ((unsigned short) var_19));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [10]))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_2 [i_1]);
        var_23 += ((/* implicit */unsigned int) ((short) ((min((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_9)))) + (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_19)) : (arr_4 [i_1]))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_17)) <= (arr_0 [i_1 + 4] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) : (((((/* implicit */_Bool) (unsigned short)28672)) ? (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (arr_1 [i_1 + 2] [i_1])))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -839740354257581909LL)) ? (2024791087U) : (((/* implicit */unsigned int) arr_0 [i_2] [(short)0]))));
        var_25 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_9)) ? (6210565827851935176ULL) : (arr_1 [i_2] [i_2]))));
    }
    var_26 = ((/* implicit */unsigned char) ((_Bool) var_8));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    for (int i_6 = 4; i_6 < 8; i_6 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2265311716631817579ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12)))) || (((/* implicit */_Bool) -839740354257581890LL)))));
                            arr_20 [i_3] [i_4 + 1] [i_5] [i_4] [i_5 + 1] = ((/* implicit */long long int) ((unsigned short) ((short) arr_14 [i_3] [(unsigned short)2] [i_6])));
                            /* LoopSeq 2 */
                            for (int i_7 = 1; i_7 < 9; i_7 += 1) 
                            {
                                var_28 = ((/* implicit */short) var_15);
                                var_29 = ((/* implicit */long long int) var_5);
                                var_30 *= ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_22 [8ULL] [6] [i_5] [i_7 + 1] [i_4 - 1] [i_6 - 4] [i_7 + 1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            }
                            for (unsigned char i_8 = 2; i_8 < 6; i_8 += 4) 
                            {
                                var_31 = ((/* implicit */int) arr_5 [i_5] [i_5]);
                                arr_25 [i_3] [i_3] [i_8] [i_3] [6] [i_3] [i_3] &= ((/* implicit */unsigned int) ((int) 1614930898));
                            }
                            var_32 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) -674009896)) & (-1201574879524187601LL))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_9 = 2; i_9 < 7; i_9 += 3) 
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_23 [i_4] [i_4] [i_4] [i_4] [7LL])))) ? (arr_11 [0ULL] [i_4 + 1]) : ((+(((/* implicit */int) arr_16 [i_3] [i_3] [i_3])))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (signed char i_11 = 2; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_34 -= ((/* implicit */signed char) (-(var_6)));
                                var_35 ^= min(((-(((/* implicit */int) arr_29 [i_3] [(unsigned char)8] [i_10])))), (min((((((/* implicit */_Bool) arr_28 [(signed char)8] [(signed char)4] [i_10] [i_10])) ? (arr_17 [i_10] [i_4] [i_4]) : (var_9))), (((/* implicit */int) arr_29 [i_4 - 1] [i_4 - 1] [i_10])))));
                                var_36 ^= ((/* implicit */unsigned int) var_3);
                                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 839740354257581911LL)) ? (((/* implicit */int) min((arr_8 [i_4 - 1] [i_9 + 3]), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_10] [i_4])) && (((/* implicit */_Bool) arr_28 [i_3] [i_10] [i_4] [i_10])))))))) : (var_1)));
                                arr_35 [i_3] [i_4] [i_9] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) -1614930898)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_4])) && (((/* implicit */_Bool) arr_24 [i_11] [i_10] [i_9] [i_4] [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_11 - 1] [i_9 - 1])) ? (((long long int) var_1)) : (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [0LL] [i_4] [i_9] [i_9] [i_11]))))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */long long int) ((signed char) (short)-5590));
                }
                for (unsigned char i_12 = 2; i_12 < 8; i_12 += 2) 
                {
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) ((short) var_17))), (((((/* implicit */int) var_15)) - (var_6)))))))));
                    var_40 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_24 [i_3] [(signed char)5] [i_12 - 2] [i_3] [i_12])), (max((max((arr_26 [i_4]), (((/* implicit */long long int) 3749059376U)))), (((/* implicit */long long int) ((short) arr_7 [i_3])))))));
                }
                for (unsigned int i_13 = 3; i_13 < 9; i_13 += 2) 
                {
                    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8938756208486940637LL)) ? (-674009916) : (((/* implicit */int) (short)8925))))) ? (-4943616169279697205LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                    arr_41 [i_3] [(unsigned char)9] [i_4] [3LL] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) arr_39 [i_3] [i_3] [i_13 - 1]))), (((int) ((((/* implicit */_Bool) (unsigned char)155)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)7] [(signed char)7] [(signed char)7]))))))));
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        var_42 ^= ((/* implicit */unsigned char) min((((arr_42 [i_13 - 1] [i_13 + 1] [i_13] [4ULL] [i_13]) | (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_13] [i_13 + 1] [i_13]))))), (max((((/* implicit */long long int) 2058337465U)), (44712857345516343LL)))));
                        arr_44 [i_3] [i_4 + 1] [i_4] [3ULL] = ((/* implicit */unsigned long long int) 648153977);
                    }
                    for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_47 [7] [i_3] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */long long int) arr_1 [i_4 + 1] [i_4]);
                        /* LoopSeq 4 */
                        for (signed char i_16 = 1; i_16 < 9; i_16 += 1) 
                        {
                            arr_51 [i_4] [(unsigned char)5] [i_3] [i_3] [i_4] = ((/* implicit */short) arr_22 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_43 = ((/* implicit */long long int) ((int) max(((+(var_19))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29492)) ? (((/* implicit */int) (unsigned short)10442)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                        }
                        for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            var_44 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8698444588600990638ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (2270176209U)))) ? (min((var_16), (((/* implicit */long long int) -1531021452)))) : (((/* implicit */long long int) (-(arr_17 [i_15] [i_4 + 1] [i_17]))))))));
                            var_45 = ((/* implicit */signed char) (-(((((arr_7 [i_15]) ? (arr_33 [i_3] [i_3] [i_13 - 2] [i_3] [i_15] [i_17] [i_17]) : (var_9))) + (((/* implicit */int) arr_27 [i_4 + 1] [i_15] [i_4]))))));
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) 2899573607443570513LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((int) 2147483647)) : (((int) var_12)))))));
                            arr_55 [i_3] [i_3] [7LL] [i_15] [i_4] [8ULL] = ((((arr_10 [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_3] [2] [i_3] [i_13 - 1]))))) ^ (((/* implicit */unsigned long long int) var_9)));
                        }
                        for (signed char i_18 = 3; i_18 < 9; i_18 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_3] [3LL] [i_4]))));
                            var_48 = arr_38 [4] [8];
                        }
                        for (short i_19 = 0; i_19 < 10; i_19 += 4) 
                        {
                            var_49 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-22)) | (arr_13 [i_3] [i_15] [i_15])))) ? (((((/* implicit */int) arr_27 [i_4 - 1] [i_4] [i_19])) | (var_9))) : (((/* implicit */int) arr_52 [i_15] [(_Bool)1] [i_15] [i_15] [i_15]))))), (((((/* implicit */_Bool) -1956997948)) ? (6241400869151312436LL) : (-6241400869151312436LL))));
                            var_50 = ((/* implicit */unsigned char) ((int) ((short) arr_58 [i_4 - 1] [i_4 - 1] [(short)2] [i_4])));
                            arr_62 [i_4] = arr_18 [i_4] [i_4] [i_4] [i_4] [i_15] [i_19];
                            arr_63 [i_3] [i_4] [i_3] [i_13 - 3] [i_13 - 3] [i_4] [i_13 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_39 [9U] [9U] [i_19]), (((/* implicit */int) arr_19 [i_4]))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)569)))))) ? (max(((~(arr_26 [i_4]))), (((/* implicit */long long int) arr_8 [i_4 - 1] [i_13 - 3])))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_58 [i_3] [i_13] [i_3] [i_4])) | (var_6))) | (var_6))))));
                        }
                    }
                    for (short i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_4] [i_4 + 1] [i_13] [i_13 - 2] [i_4])) ? (var_19) : (((/* implicit */unsigned int) (+(-1614930898)))))))));
                        var_52 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)49152)))))), (max((((/* implicit */long long int) 203832409)), (-839740354257581900LL)))));
                        var_53 = ((/* implicit */unsigned short) var_7);
                    }
                    for (unsigned short i_21 = 4; i_21 < 9; i_21 += 2) 
                    {
                        arr_68 [i_3] [i_4] = ((/* implicit */unsigned short) min((((long long int) arr_15 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_4])), (((/* implicit */long long int) ((short) arr_15 [i_13] [i_13 - 2] [i_13 - 2] [i_4])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            var_54 = ((unsigned char) (~(min((((/* implicit */long long int) var_8)), (arr_48 [i_3] [i_21 - 1] [i_4] [i_4] [i_22] [i_4 - 1] [i_21 - 4])))));
                            var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_3] [i_3] [(unsigned short)3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_57 [(signed char)3] [i_4 + 1] [(unsigned short)4] [i_21 - 2] [i_22] [i_22])))) : (max((var_10), (((/* implicit */long long int) (unsigned char)250))))))) ? (((int) (-(((/* implicit */int) (unsigned short)16))))) : (max((var_6), (((/* implicit */int) ((unsigned char) var_8)))))));
                        }
                        for (unsigned char i_23 = 2; i_23 < 9; i_23 += 2) 
                        {
                            var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((6241400869151312416LL), (((/* implicit */long long int) (short)0))))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) var_6))));
                            arr_74 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_21] [i_21] [i_23 - 1] [i_21]))));
                        }
                        var_57 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_13] [i_13])) : (((/* implicit */int) var_17))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1752008007)) - (6241400869151312436LL))))));
                    }
                }
            }
        } 
    } 
}
