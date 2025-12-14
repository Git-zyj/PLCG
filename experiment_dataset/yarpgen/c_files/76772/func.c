/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76772
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (~(var_2))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) (_Bool)0);
                        /* LoopSeq 3 */
                        for (int i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(7027315739419167421ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_5 [(_Bool)1] [i_3 + 1] [i_4 - 4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_3 + 1] [i_4 - 4] [i_1])) ? (var_12) : (arr_5 [i_0] [i_3 + 1] [i_4 - 4] [i_0])))));
                            arr_12 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) 1710866300)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)16)))))), ((~((~(((/* implicit */int) arr_0 [17ULL]))))))));
                            var_20 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))));
                        }
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_21 = ((((((/* implicit */unsigned int) arr_4 [i_0] [i_3 - 1] [i_2] [i_3 - 3])) < (var_12))) ? (((((/* implicit */int) var_3)) | (arr_4 [i_0] [i_3 - 1] [i_0] [i_3]))) : (min((arr_4 [i_0] [i_3 - 1] [i_2] [i_3 - 1]), (1219022547))));
                            arr_15 [i_0] [10] [1LL] [i_0] [14] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((1156442944575443492LL), (((/* implicit */long long int) arr_0 [i_3 - 3]))))) == (arr_10 [i_0] [i_0] [i_0] [i_3 - 3] [i_5])))), (min((0LL), (((long long int) (unsigned short)39064))))));
                            arr_16 [(unsigned short)1] [i_1] [i_1] = var_8;
                            var_22 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_1])), (var_9)))) : (min((((/* implicit */long long int) arr_13 [14LL] [i_3] [i_0] [i_2] [i_1] [i_0])), (1156442944575443492LL))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 - 3] [i_3] [i_3 + 1] [i_3 - 2] [i_3])) && (((/* implicit */_Bool) -1156442944575443493LL))))) << (((((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_14 [i_3 + 2] [i_3 - 3] [i_3 + 1] [i_3] [i_3 - 1]))) - (124U)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2] [i_2] [i_2])))));
                            arr_19 [i_3 - 2] [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 + 2])) ? (-1219022548) : (((/* implicit */int) var_5))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) (-(-96564830)));
                        }
                        arr_21 [i_0] [(signed char)15] [i_2] [i_3 + 1] = arr_11 [i_0] [(unsigned char)9] [i_0] [(unsigned char)9] [i_0];
                        var_25 ^= ((/* implicit */long long int) arr_3 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_0] [1LL] [i_8] [10U] = ((/* implicit */signed char) (unsigned char)103);
                            arr_28 [i_8 - 3] [i_2] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1] [i_0]);
                            arr_29 [i_8 + 1] [10U] [i_7] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(1710866299)));
                        }
                        for (signed char i_9 = 3; i_9 < 16; i_9 += 3) 
                        {
                            arr_34 [i_0] [i_2] |= ((/* implicit */short) ((signed char) arr_17 [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_9 - 3] [i_9 - 3] [i_9 - 1] [i_9 - 1]));
                            arr_35 [i_9] [i_9] [i_2] [i_9] [i_2] = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_9 + 1] [i_7] [i_9 - 1] [i_7] [i_9 - 1]);
                        }
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            var_26 |= ((/* implicit */long long int) ((3314910686U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                            arr_38 [i_0] [(short)12] [i_0] [i_0] [i_0] [i_0] [(signed char)10] = ((/* implicit */unsigned char) arr_0 [i_2]);
                            arr_39 [i_10] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]);
                        }
                        arr_40 [i_2] = ((/* implicit */unsigned int) arr_25 [i_2] [i_2] [i_2] [3] [i_2] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [11U] [i_0] [i_0] [11U] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_2] [i_2] [i_11 - 1] [i_11 - 2]);
                            var_27 = ((/* implicit */long long int) (-(3029291172U)));
                            var_28 |= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_5)))));
                            arr_46 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_11] [i_7] [i_2] [i_1] [i_0]) > (((/* implicit */unsigned long long int) var_4)))))) - (arr_26 [i_0] [i_1] [i_2] [i_11 - 3] [(signed char)15])));
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 1) /* same iter space */
                        {
                            arr_51 [i_12] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) ((960806838) == (var_10)))) : ((+(((/* implicit */int) (signed char)-125))))));
                            var_29 += ((/* implicit */unsigned long long int) (+(arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            arr_55 [i_1] [i_1] [i_0] [i_0] &= ((long long int) ((long long int) 1156442944575443492LL));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_0] [i_7] [i_13])) ? (-1219022548) : (((/* implicit */int) arr_42 [i_0] [i_2]))))) % (arr_22 [i_7] [i_2] [i_0] [i_0])));
                        }
                        for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_14 + 1])) ? (4071783027U) : (arr_41 [i_0] [i_1] [i_1] [i_7] [i_14 + 3])));
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_37 [i_14] [i_7] [i_2] [i_1] [i_0]);
                            arr_59 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-12420))));
                        }
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        arr_62 [i_0] [i_1] [i_15] = ((/* implicit */int) ((min((3029291172U), (3029291198U))) != (((/* implicit */unsigned int) (((+(((/* implicit */int) var_3)))) + ((-(var_8))))))));
                        arr_63 [i_0] [i_0] [i_2] [i_2] [i_15] = ((/* implicit */long long int) (-(((unsigned int) min((((/* implicit */unsigned int) var_13)), (1265676123U))))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_32 &= ((/* implicit */unsigned int) var_0);
                        /* LoopSeq 1 */
                        for (long long int i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            var_33 = ((((/* implicit */_Bool) var_11)) ? (arr_61 [12] [(_Bool)1] [10U] [7LL] [(_Bool)1] [i_17]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_34 = ((signed char) arr_57 [i_0] [i_1] [i_2] [i_17] [i_17]);
                            arr_70 [i_0] [i_1] [i_0] [i_16] [(signed char)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                    }
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_1]))) >= (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [14] [5LL] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 18; i_19 += 3) 
                        {
                            {
                                arr_76 [i_0] [11] [7U] [i_0] [i_19] [7U] = ((/* implicit */unsigned int) ((int) (~(arr_64 [i_19] [i_19] [i_19]))));
                                var_36 = -17;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
