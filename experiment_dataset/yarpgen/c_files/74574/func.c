/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74574
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+(((/* implicit */int) var_12)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_14 *= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((signed char) arr_2 [i_0 - 1] [i_1 - 1])))));
            var_15 = ((/* implicit */long long int) (+(((((((/* implicit */int) var_7)) + (2147483647))) >> (((arr_3 [i_0] [i_0]) - (1035564468)))))));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_7 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_2] [i_2]);
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_12 [i_0] [i_2] [i_2] [(unsigned char)2] = ((((_Bool) 16439177220410463244ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (arr_6 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1127563685U)) ? (arr_9 [i_0] [i_2] [i_3] [i_2]) : (((/* implicit */long long int) var_4))))));
                var_16 = ((/* implicit */int) ((short) arr_11 [i_3] [i_0] [i_0]));
            }
        }
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_12))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)23))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 12020738425832761120ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)44)));
                            arr_26 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (arr_16 [i_0 + 1] [i_0 - 1]) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)1877))) ^ (var_9)))));
                            var_19 = ((/* implicit */long long int) (((-(((/* implicit */int) var_8)))) % (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                        }
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_1)) > (8372224)))))));
                    }
                    var_21 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) | (var_2)));
                    var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) 5092550180056844304ULL)))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((arr_4 [i_0] [i_4] [i_5]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0]))))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) arr_27 [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_8]))))) : (((/* implicit */int) ((unsigned short) 1127563685U)))))));
        var_24 = ((/* implicit */signed char) max((((((/* implicit */int) arr_27 [i_8])) | (((/* implicit */int) arr_28 [i_8])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-99))) > (3167403584U))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (long long int i_11 = 4; i_11 < 24; i_11 += 1) 
                {
                    {
                        arr_35 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */_Bool) arr_34 [i_8] [i_11 - 1]);
                        var_25 -= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) > (1059499199U))), ((!(((/* implicit */_Bool) arr_31 [i_8] [i_9] [i_11 + 1] [i_8]))))));
                        arr_36 [i_8] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) min(((unsigned short)65186), (var_10))))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11] [i_10] [i_9] [(_Bool)1]))))) << ((((-(((/* implicit */int) (unsigned char)220)))) + (230)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        var_26 = arr_6 [i_12];
        arr_39 [i_12] [4U] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)167)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6933345423607380309LL)) ? (min((681504728176187113ULL), (((/* implicit */unsigned long long int) 3167403611U)))) : (8616277276925898612ULL))))));
        /* LoopSeq 2 */
        for (unsigned char i_13 = 3; i_13 < 10; i_13 += 2) 
        {
            var_27 = max(((~(((((/* implicit */int) (unsigned short)37340)) >> (((((/* implicit */int) (unsigned char)86)) - (62))))))), (((/* implicit */int) (((-(1127563725U))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_3)))))));
            var_28 = ((((((/* implicit */unsigned int) var_4)) == (((536870911U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((((/* implicit */int) ((12020738425832761125ULL) > (15057760422717591180ULL)))) > (arr_3 [i_13 + 2] [i_13 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) | (4544916570720154453ULL)))) ? (((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (short)21436)) : (((/* implicit */int) (unsigned char)170)))) : (((/* implicit */int) (short)23313)))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) 1548746633))));
            var_30 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (unsigned char)89)), (-7987862091888321360LL))))))));
        }
        for (int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            var_31 = (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-31)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            arr_47 [i_14] [i_14] = ((/* implicit */unsigned char) arr_10 [i_14] [i_12]);
            arr_48 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)350)))), ((~(((/* implicit */int) var_8))))))) ^ (((((/* implicit */_Bool) max(((signed char)-97), (var_5)))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)356))) : (-2209688679650534649LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        }
    }
    var_32 *= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11))))), (var_11))), (((/* implicit */unsigned long long int) var_1))));
    var_33 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) (short)30127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19097))) : (var_6))), (((/* implicit */unsigned long long int) var_5))))));
}
