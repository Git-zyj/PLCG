/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99004
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
    var_11 = ((/* implicit */unsigned int) ((((int) (unsigned short)25191)) | (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 = (~(min((((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_2] [i_2] [i_2] [(unsigned short)6]) : ((~(arr_8 [i_0] [(unsigned short)9])))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(-2LL)))));
                            var_14 = ((/* implicit */signed char) arr_0 [i_4]);
                            arr_13 [i_4] [i_3] [i_2] [i_1] [8U] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [1ULL] [13LL] [i_2] [i_3] [i_3] [i_4]))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38634))))) || (((/* implicit */_Bool) (~(-4671930951366027596LL))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) : (16777200U)))) : (var_10)));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) >= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [5LL] [i_0])))) ? ((-(((/* implicit */int) arr_11 [i_6] [i_3] [i_2] [2ULL] [i_1] [i_0])))) : ((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3] [i_6]))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (unsigned short)26899))));
                            arr_18 [i_6] [(short)5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 349235586)) ? (((/* implicit */int) arr_17 [(short)1] [i_1] [i_1] [i_1] [10ULL])) : (((/* implicit */int) arr_10 [i_3] [(signed char)4] [i_2] [i_6] [i_0] [i_2] [i_3])))) < ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_6] [(_Bool)1] [i_6])) : (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) -1253093813);
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_21 [i_0] [i_1]))) ? (var_9) : (((/* implicit */unsigned int) arr_3 [i_7] [i_7 + 1]))));
                    arr_25 [i_1] = ((/* implicit */signed char) arr_10 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 2] [i_7] [i_7]);
                }
                var_21 = ((/* implicit */long long int) ((int) (+(18446744073709551600ULL))));
            }
            for (int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_22 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_9]);
                arr_28 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)62468)))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 12; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)10] [i_10] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38656))) : ((~(arr_19 [i_0] [i_0] [i_0] [(short)9])))));
                            arr_35 [i_10] [i_1] [7ULL] [i_11] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)99))));
                            var_25 = ((/* implicit */short) -550328435);
                            var_26 = ((/* implicit */unsigned long long int) (((+(1119895521U))) != (((/* implicit */unsigned int) (~(-1253093811))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 2) 
                {
                    arr_39 [(short)10] [i_10] [i_10] [i_13] = ((/* implicit */int) (~((+(9ULL)))));
                    var_27 = ((/* implicit */int) (unsigned short)38648);
                }
                for (unsigned long long int i_14 = 4; i_14 < 12; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) var_0);
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)26524)) : (-1732830783)))));
                        var_29 = ((/* implicit */int) (unsigned short)65528);
                    }
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [(short)13] [i_1] [i_10] [i_14])) ? (3357930702752032924LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14 + 2] [i_14 - 2] [i_14 - 3] [i_14 - 1] [i_14] [i_14 - 1])))));
                    arr_47 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(arr_45 [i_14] [i_14] [i_14 + 2] [i_10] [i_14])));
                    arr_48 [i_1] [i_10] = (~(var_6));
                }
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        {
                            arr_54 [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_17]))));
                            arr_55 [i_0] [i_10] [i_10] [12] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)237)) + (((/* implicit */int) (signed char)-63))));
                            arr_56 [1LL] [i_10] [i_1] [i_10] [i_16] [i_17] = arr_43 [i_0];
                        }
                    } 
                } 
            }
            arr_57 [i_1] = ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1] [i_1]);
        }
        arr_58 [i_0] = ((/* implicit */unsigned long long int) ((2147483641) / (((/* implicit */int) (unsigned short)10725))));
    }
    for (unsigned char i_18 = 2; i_18 < 20; i_18 += 2) 
    {
        var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((2147483641) >> (((((/* implicit */int) arr_59 [(signed char)0])) - (209)))))) - (min((((/* implicit */long long int) arr_59 [i_18])), (-2781576419433998873LL)))))), (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_60 [i_18 - 2] [(unsigned short)8]))))) : (((6922773840398044460ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_18 + 2] [i_18 - 2])))))))));
        arr_61 [i_18] = ((/* implicit */unsigned short) arr_60 [i_18 - 1] [i_18]);
        arr_62 [i_18] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_60 [i_18 + 1] [i_18 - 2])) && (((/* implicit */_Bool) (unsigned short)7168)))), (((((/* implicit */_Bool) arr_60 [i_18 - 1] [i_18])) || (((/* implicit */_Bool) (unsigned char)185))))));
        var_32 = ((((/* implicit */_Bool) (~(((unsigned long long int) 10673779938750349501ULL))))) ? (min((((/* implicit */unsigned long long int) arr_60 [i_18] [i_18])), (7117552172681298914ULL))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_60 [i_18] [i_18 + 1])) ? (((/* implicit */int) arr_59 [i_18 + 1])) : (((/* implicit */int) arr_60 [i_18] [i_18]))))))));
    }
}
