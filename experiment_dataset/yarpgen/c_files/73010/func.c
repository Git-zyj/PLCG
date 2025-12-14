/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73010
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
    var_20 = 13622123690696022069ULL;
    var_21 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16288566546492211225ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))))), (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0] [i_0]))))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)103)), ((short)-309)))), (arr_1 [i_0]))))));
        var_23 = ((/* implicit */signed char) max((arr_0 [(unsigned short)3] [i_0]), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] = ((/* implicit */int) var_16);
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (14476217734350785009ULL)))));
                        var_25 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)29347)), (max((arr_4 [i_1] [i_2] [i_3]), (((/* implicit */int) (unsigned short)29347))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)281)) ? (((/* implicit */int) var_10)) : (arr_4 [i_0] [i_1] [i_3])))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_4 [i_0] [i_2] [i_3])) : (var_11))) : (((/* implicit */long long int) max((var_12), (((/* implicit */int) arr_2 [(signed char)2])))))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_7 [i_3] [i_0])) <= (max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [i_3] [(signed char)8])))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (9154002949630770516LL)))) - (7724704369300167374ULL)));
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_28 += ((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [(short)6] [i_4] [i_4] [0])), (min((962984750), (((arr_4 [i_4] [i_4] [i_4]) + (((/* implicit */int) (unsigned short)3945))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 2) 
            {
                {
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_2 [i_5])) : (arr_9 [(signed char)4] [i_6 - 2] [i_4] [i_4] [i_4]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_30 -= ((/* implicit */unsigned long long int) arr_19 [i_7] [i_6] [10ULL] [i_6] [i_6] [10ULL]);
                        var_31 = ((/* implicit */unsigned char) max(((unsigned short)3945), (((/* implicit */unsigned short) (short)7168))));
                        var_32 |= ((/* implicit */_Bool) max((arr_15 [i_6] [i_5]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_4] [i_7])) >= (((/* implicit */int) max((((/* implicit */signed char) arr_20 [i_4] [i_6] [i_5] [i_6] [i_5] [i_7])), (arr_5 [i_6] [i_5] [i_6] [i_6])))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 9; i_8 += 3) 
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((((/* implicit */unsigned int) ((arr_4 [i_7] [(signed char)3] [i_4]) / (((/* implicit */int) var_3))))) + (3421690018U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_6 + 1])) || (((/* implicit */_Bool) max((arr_16 [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_6])))))))))));
                            var_34 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3692089831U)) ? (((((/* implicit */_Bool) (unsigned short)36188)) ? (15247148526477835097ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_6 + 3] [i_6] [i_8]))))) >> (((max((arr_16 [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_6] [i_6 + 3] [i_6])) ? (((/* implicit */int) arr_5 [i_6] [i_7] [i_5] [i_6])) : (962984750)))))) - (18446744073709551566ULL)))));
                            arr_24 [i_6] [i_7] [i_6] [i_5] [i_6] |= ((/* implicit */signed char) max(((unsigned short)29375), (((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1))))));
                            var_35 = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_6] [i_6] [i_4]);
                        }
                    }
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        for (int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */short) arr_32 [i_9] [i_9] [i_10] [i_9] [i_10]);
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) : (arr_30 [i_9] [i_9]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)117)) >> (((((/* implicit */int) (unsigned short)36159)) - (36135))))))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((max((((/* implicit */unsigned int) arr_31 [i_9] [i_10] [i_11] [i_12])), (((((/* implicit */_Bool) arr_25 [i_9])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))))))) << (((((/* implicit */int) (short)-3)) + (4))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_39 &= ((/* implicit */long long int) arr_31 [i_9] [i_10] [i_11] [i_13]);
                        var_40 |= ((((/* implicit */int) arr_26 [i_9])) % (((/* implicit */int) arr_36 [i_9] [i_10] [i_10] [i_10])));
                        var_41 = ((/* implicit */unsigned short) (short)7161);
                        arr_39 [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13300)) ? (((/* implicit */int) (unsigned char)152)) : (((((/* implicit */int) (unsigned short)36145)) % (((/* implicit */int) (unsigned char)117))))));
                    }
                    for (signed char i_14 = 2; i_14 < 22; i_14 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) (short)7161);
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_19)) ^ (max((max((((/* implicit */long long int) (short)-7156)), (arr_38 [i_11] [i_10]))), (((/* implicit */long long int) arr_31 [i_9] [i_9] [18LL] [i_9]))))));
                    }
                    var_44 += ((/* implicit */unsigned int) max((((((/* implicit */int) arr_26 [i_9])) & (((/* implicit */int) max((arr_42 [i_9]), (arr_42 [i_9])))))), (((/* implicit */int) ((((arr_30 [i_10] [i_10]) == (arr_37 [i_9] [i_10] [i_11] [i_11]))) && (((/* implicit */_Bool) arr_33 [8ULL] [i_10] [i_11] [i_10])))))));
                    /* LoopSeq 3 */
                    for (short i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_45 ^= max((((arr_44 [i_9] [i_10] [i_11] [i_15]) ? (((((/* implicit */_Bool) arr_27 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_40 [i_9] [(signed char)14] [(signed char)14] [i_15])) : (10108949813600832241ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_42 [i_15])), (arr_29 [i_15] [i_11] [(short)10]))))))), (min((((/* implicit */unsigned long long int) max((arr_38 [i_9] [i_10]), (((/* implicit */long long int) var_3))))), (((((/* implicit */_Bool) arr_40 [i_9] [i_10] [i_11] [(unsigned short)7])) ? (var_5) : (var_2))))));
                        var_46 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11292903775439345036ULL)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) arr_43 [i_9] [i_11] [i_11] [i_9]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_9] [i_11] [i_11] [i_15]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_4), (arr_38 [i_11] [(unsigned short)7])))) || (((/* implicit */_Bool) arr_36 [i_11] [i_10] [i_11] [i_15])))))));
                        arr_46 [i_10] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) arr_32 [i_9] [i_10] [i_11] [(short)1] [i_11]);
                        var_47 = ((/* implicit */unsigned char) arr_37 [i_11] [i_10] [i_11] [i_15]);
                        arr_47 [16LL] [i_9] [i_11] [i_9] = min(((unsigned char)162), (((/* implicit */unsigned char) (_Bool)1)));
                    }
                    /* vectorizable */
                    for (unsigned char i_16 = 2; i_16 < 21; i_16 += 3) 
                    {
                        var_48 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) arr_36 [i_9] [i_9] [(signed char)6] [i_16 - 2])) : (((/* implicit */int) arr_29 [i_9] [i_9] [i_9]))));
                        arr_50 [i_10] [i_10] [i_11] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [12] [22ULL] [i_10]))) + (arr_27 [i_16 + 3] [i_9]));
                    }
                    for (unsigned short i_17 = 1; i_17 < 23; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 2; i_18 < 23; i_18 += 2) 
                        {
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9] [i_18 + 1] [i_17 + 1] [i_17 - 1] [i_9])) ? (((/* implicit */int) arr_35 [i_18] [i_18 - 1] [i_17 + 1] [i_17] [i_18])) : (((/* implicit */int) arr_35 [i_9] [i_18 - 2] [i_17 + 1] [i_17 - 1] [i_18 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29380)) ? (((/* implicit */unsigned long long int) arr_40 [i_11] [i_17 + 1] [i_18 - 1] [i_18])) : (arr_37 [i_11] [i_17 - 1] [i_18 + 1] [i_18 + 1]))))));
                            arr_58 [i_11] [i_10] [i_11] [i_11] [i_18 - 2] [i_18 - 1] = ((/* implicit */_Bool) arr_52 [i_11] [i_10] [i_11] [i_10] [i_18] [i_11]);
                            arr_59 [i_11] [(unsigned short)10] [i_10] [i_11] [i_11] [i_17] [(unsigned short)10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9] [i_10] [(_Bool)1] [i_11] [i_18 + 1] [(short)17])) ? (max((var_2), (((/* implicit */unsigned long long int) (unsigned short)44731)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_18] [i_18 - 2] [i_11] [i_17 + 1] [i_18])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_18]))) : (arr_27 [i_11] [i_17]));
                            var_50 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_17 - 1] [i_17 - 1] [i_18 - 1])) ? (arr_30 [i_18 - 1] [i_17 - 1]) : (arr_52 [i_11] [i_18 - 1] [i_17 - 1] [i_11] [i_10] [i_11])))) ? (arr_52 [i_11] [i_18 - 2] [i_17 - 1] [i_17] [i_17] [i_11]) : (min((arr_52 [i_11] [i_18 - 2] [i_17 - 1] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_43 [i_18] [i_11] [i_11] [i_17]))))));
                        }
                        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((((/* implicit */_Bool) arr_43 [i_9] [i_9] [i_11] [i_17])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_9] [(signed char)20] [(signed char)20] [i_17])) + (((/* implicit */int) (unsigned short)36145))))) ? (1362782756775046857ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18270))) : (var_11)))))) : (((/* implicit */unsigned long long int) var_4))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        for (long long int i_20 = 0; i_20 < 24; i_20 += 2) 
                        {
                            {
                                var_52 = ((/* implicit */_Bool) arr_36 [i_11] [i_11] [i_11] [i_11]);
                                arr_65 [i_9] [i_11] [i_10] [i_11] [i_19] [i_19] [i_20] = ((((/* implicit */_Bool) 2601874753480142828LL)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned short)44730)));
                                var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (arr_55 [(unsigned char)22] [i_10] [i_10])))) ? (((((/* implicit */_Bool) (unsigned short)57811)) ? (((/* implicit */int) (unsigned short)29368)) : (((/* implicit */int) (short)18252)))) : (((/* implicit */int) arr_32 [i_9] [i_10] [i_11] [i_19] [i_20]))));
                                var_54 += ((/* implicit */signed char) arr_62 [i_9] [(short)15] [i_9] [i_19]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
