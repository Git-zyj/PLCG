/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98463
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_4 [i_1]))), (((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned int) arr_1 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [14U]))) : (arr_4 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1]))))))))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((((((((/* implicit */int) arr_5 [i_1])) > (((/* implicit */int) arr_0 [i_1] [i_1])))) ? (((/* implicit */int) max((arr_1 [i_1] [i_1]), (arr_0 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [(_Bool)1])) > (((/* implicit */int) arr_6 [i_1]))))))) + (2147483647))) << (((min((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))) - (123676036U)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_1 [i_2] [i_2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) && (((/* implicit */_Bool) arr_9 [i_2]))))) : (((/* implicit */int) arr_8 [i_2]))));
        var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)25))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153)))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_3] [(signed char)18])))) : (((/* implicit */int) ((unsigned char) arr_0 [10U] [i_3])))));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_2]) - (arr_9 [i_2])))) ? (((arr_9 [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)15] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) (unsigned char)241))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                arr_17 [i_2] [i_3] [i_3] [i_3] = ((((/* implicit */int) arr_12 [i_2] [i_2])) * (((((/* implicit */int) arr_8 [i_2])) / (((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_3])))));
                arr_18 [i_2] [i_3] [17] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_0 [i_3] [i_4])) - (((/* implicit */int) arr_0 [i_2] [(_Bool)1])))));
            }
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                arr_21 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((arr_9 [i_5]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))))));
                var_13 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_2] [i_5])) : (((/* implicit */int) arr_11 [i_2] [i_3] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_2])) > (((/* implicit */int) arr_11 [i_3] [i_5] [i_5])))))) : (((unsigned int) arr_16 [i_5] [i_3] [i_3] [i_5])));
                var_14 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_20 [i_5] [i_3] [18ULL] [i_5])) != (arr_14 [i_2] [i_3] [i_5] [i_5]))) ? (((((/* implicit */_Bool) arr_0 [i_3] [2U])) ? (arr_16 [i_5] [i_3] [(unsigned short)8] [i_5]) : (((/* implicit */int) arr_8 [i_3])))) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_2]))));
            }
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_25 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_6])))))) ? (((((/* implicit */int) arr_19 [i_6])) ^ (((/* implicit */int) arr_23 [i_2] [i_2] [i_6])))) : (((((/* implicit */int) arr_23 [i_2] [i_2] [i_6])) | (arr_14 [i_2] [i_2] [i_2] [i_2])))));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [4U] [i_2] [i_6] [i_6])) % (((/* implicit */int) arr_11 [i_6] [i_2] [i_6]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_6] [i_2] [i_2])) ? (((/* implicit */int) arr_23 [i_2] [i_2] [(unsigned short)17])) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])))))));
        }
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((var_7), (var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_7])) ? (arr_14 [i_7] [i_7] [i_7] [i_7]) : (arr_14 [i_7] [i_7] [i_7] [i_7])))) ? (((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_7])) ? (arr_14 [i_7] [i_7] [i_7] [i_7]) : (arr_14 [i_7] [i_7] [i_7] [i_7]))) : ((-(arr_14 [i_7] [i_7] [i_7] [i_7])))));
        arr_29 [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_16 [i_7] [i_7] [i_7] [i_7]) - (((/* implicit */int) (unsigned char)98))))) ? (min((arr_9 [(short)19]), (((/* implicit */unsigned long long int) arr_16 [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_7])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_19 [i_7]))) > (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7]))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((short) arr_14 [i_8] [i_8] [i_8] [i_8])), (((/* implicit */short) arr_24 [i_8]))))) | (min((arr_14 [i_8] [i_8] [i_8] [i_8]), (arr_14 [i_8] [i_8] [i_8] [i_8])))));
        var_18 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned short)46742))))) + (min((((/* implicit */long long int) (short)127)), (-1220548454734280870LL))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_30 [i_8] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [i_8])))))))));
        arr_34 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8])))) >> (((((((/* implicit */int) arr_11 [i_8] [i_8] [i_8])) * (((/* implicit */int) arr_27 [i_8])))) - (1904531)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8])))))) : (((((/* implicit */_Bool) min((arr_12 [i_8] [i_8]), (((/* implicit */unsigned short) arr_1 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (signed char)-94)))) : (((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_8 [i_8])) : (((/* implicit */int) arr_27 [i_8]))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max(((((-(arr_31 [i_8] [i_8]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8])) ? (arr_14 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */int) arr_23 [i_8] [i_8] [i_8]))))))), (((((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_0 [i_8] [i_8])))) || ((!(((/* implicit */_Bool) arr_22 [i_8])))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            arr_39 [i_9] [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */short) arr_33 [8U])), (((short) arr_12 [i_8] [i_8]))))), (((((arr_35 [i_8] [i_8] [i_8]) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [i_8]))))) ? (((/* implicit */int) max((arr_6 [i_8]), (arr_24 [i_9])))) : (((/* implicit */int) arr_0 [i_9] [i_8]))))));
            arr_40 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_8] [i_9])) * (((((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_9])) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_9] [(signed char)18] [(signed char)18] [i_8])) - (12794)))))) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_9])) == (((/* implicit */int) arr_32 [i_8] [i_8])))))))));
            arr_41 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) arr_27 [i_8])) : (((/* implicit */int) arr_26 [i_8])))) | (((((/* implicit */_Bool) arr_16 [i_9] [i_9] [(unsigned char)10] [i_9])) ? (((/* implicit */int) arr_32 [(signed char)1] [i_9])) : (((/* implicit */int) arr_19 [i_8])))))) << (((((((/* implicit */_Bool) arr_31 [i_9] [i_8])) ? (arr_31 [i_8] [i_9]) : (arr_31 [i_8] [i_8]))) - (2525707234U)))));
            arr_42 [i_8] [(signed char)4] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_26 [i_9])), (((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)32762)) - (32748))))))) / (((/* implicit */long long int) max((arr_31 [i_8] [i_9]), (((/* implicit */unsigned int) ((arr_22 [i_9]) << (((arr_4 [i_8]) - (123676036U)))))))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        arr_46 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [(signed char)12] [i_10] [(signed char)12])) ? (((((/* implicit */unsigned long long int) arr_43 [i_10] [i_10])) & (arr_9 [i_10]))) : (((/* implicit */unsigned long long int) ((arr_14 [i_10] [i_10] [i_10] [i_10]) / (((/* implicit */int) arr_23 [i_10] [i_10] [i_10])))))));
        var_20 = ((((/* implicit */int) arr_5 [i_10])) == (((/* implicit */int) arr_5 [i_10])));
        arr_47 [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_10] [i_10]))));
        var_21 ^= ((((/* implicit */int) arr_8 [i_10])) >= (((/* implicit */int) arr_8 [i_10])));
        arr_48 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) + (1280063517U)));
    }
    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_6)) : (var_2)))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) var_5)))) : (var_3))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_7))))) * (((((/* implicit */_Bool) var_2)) ? (var_0) : (var_2))))))));
}
