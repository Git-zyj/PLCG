/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78794
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
    var_12 = ((/* implicit */unsigned short) var_10);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (1093119636U))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_7)))))) | (((((/* implicit */_Bool) var_0)) ? (var_11) : (1093119639U)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            var_14 ^= ((/* implicit */int) min((arr_5 [i_1] [i_1]), (var_11)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_8 [i_0] [i_2] = ((/* implicit */short) ((8U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_2])) : (((/* implicit */int) arr_1 [i_1 + 3] [i_2])))) + ((~(((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1 + 4]))))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
            arr_10 [i_0] = arr_2 [i_1];
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((max(((_Bool)1), (((3201847662U) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_1 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_5 [i_0] [i_0]))))))) : (((arr_2 [i_0]) / (arr_5 [i_1 + 1] [i_1]))))))));
            var_17 = ((/* implicit */unsigned short) var_0);
        }
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0])))))) - (max((arr_5 [i_0] [i_0]), (var_9))))))));
        arr_11 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    var_19 ^= ((arr_5 [i_4] [i_5]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3944956673916437755LL)) ? (((/* implicit */int) max((arr_1 [i_3] [i_3]), (((/* implicit */short) arr_15 [i_3] [i_3]))))) : ((-(((/* implicit */int) arr_17 [i_3]))))))));
                    arr_22 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)251)), (arr_3 [i_3] [i_4] [i_4])))), (((unsigned long long int) 2368928486U)))) > (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [11] [i_4] [i_5])))) ? (((/* implicit */int) arr_19 [i_4])) : (((((var_3) + (2147483647))) << (((((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3])) - (9))))))))));
                    arr_23 [i_3] [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)13447)) : (var_3)))) : (min((((/* implicit */unsigned int) 2147483647)), (arr_2 [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1093119636U)))) == (max((((/* implicit */unsigned long long int) (unsigned char)197)), (11624502083426057903ULL))))))) : (min((((((/* implicit */_Bool) 30LL)) ? (((/* implicit */long long int) 4294967289U)) : (-6169318863718001110LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3] [i_4] [i_5]))) : (3201847662U)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        arr_33 [i_3] [i_3] [i_7] [i_8] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))) > (max((7U), (((/* implicit */unsigned int) (unsigned short)4095)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [1U]))) : (arr_28 [i_3] [i_6] [i_6] [i_8])));
                        arr_34 [2U] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11U)))))) : (max((arr_7 [i_3] [i_3] [i_6 - 2]), (arr_7 [i_6] [i_6] [i_6 - 2])))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_8])) > (((/* implicit */int) arr_14 [i_3] [i_3]))))), ((signed char)63)))) ? (min((((/* implicit */unsigned int) arr_30 [i_6 - 2])), (min((((/* implicit */unsigned int) var_3)), (3215897999U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_7])) : (var_3)))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            arr_40 [i_9] [i_9] [i_10] = ((/* implicit */short) -1582672286);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_22 = ((((/* implicit */_Bool) arr_45 [i_9] [i_10] [i_9] [(unsigned char)10] [3U])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_10])) ? (arr_16 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9]))) : (arr_47 [i_11] [i_11] [i_11] [i_11] [i_11]))));
                        var_23 = ((/* implicit */unsigned char) arr_7 [i_9] [i_9] [i_11]);
                        var_24 = ((/* implicit */unsigned long long int) arr_14 [i_9] [i_9]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_9])) ? (((/* implicit */int) arr_19 [i_13])) : (((/* implicit */int) var_1)))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        arr_51 [i_14] [i_12] [i_14] [i_12] [i_12] = ((/* implicit */long long int) (short)-9982);
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-15)) + (2147483647))) << (((((/* implicit */int) (signed char)7)) - (7)))))) ? (((/* implicit */int) arr_37 [i_9] [i_10] [i_9])) : (((/* implicit */int) arr_4 [i_9] [i_11] [i_11]))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 7415900229767748719LL))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)204)) ? (((((/* implicit */_Bool) 1766128443U)) ? (576443160117379072ULL) : (((/* implicit */unsigned long long int) -1966937997)))) : (((((/* implicit */_Bool) var_11)) ? (4467570830351532032ULL) : (((/* implicit */unsigned long long int) -1692032822)))))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_9] [i_10] [i_10] [i_11] [i_10])) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)135))))));
                }
                arr_52 [i_10] = ((/* implicit */_Bool) ((1093119638U) % (4089337038U)));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_16]))) % (arr_18 [i_9] [i_10] [i_11] [i_10])))))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_54 [i_9] [i_11] [i_10] [i_15] [i_16] [i_9]))));
                            arr_57 [i_9] [2U] [i_11] [i_11] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_54 [i_9] [i_10] [i_9] [i_15] [i_16] [i_16]))));
                            arr_58 [i_9] [i_11] [i_16] = ((((/* implicit */_Bool) arr_53 [i_9] [i_9] [i_9] [i_9])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_16]))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) (-(arr_16 [i_9] [i_9])));
                var_33 ^= ((/* implicit */unsigned char) arr_17 [i_9]);
            }
            var_34 = ((/* implicit */unsigned int) var_6);
        }
        arr_59 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(unsigned short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9] [i_9] [i_9]))) : (arr_55 [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_55 [i_9] [5])) ? (((/* implicit */int) arr_4 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_4 [i_9] [i_9] [i_9])))) : (((/* implicit */int) arr_4 [i_9] [i_9] [i_9]))));
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_55 [i_9] [i_9]) >> (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9]))))) ? (min((((/* implicit */unsigned int) arr_25 [i_9] [i_9])), (3069628514U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((6ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56)))))))));
    }
}
