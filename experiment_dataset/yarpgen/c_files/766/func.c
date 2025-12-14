/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/766
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((-2147483647 - 1))))), (min((((((/* implicit */_Bool) 5815313257505831945ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (var_7))), (((var_7) & (((/* implicit */unsigned long long int) 2147483647)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) (unsigned short)65524)))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [(short)5] = ((/* implicit */unsigned int) var_0);
                            var_20 += ((/* implicit */short) (~(((long long int) arr_6 [i_1 + 1]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_6 [(unsigned short)11])) / (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2] [i_4]))))))) ? (((arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 1] [(signed char)21] [(signed char)21]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))) : (arr_3 [i_1 - 1] [i_1 - 1])));
                        }
                    } 
                } 
            } 
            arr_12 [i_0] [i_1 - 2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 2147483647)) ? ((-2147483647 - 1)) : (-2147483647))), ((-2147483647 - 1))));
            arr_13 [i_0] = var_11;
        }
        arr_14 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0]))));
        arr_15 [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)239)))) * (min(((+(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_22 = ((/* implicit */short) ((unsigned int) (-2147483647 - 1)));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((/* implicit */int) var_17)))))));
        arr_18 [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5]))) : (arr_3 [i_5] [i_5]))) < (((long long int) var_10))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_8);
    }
    /* vectorizable */
    for (unsigned char i_6 = 1; i_6 < 8; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_6] = ((signed char) -1506574369);
            arr_25 [i_6] [7LL] = ((/* implicit */_Bool) 0LL);
            var_24 = var_11;
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_29 [i_6] [i_8] = arr_17 [i_6];
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6 + 2] [i_8]))) : ((-9223372036854775807LL - 1LL)))))));
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                arr_34 [i_6] [i_6] [i_9] [i_9] = ((/* implicit */unsigned char) 25218515934319358LL);
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_26 = ((/* implicit */signed char) var_1);
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12)));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 + 3])) ? (arr_23 [i_6 + 1] [i_6]) : (arr_23 [i_10] [i_6])));
                }
                arr_39 [i_6] [(signed char)8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6 - 1] [9] [i_9])) ? (arr_28 [i_6 - 1] [i_8] [i_9]) : (arr_28 [i_6 + 1] [i_9] [i_9])));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)15]))) : (var_12)));
            }
            for (unsigned short i_11 = 3; i_11 < 10; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 2; i_12 < 8; i_12 += 1) 
                {
                    var_30 = ((/* implicit */signed char) arr_40 [i_6 - 1] [i_6 + 3] [i_6] [i_6]);
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_6] [i_8] [i_11] [i_8])) ? (((/* implicit */unsigned long long int) arr_3 [i_6 + 3] [i_11 - 3])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) : (var_7))))))));
                    arr_47 [i_12] [i_6] [i_11] [i_6] [i_6] = (~(arr_30 [i_6 + 3] [i_6 + 3] [i_6 + 3]));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        {
                            arr_53 [i_6] [3LL] [3LL] [i_13] [i_13] = ((/* implicit */_Bool) (signed char)122);
                            var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [i_6] [i_11 - 3] [i_11 + 1] [i_6]))));
                            arr_54 [i_6] = arr_0 [i_8];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) var_7))));
                            arr_62 [i_6 - 1] [i_8] [i_11 + 1] [i_11 + 1] [i_15] [i_6] [i_16] = ((/* implicit */unsigned int) ((unsigned char) var_6));
                            arr_63 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] = -4581025951836217444LL;
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */signed char) 1506574351);
        }
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) 5815313257505831945ULL))));
        arr_64 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6])) ? (arr_52 [(unsigned short)2] [(unsigned short)2] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8861))))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6 + 3]))) / (var_3)));
    }
    var_37 = (+(((/* implicit */int) var_1)));
    var_38 = ((/* implicit */short) 3257880407135139499LL);
}
