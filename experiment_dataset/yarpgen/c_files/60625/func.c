/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60625
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
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (unsigned short)56220)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        var_19 = ((/* implicit */short) var_3);
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */int) ((((/* implicit */int) (signed char)-117)) <= (((/* implicit */int) (signed char)126))));
                        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1895398298U)))) ? (((long long int) min((328820765), (((/* implicit */int) (signed char)127))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)54)) > (((/* implicit */int) (_Bool)1))))))));
                        var_23 ^= ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1] [i_1 + 1]) != (((/* implicit */int) var_1)))))));
                        arr_10 [i_0] [i_0] [i_3] [5] = ((/* implicit */signed char) ((min((arr_2 [i_0 + 2] [i_1 - 2]), (((/* implicit */long long int) var_13)))) % (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)98)))))));
                    }
                } 
            } 
            var_24 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(6811950855788940872LL)))) ? (((/* implicit */long long int) max((var_17), (((/* implicit */unsigned int) -4))))) : (max((((/* implicit */long long int) var_3)), (var_9))))) << ((((((-(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [(short)3]))))) + (109LL))) - (49LL)))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) arr_4 [i_4]);
            var_26 = (((_Bool)0) ? (((/* implicit */int) arr_8 [(short)0] [i_4] [i_0 - 3] [i_4])) : (((/* implicit */int) var_1)));
        }
    }
    var_27 = ((/* implicit */long long int) (-(var_17)));
    var_28 = -606495999;
    var_29 ^= ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_17 [i_5] = ((int) ((((/* implicit */_Bool) (-(arr_14 [i_5])))) ? (((arr_16 [i_5]) ? (((/* implicit */int) (short)-24231)) : (((/* implicit */int) arr_15 [i_5] [i_5])))) : (((/* implicit */int) var_2))));
        arr_18 [i_5] = ((/* implicit */short) max(((!(((/* implicit */_Bool) max((var_12), (((/* implicit */signed char) var_14))))))), (var_2)));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_30 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (min((arr_14 [(signed char)12]), (arr_14 [i_5])))));
                    /* LoopSeq 1 */
                    for (short i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((((max((((/* implicit */int) (_Bool)1)), (0))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) 5))))))), (((/* implicit */int) arr_25 [5LL] [5LL] [i_8]))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_12))));
                    }
                    var_33 = ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [9U])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)126)) | (((/* implicit */int) var_7))))) ? (max((arr_20 [i_6]), (((/* implicit */long long int) -5)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5267037558263683828LL))))))))));
                    var_34 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (signed char)125))) % (((/* implicit */int) arr_25 [i_5] [i_5] [i_5]))))), (((((/* implicit */_Bool) arr_15 [i_5] [(_Bool)1])) ? (max((((/* implicit */unsigned int) var_5)), (arr_22 [i_6] [i_6] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_35 = ((/* implicit */short) arr_20 [i_6]);
                        /* LoopSeq 3 */
                        for (long long int i_10 = 2; i_10 < 9; i_10 += 2) 
                        {
                            var_36 *= ((/* implicit */unsigned short) max((((long long int) var_11)), (((/* implicit */long long int) (~(arr_23 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 3]))))));
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_10 - 2] [i_9] [i_7] [i_9] [i_5])) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) ((268435440) + (((/* implicit */int) ((((/* implicit */int) var_14)) <= (arr_19 [i_5] [i_5] [i_5]))))))))))));
                            var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10 + 2] [i_10] [i_6] [i_10 + 4] [i_10 + 2])) ? (((/* implicit */int) arr_32 [i_10 + 2] [i_10] [i_6] [i_10 + 4] [i_10])) : (((/* implicit */int) arr_32 [i_10 + 2] [i_10] [i_6] [i_10 + 4] [i_10]))))) ? (((/* implicit */int) max((arr_31 [i_10 + 4] [i_6] [i_10 + 1] [i_10 + 1] [i_10 + 3] [i_10 - 2]), (((/* implicit */short) arr_27 [i_10 + 1] [i_6] [i_10 - 1] [i_10 - 1] [i_10 + 3]))))) : (((/* implicit */int) arr_32 [i_10] [i_10] [i_6] [i_10 + 1] [i_10])));
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_39 = ((/* implicit */short) ((1) % (((/* implicit */int) var_5))));
                            var_40 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_11 - 1] [i_11 - 1] [i_9] [i_11 - 1] [12])) | (((/* implicit */int) arr_32 [(short)2] [i_11 - 1] [i_5] [i_11 - 1] [i_11 - 1]))));
                            arr_35 [i_5] [12LL] [i_6] [i_6] [i_6] [i_11] [i_6] = ((/* implicit */long long int) arr_31 [i_5] [i_6] [(short)7] [i_6] [i_9] [(short)7]);
                            var_41 = ((/* implicit */unsigned char) var_8);
                        }
                        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 3) 
                        {
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))) ? (((long long int) arr_14 [i_12 + 2])) : (((/* implicit */long long int) (~(arr_14 [i_12 + 1]))))));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -5)))))))));
                            var_44 += ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-99))));
                        }
                        var_45 = ((/* implicit */_Bool) min((((((/* implicit */long long int) var_17)) ^ (1403477389801255694LL))), (((/* implicit */long long int) max((((/* implicit */int) (short)-14239)), (1108433820))))));
                    }
                }
            } 
        } 
        var_46 = ((/* implicit */signed char) var_6);
    }
    for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        arr_41 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_13])) ? (max((((/* implicit */int) arr_39 [i_13])), ((-(((/* implicit */int) var_2)))))) : (max((((/* implicit */int) arr_39 [i_13])), (arr_40 [i_13])))));
        var_47 = ((/* implicit */_Bool) max((var_47), (var_2)));
        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (signed char)118))));
    }
}
