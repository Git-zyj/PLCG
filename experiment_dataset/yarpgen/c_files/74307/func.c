/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74307
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [i_0 + 4])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_1 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_2 [(short)14] [i_1])), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 1] [i_0 - 3])) >= (((/* implicit */int) min((arr_4 [(unsigned char)2]), (arr_4 [i_1]))))))))))));
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_0])), (arr_3 [i_1] [i_0] [i_0])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0])), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [(unsigned char)0])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (arr_1 [i_0]))))))))));
            var_16 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1 - 2])) && (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 + 2]))))), (min(((unsigned short)45313), (((/* implicit */unsigned short) (_Bool)1))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 2])) ? (arr_7 [i_0] [i_0 - 4] [i_0 - 3]) : (arr_7 [i_0] [i_0] [i_0 - 1]))) / (((((/* implicit */_Bool) arr_7 [18U] [i_0] [i_0 + 2])) ? (arr_7 [i_0] [i_0] [i_0 + 3]) : (arr_7 [i_0] [i_0 - 1] [i_0 - 1])))));
                        var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_3] [i_3]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 3]))))), (max((arr_12 [23LL] [i_0] [i_0 - 2] [i_0] [i_0] [(signed char)16]), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)11] [15LL] [i_3] [i_3])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_5 [5ULL]), (((/* implicit */unsigned short) arr_4 [7ULL]))))), (min((arr_11 [i_0] [i_2] [(unsigned short)4]), (((/* implicit */unsigned int) arr_4 [i_0])))))))));
                        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 4]))), (min((((/* implicit */unsigned long long int) arr_5 [i_0 + 1])), (arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 3])))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned short) arr_4 [i_4]))))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_2 [i_0 - 4] [i_2])) : (((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [i_0]))))))) ? (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0 + 4] [i_2] [i_4]), (arr_9 [i_0] [i_0 - 2] [i_4] [i_4])))) : (arr_1 [6ULL])));
                        var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_0] [i_2] [i_4]))), ((+(arr_7 [i_0 + 4] [i_3] [i_4])))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -663181212)) ? (((/* implicit */unsigned long long int) 663181211)) : (16777152ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_0 - 3])), (arr_9 [i_2] [i_0] [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_0])), (arr_7 [i_2] [i_2] [i_2]))))), (max((max((arr_12 [8LL] [i_2] [(short)22] [i_2] [i_2] [i_2]), (arr_12 [23ULL] [i_2] [i_2] [i_0] [i_2] [i_0]))), (((/* implicit */unsigned long long int) max((arr_11 [i_0 + 2] [i_0] [i_0]), (((/* implicit */unsigned int) arr_4 [i_0 - 2])))))))));
            var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0]))))))) ? (max((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_0] [i_0 - 4])), (arr_7 [i_2] [i_2] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_2])))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [16])), (arr_6 [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_0 + 3] [i_0 + 3])))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_0] [i_2]))))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_24 = (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_6] [i_5] [i_2] [3]))) <= (arr_16 [i_5])))) != (((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0 + 3]))))));
                            arr_21 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((min((arr_7 [i_0 - 4] [i_0] [i_0 - 4]), (((/* implicit */unsigned long long int) arr_20 [i_0 + 3])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_20 [i_0 + 3])) > (arr_7 [i_0 + 4] [i_0] [i_0 - 4])))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1] [i_0 + 3]), (arr_2 [i_0 - 3] [i_0 + 1])))) ? (arr_16 [i_0 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0 + 3] [i_0 + 3]), (arr_2 [i_0 + 4] [i_0 - 1])))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 4) 
        {
            arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_8 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_0 + 4]), (arr_8 [i_8 - 2] [i_8 - 1] [i_0] [i_0 + 4])))) / (((((/* implicit */_Bool) arr_8 [i_8 + 1] [i_8 - 2] [i_8] [i_0 + 1])) ? (((/* implicit */int) arr_8 [i_8 + 1] [i_8 - 1] [i_8] [i_0 + 3])) : (((/* implicit */int) arr_8 [i_8 + 1] [i_8 + 1] [(signed char)2] [i_0 + 2]))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) arr_8 [i_0] [i_0] [i_0 - 2] [i_0])), (arr_10 [i_0] [i_8]))))))) & (((((/* implicit */_Bool) arr_12 [i_9] [15U] [i_9 - 1] [i_10] [i_0] [i_0])) ? (((/* implicit */long long int) min((4043740546U), (1283193334U)))) : (((((/* implicit */_Bool) arr_13 [i_10] [i_9] [i_8])) ? (arr_27 [i_0] [i_8] [i_9] [i_9]) : (((/* implicit */long long int) arr_20 [(short)16]))))))));
                        var_27 = ((/* implicit */short) arr_7 [i_9 - 1] [7] [i_8]);
                        arr_31 [i_0] [i_9] [i_9] [22U] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)7)), (-663181204)))) ? (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */unsigned long long int) arr_3 [i_9] [i_9] [i_8])) : (arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_11 [i_0 - 3] [i_9 - 1] [i_8 + 1])))));
                    }
                } 
            } 
            arr_32 [i_8 + 1] [i_0 + 2] = ((/* implicit */_Bool) ((unsigned short) min((arr_24 [i_8 - 2] [i_0 - 3] [i_0]), (arr_24 [i_8 - 2] [i_0 - 3] [i_0]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((arr_19 [i_0 + 2]) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_0] [i_8] [i_11])) * (((/* implicit */int) arr_23 [i_11] [i_8 + 1] [i_0 + 3]))))))))));
                var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_0 - 1] [i_8] [(unsigned short)1] [i_8])) <= (((/* implicit */int) arr_30 [i_0] [(signed char)15] [i_0] [i_0 - 4]))));
            }
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                arr_39 [i_12] [i_12] [i_8] [i_0 + 4] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_8] [i_0])) && (((/* implicit */_Bool) arr_38 [i_8]))))), (max((arr_12 [(signed char)21] [i_0] [i_8] [i_8 - 2] [(unsigned short)20] [(unsigned short)20]), (arr_12 [i_0] [i_0] [i_0] [i_8] [i_12] [i_12]))))), (min((((/* implicit */unsigned long long int) max((arr_37 [i_0] [(short)5] [i_8] [i_12]), (((/* implicit */unsigned short) arr_10 [i_0 + 2] [i_12]))))), (((((/* implicit */_Bool) arr_2 [i_0] [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_12]))) : (arr_12 [i_0] [i_0] [i_0] [i_8] [(unsigned short)15] [i_12])))))));
                var_30 = ((/* implicit */signed char) ((((long long int) min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_8] [i_8])), (arr_1 [i_0])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_8]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_8] [i_8] [i_0]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_0 + 1] [(unsigned short)16])), (arr_17 [i_0] [(unsigned short)20] [i_12])))))))));
            }
            var_31 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((5293385672453802094LL), (((/* implicit */long long int) (unsigned short)2180))))) ? (((/* implicit */int) arr_14 [i_8] [i_0] [8U] [i_0])) : (((/* implicit */int) max((arr_23 [i_0] [i_8] [i_8]), (((/* implicit */unsigned short) arr_30 [i_0] [i_0] [i_8] [(unsigned char)23]))))))))));
        }
        for (signed char i_13 = 1; i_13 < 23; i_13 += 4) 
        {
            var_32 = min((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 + 4])) && (((/* implicit */_Bool) arr_23 [i_0 + 2] [i_0 + 3] [i_13 - 1]))))), ((+(((/* implicit */int) max((((/* implicit */short) arr_41 [(unsigned short)1] [i_13] [i_13])), (arr_24 [i_0 + 2] [13U] [i_0 - 3])))))));
            var_33 = ((/* implicit */unsigned short) max(((((_Bool)1) ? (10216275889468476562ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10216275889468476565ULL)) ? (arr_34 [i_0] [(_Bool)1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_13 + 1] [i_13 + 1] [i_13 - 1])))))));
            var_34 = ((/* implicit */unsigned int) max((min((min((((/* implicit */long long int) 1283193333U)), (3613555873012151759LL))), (((/* implicit */long long int) max((arr_34 [i_0 + 2] [i_0 + 2] [i_0] [i_13 - 1]), (((/* implicit */unsigned int) arr_4 [i_0]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_13]))))))))));
        }
    }
    var_35 = ((/* implicit */unsigned short) min((((/* implicit */short) var_7)), (var_4)));
    /* LoopSeq 3 */
    for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        var_36 = ((/* implicit */short) min((((arr_41 [i_14] [i_14] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [(unsigned char)1] [i_14] [i_14] [i_14]), (((/* implicit */short) arr_4 [i_14])))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_14] [i_14])), (arr_38 [i_14]))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 3553517960336987456LL)) ? (-663181208) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
        var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [i_14])) && (((/* implicit */_Bool) arr_42 [i_14] [i_14] [i_14])))) ? (min((arr_42 [i_14] [i_14] [i_14]), (arr_42 [i_14] [i_14] [i_14]))) : (((((/* implicit */_Bool) arr_20 [i_14])) ? (((/* implicit */unsigned long long int) arr_20 [i_14])) : (arr_42 [i_14] [i_14] [5LL])))));
        var_38 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [(_Bool)1]) == (arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))), (min((arr_12 [i_14] [(unsigned char)22] [i_14] [i_14] [i_14] [7LL]), (((/* implicit */unsigned long long int) arr_44 [i_14] [i_14]))))));
        arr_45 [i_14] [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_14] [i_14] [(signed char)6] [i_14] [i_14] [i_14])) ? (arr_12 [i_14] [i_14] [14LL] [i_14] [i_14] [14LL]) : (arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 4; i_15 < 11; i_15 += 4) 
    {
        var_39 = ((/* implicit */_Bool) arr_37 [i_15 - 1] [i_15 - 1] [i_15] [i_15]);
        arr_48 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_15 + 2])) <= (((/* implicit */int) arr_0 [i_15 - 4]))));
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            arr_52 [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_15 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [(signed char)18] [i_16] [i_15 - 3] [i_15]))) : (((((/* implicit */_Bool) arr_36 [i_15] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_16] [(signed char)9] [i_15 + 2] [i_16]))) : (arr_44 [(short)6] [i_16])))));
            arr_53 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [(unsigned char)15])) ? (((/* implicit */int) arr_5 [i_16])) : (((/* implicit */int) arr_5 [i_16]))));
        }
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            arr_57 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_17])) / (((/* implicit */int) arr_10 [i_15 + 2] [i_15 + 2]))))) ? (((/* implicit */int) arr_17 [i_15] [i_15 + 2] [(signed char)13])) : (((/* implicit */int) arr_0 [i_15 + 1]))));
            var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_15] [i_17])))))));
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_62 [i_15] [i_17] [i_18] = ((/* implicit */unsigned short) ((arr_59 [i_15]) / (arr_59 [i_18])));
                        var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_46 [i_15] [i_15 - 3]))));
                        arr_63 [i_15 - 4] [(short)2] [(short)2] [i_19] = arr_54 [i_15 - 1] [i_15 - 1] [i_15];
                        var_42 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_19] [i_19] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [(signed char)3] [i_17] [i_17] [i_18] [i_19]))) : (arr_6 [i_18] [(unsigned char)8]))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [(signed char)6] [i_18] [i_15 + 1] [i_15 + 1]))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_17] [i_15 - 1])) ? (arr_47 [i_15] [i_15 - 2]) : (arr_47 [i_15] [i_15 + 1])));
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_17])) / (((/* implicit */int) arr_0 [i_15 + 1]))));
        }
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_45 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_20])) && (((/* implicit */_Bool) arr_40 [i_20])))));
        var_46 = ((/* implicit */unsigned short) ((arr_18 [i_20] [i_20] [i_20] [i_20] [i_20]) ? (((/* implicit */int) arr_18 [i_20] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_18 [i_20] [i_20] [i_20] [i_20] [i_20]))));
    }
    var_47 *= ((/* implicit */unsigned long long int) var_9);
}
