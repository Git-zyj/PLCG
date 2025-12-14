/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82334
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
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 += ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] [i_0 + 1] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) arr_2 [i_0]))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_2 [(signed char)7]))))))) : ((~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)2)), (arr_1 [i_0]))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) 6959820477918365299LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (14ULL)))))) ? (min((((/* implicit */unsigned long long int) 1518516405)), (18446744073709551601ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 1])))))));
        arr_5 [i_0 - 1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (short)8)) / (((((/* implicit */_Bool) (unsigned short)38298)) ? (((/* implicit */int) (unsigned short)12749)) : (((/* implicit */int) arr_1 [i_0 - 1]))))))));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) arr_6 [(signed char)13])))), (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65408)) ? ((+(((/* implicit */int) (unsigned short)38273)))) : ((+(((/* implicit */int) arr_6 [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 935399103356176486LL)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))))) ? (max((arr_7 [i_1] [i_1]), (arr_7 [i_1] [7LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (short)13539)) : (((/* implicit */int) (signed char)-79)))))))));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                arr_14 [i_2] [(signed char)4] [(signed char)4] [i_1] &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [(_Bool)1])), (-1008583711)))) & (min((((/* implicit */unsigned long long int) arr_9 [(unsigned char)2])), (arr_11 [i_1] [2] [i_1] [i_1]))))) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)192)) >> (0LL))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27217)) && (((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2] [i_1 + 1]))))))))));
                var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [14U] [i_1]))) : (771626268U))))))), (2087585483)));
            }
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                arr_18 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_7 [i_1] [i_2 + 2]) != (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_11 [3U] [i_1] [i_4] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30527)))))) : (((((/* implicit */_Bool) (short)30529)) ? (1073217536U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127))))))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [(unsigned short)23] [(signed char)9])) ? (arr_12 [18LL] [i_2 - 1] [i_4]) : (((((/* implicit */_Bool) arr_10 [(unsigned short)2] [i_2])) ? (arr_11 [i_4] [i_1] [i_1] [20ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_2] [i_1 - 1])))))))) ? (4063232ULL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [(unsigned short)21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1]))) : (771626250U)))) ? (max((((/* implicit */unsigned long long int) arr_6 [i_2 - 1])), (arr_7 [i_1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) -714268994476773054LL))))));
            }
            arr_19 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2839492750U)) ? (1220772844U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1])))))) : (arr_7 [i_1] [i_1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-969988249641805955LL), (((/* implicit */long long int) arr_15 [i_1 + 1] [i_2] [i_2 + 1])))))))))));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_22 [i_1] [6LL] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_5] [i_5]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 0U))));
                    arr_28 [22U] [i_5] [i_6] [(unsigned char)22] [(unsigned char)2] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_5] [i_6])) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_1]))))) <= (((((/* implicit */_Bool) arr_9 [i_6])) ? (arr_11 [i_7] [i_5] [i_5] [i_1]) : (((/* implicit */unsigned long long int) arr_17 [i_1 - 1] [i_1 - 1]))))));
                }
                for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_32 [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)4080)))) ? (arr_17 [i_6] [i_8]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_6] [i_1] [i_1] [i_1])))))));
                    var_21 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_8])) ? (9027680751026685273ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
                for (short i_9 = 2; i_9 < 21; i_9 += 4) 
                {
                    var_22 *= ((/* implicit */long long int) arr_27 [i_5] [i_5] [i_6]);
                    arr_36 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_24 [6ULL] [(signed char)7] [i_5] [i_1 + 1]);
                }
                /* LoopNest 2 */
                for (unsigned short i_10 = 4; i_10 < 23; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            arr_41 [20LL] [i_1] [i_10] [i_6] [i_1] [i_1 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_1])))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_11]))))))))));
                            arr_42 [i_1] [i_5] [i_6] [i_10 - 1] [i_11] [i_5] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1465825717642763461LL)) ? (((/* implicit */int) (short)13532)) : (((/* implicit */int) (unsigned short)38492))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_1 + 1] [(unsigned short)7] [i_6] [(unsigned short)7]))))) : (0U)));
                            arr_43 [i_1 + 1] [i_1] [i_6] [i_1 + 1] [i_11] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_1] [i_5] [i_1]))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) : (3523341046U)));
                        var_25 ^= ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_14] [6U] [6U] [i_1]))))), (max((((/* implicit */long long int) (signed char)-30)), (arr_48 [(unsigned short)20] [(unsigned short)20] [i_13] [i_14])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_1 + 1] [i_1 + 1] [i_13])) ? (((/* implicit */int) arr_46 [i_1] [i_12] [(short)14])) : (arr_35 [i_14])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))) : (16U)))) : (arr_12 [i_1] [i_12] [i_12]));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -5662135418177190127LL)) + (arr_50 [(unsigned short)18] [(unsigned short)18] [i_12] [(short)10])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)7605)))))) : (((arr_48 [(_Bool)1] [(unsigned short)0] [i_12] [(_Bool)1]) + (((/* implicit */long long int) 135626727U))))))))))));
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_57 [i_16] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 4159340558U);
                    arr_58 [i_1] [i_1] [i_12] [i_12] [i_1] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_6 [i_12])))), (((/* implicit */int) arr_10 [i_1 - 1] [i_1]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-32748)), (arr_54 [i_1] [i_1] [(short)8] [i_1] [i_16])))) ? (min((arr_7 [i_1] [(_Bool)1]), (arr_26 [i_1] [i_15] [i_15] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1 - 1] [i_1])) ? (arr_51 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))))) : (((((/* implicit */_Bool) 3510274609U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_1 + 1] [18] [i_1]))) : ((+(arr_50 [i_1] [i_15] [i_12] [i_1])))))));
                }
                var_27 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_25 [i_1] [i_1] [i_15] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_53 [14U] [i_1] [i_12] [i_15])), (-2090378303522271075LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(signed char)8] [(signed char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967284U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6216)) ? (2481013004U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39725)))))) : ((-(arr_7 [(unsigned short)0] [(unsigned short)0]))))) : (((((/* implicit */_Bool) ((arr_21 [(unsigned short)8] [4LL]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_15] [i_15] [(unsigned short)18] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_56 [i_1 + 1] [i_1] [i_12] [i_15] [10ULL])))) : ((+(arr_26 [i_1 - 1] [(unsigned char)20] [i_12] [i_1 - 1] [i_15])))))));
            }
        }
        for (short i_17 = 2; i_17 < 21; i_17 += 2) 
        {
            arr_62 [i_1] = ((/* implicit */long long int) (!((_Bool)1)));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_51 [i_17] [i_17] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_1] [i_1 + 1] [i_1]))) : (arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))) : (((/* implicit */unsigned long long int) arr_52 [i_17] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_34 [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) arr_53 [i_1] [i_17 + 2] [i_1] [i_1]))))) ? (arr_29 [i_1] [i_1] [i_1] [i_17] [i_17]) : (((/* implicit */long long int) (~(3542984551U))))))) : (((((/* implicit */_Bool) (-(arr_48 [i_1] [i_17] [i_17] [i_17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_17] [i_17] [i_1 - 1] [2]))) : (min((((/* implicit */unsigned long long int) (signed char)-9)), (arr_12 [i_1 - 1] [(unsigned short)18] [(unsigned short)18])))))));
        }
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned short)2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_1] [10U] [i_1] [i_1])) ? (((/* implicit */long long int) 12U)) : (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14159)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)122))))) * (min((((/* implicit */unsigned long long int) arr_8 [(signed char)22])), (arr_25 [i_1] [i_1 + 1] [i_1] [i_1]))))))))));
    }
    for (unsigned int i_18 = 1; i_18 < 9; i_18 += 2) 
    {
        var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((arr_40 [i_18] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 2] [i_18]), (arr_59 [i_18] [i_18 - 1] [i_18 + 2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_18] [i_18 + 2] [i_18]))) != (arr_11 [i_18] [i_18] [i_18] [i_18 + 2])))) : (((/* implicit */int) arr_59 [i_18] [i_18] [i_18 + 2]))))));
        arr_65 [0ULL] &= ((/* implicit */unsigned int) max((18446744073705488384ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((18446744073705488384ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (4294967295U)))))))));
    var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))) : (1U)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)12951))))))) : (((/* implicit */int) (short)-1570))));
    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)12963))))) ? (((var_6) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (unsigned short)4095)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)2172)))))))))));
}
