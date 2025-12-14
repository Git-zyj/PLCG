/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58254
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
    var_14 = ((/* implicit */unsigned int) (((~(min((var_3), (((/* implicit */unsigned int) (unsigned short)33783)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((var_2) ? (((/* implicit */int) (unsigned short)31752)) : (((/* implicit */int) var_9))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) (~(((int) 4038659347U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0 - 1])) * (((/* implicit */int) ((signed char) arr_1 [i_0]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0]))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((unsigned int) min((((unsigned int) (signed char)-103)), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)127))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned short)55299)) << (((((/* implicit */int) arr_13 [(unsigned char)18] [i_2] [i_3] [i_3] [i_3])) - (75))))) >> (((((((/* implicit */_Bool) arr_14 [i_1] [(unsigned char)5] [i_3] [i_4])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_4] [i_1]))))) - (4294967294U))))) < (((/* implicit */int) ((unsigned char) (signed char)37)))));
                        var_18 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) -1076976473)) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_13 [i_4] [i_3] [i_3] [i_2] [i_1])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_15 [i_6] [i_5]);
            var_19 *= ((/* implicit */signed char) 9811901842244726326ULL);
            var_20 *= ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) arr_12 [i_5] [2U])))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_6] [i_5]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [(unsigned char)12] [i_5])) || (((/* implicit */_Bool) (unsigned short)33783))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2410556722U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5 - 1])))))));
        }
        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) 8849273367912010659ULL);
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_9 = 4; i_9 < 12; i_9 += 3) 
                {
                    var_22 = ((/* implicit */signed char) ((max((((/* implicit */int) arr_25 [i_5] [i_5] [i_5 - 2] [i_9])), (((((/* implicit */int) (signed char)-113)) / (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) arr_8 [i_5] [i_7] [i_8]))));
                    var_23 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))), (max((((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_8])), (var_5))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) -1710983058);
                        var_25 = ((/* implicit */unsigned short) max((var_25), (arr_6 [i_10 + 3] [i_9 + 3] [16U])));
                    }
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        var_26 += ((/* implicit */int) arr_12 [i_8] [i_11]);
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_30 [i_5 + 2] [i_9 + 2] [i_9 - 3])))) ? (arr_30 [i_5 + 2] [i_9 + 2] [i_9 - 3]) : (max((arr_30 [i_5 + 2] [i_9 + 2] [i_9 - 3]), (((/* implicit */int) (_Bool)1)))))))));
                        var_28 *= ((/* implicit */unsigned char) ((unsigned int) (((~(((/* implicit */int) arr_23 [10U] [i_7] [i_9])))) | (((/* implicit */int) ((signed char) (signed char)36))))));
                        var_29 = (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_7] [i_8] [8] [i_11]))))) ? (((((/* implicit */_Bool) 9811901842244726335ULL)) ? (3591517852U) : (1375296364U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_29 [i_5] [i_5] [i_8] [i_8] [i_9 - 2] [i_9] [i_5])))))));
                        var_30 = ((/* implicit */unsigned long long int) ((2288780774U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109)))));
                    }
                    var_31 = ((/* implicit */unsigned int) min((var_31), (1887586356U)));
                }
                for (int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_32 = ((/* implicit */_Bool) arr_24 [10] [4] [i_8] [i_12]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) arr_24 [i_5] [i_7] [i_5] [i_12]);
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-114)) ? (((unsigned int) arr_35 [i_5 + 2] [i_7] [i_8] [i_8] [i_7])) : (((/* implicit */unsigned int) ((int) arr_9 [i_5] [i_8] [i_13])))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_40 [i_8] [i_12] [i_8] [i_7] [i_8] = ((/* implicit */signed char) 2856202239U);
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((unsigned char) 3568758200U)))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        arr_44 [i_8] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_5]));
                        arr_45 [i_8] [i_15] = ((unsigned char) ((((/* implicit */int) arr_28 [i_5])) & (((/* implicit */int) arr_15 [i_7] [i_15]))));
                        var_36 = ((/* implicit */unsigned char) ((unsigned int) 2736903716U));
                    }
                    for (unsigned short i_16 = 4; i_16 < 15; i_16 += 4) 
                    {
                        arr_49 [i_5] [i_5] [i_7] [i_7] [i_8] [i_12] [i_7] = ((/* implicit */int) min(((-(((unsigned int) (unsigned char)212)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_30 [i_7] [i_8] [i_12])))) ? (((((/* implicit */int) arr_8 [(unsigned short)5] [i_8] [i_8])) & (((/* implicit */int) arr_34 [(unsigned short)6] [i_7] [i_12] [i_16])))) : (((/* implicit */int) arr_11 [i_8] [i_8])))))));
                        var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_2)), (505507492U)))))) ? (((/* implicit */int) arr_15 [i_5] [i_7])) : (((/* implicit */int) ((signed char) ((240184642U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_16] [i_7] [i_16] [i_7] [i_7])))))))));
                        arr_50 [i_5] [i_7] [i_8] [i_12] [i_8] [i_16] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
                        arr_51 [i_12] [i_8] [(unsigned short)10] = max((((/* implicit */unsigned int) min((((/* implicit */int) ((arr_20 [i_16] [(unsigned char)1] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_12] [i_8])))))), (((((/* implicit */_Bool) arr_17 [i_16])) ? (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)135))))))), ((-(arr_37 [i_5] [i_7] [(_Bool)1] [i_5] [i_7]))));
                        arr_52 [i_5] [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10071)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (unsigned short)32710))))));
                    }
                }
                for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    arr_55 [i_8] [i_8] = (unsigned short)39444;
                    arr_56 [i_8] [i_8] [i_8] = ((/* implicit */signed char) max(((unsigned char)255), ((unsigned char)147)));
                }
                for (signed char i_18 = 3; i_18 < 13; i_18 += 3) 
                {
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_20 [i_5 + 1] [i_5 + 2] [i_5 + 2]))))))));
                    var_39 *= var_5;
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_61 [i_5] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) 2008613777U)))));
                        var_40 = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)63758)) / (((/* implicit */int) (unsigned short)56046)))), (((/* implicit */int) ((((((/* implicit */int) var_11)) << (((((/* implicit */int) var_4)) - (229))))) > (((/* implicit */int) ((((/* implicit */unsigned int) var_7)) < (arr_24 [i_8] [7U] [i_8] [i_18])))))))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_64 [i_5] [i_7] [i_8] [i_18] [i_18 - 2] [i_7] [i_5 - 2]))))));
                        var_42 = ((/* implicit */unsigned char) arr_30 [i_5] [i_7] [i_5]);
                        arr_65 [i_8] [(signed char)6] [0U] [i_18] [i_20] = (((~((~(3782581400U))))) >> (((((((/* implicit */_Bool) (unsigned short)39444)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-39)))) - (245))));
                    }
                }
                var_43 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) (unsigned short)25136)))) * (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_43 [i_8] [i_7] [i_8] [i_8] [i_8])) : (((/* implicit */int) (unsigned short)210))))))));
            }
            for (signed char i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                var_44 *= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_42 [i_21] [12U] [i_5])), (arr_39 [8U] [8U] [i_21]))), ((((!(((/* implicit */_Bool) arr_27 [i_5] [i_21] [i_21] [i_21] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (((arr_46 [i_5] [i_5] [i_5] [i_5] [(unsigned short)14] [i_21] [i_5]) << (((arr_54 [i_5] [i_7] [i_21] [i_21]) - (1201379697U)))))))));
                var_45 = ((/* implicit */unsigned int) max((var_45), (((((/* implicit */_Bool) ((unsigned char) arr_63 [i_21] [8U] [i_7] [8U] [i_5]))) ? (((unsigned int) arr_64 [i_5] [i_5] [i_21] [(unsigned short)6] [i_7] [i_5] [i_5])) : (((/* implicit */unsigned int) ((arr_30 [i_21] [i_21] [i_21]) / (((/* implicit */int) arr_63 [i_5] [(signed char)12] [(signed char)12] [i_5] [i_5])))))))));
            }
            /* vectorizable */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_46 *= ((/* implicit */unsigned int) ((21ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))));
                var_47 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5])) - (((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5 + 1]))));
            }
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (unsigned int i_24 = 0; i_24 < 16; i_24 += 3) 
                {
                    {
                        arr_78 [i_5] [i_5] [i_23] [i_24] [i_24] = ((/* implicit */unsigned char) (unsigned short)18783);
                        arr_79 [i_5] [i_7] [i_24] [i_24] = (i_24 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_59 [i_24]))) ? (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_4)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned char)237)) << (((((/* implicit */int) arr_9 [i_5] [i_24] [i_24])) - (121))))) - (458)))))) : (max((arr_20 [i_5 - 1] [i_5 + 1] [i_5]), (arr_20 [i_5 + 2] [i_5 - 1] [i_5])))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_59 [i_24]))) ? (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_4)))) + (2147483647))) >> (((((((((/* implicit */int) (unsigned char)237)) << (((((((/* implicit */int) arr_9 [i_5] [i_24] [i_24])) - (121))) + (110))))) - (458))) - (1429)))))) : (max((arr_20 [i_5 - 1] [i_5 + 1] [i_5]), (arr_20 [i_5 + 2] [i_5 - 1] [i_5]))))));
                        var_48 = ((/* implicit */signed char) (~((+(((unsigned int) -942273788))))));
                    }
                } 
            } 
        }
        for (int i_25 = 0; i_25 < 16; i_25 += 3) 
        {
            arr_84 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) min((arr_81 [i_5 - 2] [i_5 + 2] [i_5 + 1]), (arr_81 [i_5 + 2] [i_5 - 1] [i_5 + 1]))));
            var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((var_7) > (((/* implicit */int) (signed char)-51)))))));
        }
        var_50 += ((unsigned int) arr_60 [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_51 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (unsigned char)84))) >= (((((/* implicit */int) (signed char)-44)) & (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) (unsigned short)48233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5 - 2] [(unsigned char)18]))) : (arr_21 [i_5] [i_5 - 2] [i_5 - 2])))));
    }
    for (unsigned int i_26 = 1; i_26 < 15; i_26 += 3) 
    {
        var_52 = ((/* implicit */signed char) (unsigned char)19);
        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_26 - 1]))) <= (101516594U)))))))));
        arr_89 [i_26] = ((/* implicit */signed char) ((int) arr_77 [12ULL]));
    }
    var_54 = ((/* implicit */signed char) var_11);
}
