/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97390
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
    var_12 = (~(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [(signed char)10] = min((((/* implicit */unsigned char) (signed char)-118)), ((unsigned char)49));
        arr_3 [i_0] = ((/* implicit */int) ((signed char) arr_0 [i_0 + 1]));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)67)))))) ? (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned char)223)) : (1920435552))) : (((/* implicit */int) ((unsigned char) (~(arr_1 [i_0] [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_1] = (unsigned char)232;
            var_14 = ((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)106))) ? (((/* implicit */int) var_4)) : ((-(var_10)))));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_9))));
                arr_13 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (signed char)82)) >> (((((/* implicit */int) (unsigned char)48)) - (31))))));
            }
            for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [(signed char)5])) << (((((/* implicit */int) arr_16 [i_0] [i_0] [(signed char)1])) - (7)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) (signed char)-16))));
                arr_17 [i_0 + 1] [i_0 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_9 [(signed char)13] [i_0]) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_10 [7] [7])) ? (-657762312) : (((/* implicit */int) var_0))))));
            }
            for (signed char i_5 = 3; i_5 < 13; i_5 += 2) 
            {
                var_17 = var_5;
                arr_22 [i_0] [i_2] [i_2] [i_5 - 2] = ((/* implicit */unsigned char) (signed char)-106);
                var_18 = ((/* implicit */unsigned char) var_11);
                var_19 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_0 - 1] [i_2] [i_5] [i_0 - 1]))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    arr_25 [i_0] [i_0] [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) + (2147483647))) << (((/* implicit */int) (unsigned char)0))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-11)) | (((/* implicit */int) (unsigned char)109))));
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_0 - 2] [i_0] [(unsigned char)1] [i_0] [(signed char)7] = ((/* implicit */signed char) ((int) ((((/* implicit */int) (unsigned char)59)) / (arr_0 [i_0]))));
                        arr_29 [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned char)3] [i_7] = ((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_0] [i_5 - 1]));
                        arr_30 [i_0] [(signed char)4] [i_5] [i_6] [i_0] [i_7] [5] = ((/* implicit */unsigned char) ((((arr_11 [i_6 - 1] [i_6 - 1] [i_5] [i_0]) + (2147483647))) << (((((((/* implicit */int) var_1)) + (82))) - (9)))));
                        arr_31 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_0 + 1] [i_5 - 1] [i_6 + 1] [i_7 + 2])) : (((/* implicit */int) arr_21 [i_0 + 3] [i_5 - 2] [i_6 + 1] [i_7 - 1]))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_15 [i_7 + 1])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)2)))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            arr_34 [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (arr_10 [i_0 + 2] [i_8 - 1])));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) & (((/* implicit */int) ((((/* implicit */_Bool) (signed char)18)) && (((/* implicit */_Bool) var_5))))))))));
            var_23 = ((/* implicit */unsigned char) ((int) ((int) (signed char)-122)));
            var_24 = ((/* implicit */signed char) max((var_24), ((signed char)6)));
        }
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 1) 
        {
            var_25 = ((/* implicit */int) var_0);
            arr_38 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned char)190))))) || (((/* implicit */_Bool) arr_20 [i_9 - 2] [i_0 + 2] [i_0 + 1]))));
            var_26 = arr_26 [i_0];
        }
        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0 + 3] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) var_9)))) >= (((((/* implicit */int) arr_16 [i_0 + 3] [i_0 + 1] [i_0 - 1])) ^ (((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 1] [i_0 + 3]))))));
    }
    var_28 = -784553414;
    /* LoopSeq 2 */
    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            arr_44 [(signed char)17] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) arr_40 [i_10])) : (((/* implicit */int) arr_40 [i_10]))));
            var_29 += ((/* implicit */unsigned char) ((int) arr_39 [i_11]));
            var_30 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)218)) != (((/* implicit */int) (signed char)-108))));
        }
        var_31 ^= ((((/* implicit */_Bool) ((signed char) max((var_4), (((/* implicit */unsigned char) (signed char)16)))))) ? (max((((((/* implicit */_Bool) (unsigned char)93)) ? (arr_41 [i_10] [i_10]) : (((/* implicit */int) (signed char)69)))), ((~(((/* implicit */int) arr_39 [(unsigned char)20])))))) : (min((((/* implicit */int) arr_40 [(signed char)10])), (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_40 [(unsigned char)12])))))));
        var_32 = ((/* implicit */signed char) (((+(arr_41 [i_10] [i_10]))) < (((/* implicit */int) ((signed char) arr_40 [i_10])))));
    }
    for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        var_33 -= (signed char)-106;
        var_34 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)246))))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_12])) / (var_10)))) ? (((/* implicit */int) ((signed char) arr_16 [i_12] [i_12] [i_12]))) : ((-(((/* implicit */int) var_3))))))) ? (arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */int) var_9))));
        arr_47 [i_12] = max((((((/* implicit */int) arr_33 [i_12] [i_12] [i_12])) + (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_45 [i_12] [i_12])) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) arr_45 [i_12] [i_12])))));
    }
}
