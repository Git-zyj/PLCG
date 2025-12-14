/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92897
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((long long int) ((unsigned short) (short)-13605))) : (((/* implicit */long long int) ((/* implicit */int) (short)-31141)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_4] [(unsigned char)5] [i_4])) : (((/* implicit */int) var_13))))) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) (-(var_14))))));
                                arr_17 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [(short)13] = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)18380)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_1)))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)18)) < (((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    arr_19 [17LL] = ((/* implicit */signed char) ((arr_2 [i_1]) & (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                }
                for (short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] = ((/* implicit */int) var_1);
                    arr_23 [(_Bool)1] [i_1] [i_5] [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) 2615485199663945827LL))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)3198)))) : ((~(((/* implicit */int) arr_4 [i_0] [i_0])))))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 12U))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3186))))))))));
                    var_20 = ((/* implicit */short) var_7);
                    arr_24 [i_5] [i_5] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_13 [i_5] [i_1] [i_0]))))));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    arr_28 [i_0] [(unsigned char)5] = ((/* implicit */_Bool) ((-154659412199408845LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_21 *= ((/* implicit */unsigned int) ((_Bool) 154659412199408845LL));
                        var_22 = ((/* implicit */unsigned char) (signed char)94);
                    }
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_26 [i_6] [i_6] [10LL] [i_0])) : (((/* implicit */int) var_6))));
                    var_24 = ((/* implicit */unsigned long long int) (unsigned short)3198);
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                }
                for (short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_11 [i_1])) ? (3904543373U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [(unsigned short)11])))))));
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_8] [i_1] [i_1] [i_8] [12LL]))) ? ((-(((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_1])) ? (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))));
                    arr_36 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147483647)) * (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52215)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_1)))) * ((~(var_14)))))));
                    var_27 *= ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_21 [i_0] [i_1])) ^ (((/* implicit */int) arr_21 [i_0] [i_8])))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        var_28 = ((/* implicit */long long int) max((var_28), (var_14)));
        arr_39 [(unsigned char)16] |= ((/* implicit */signed char) var_9);
        arr_40 [i_9] [(signed char)12] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_38 [(unsigned short)8]) && (((/* implicit */_Bool) (signed char)107)))))));
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        arr_43 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((var_10), (((/* implicit */short) var_4))))) : (((((/* implicit */_Bool) 3943353553U)) ? (((/* implicit */int) arr_38 [i_10])) : (((/* implicit */int) arr_42 [i_10] [i_10]))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) 9223372036854775807LL))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        arr_47 [i_11] = ((/* implicit */signed char) ((unsigned short) arr_45 [i_11] [i_11]));
        arr_48 [i_11] = ((/* implicit */_Bool) ((unsigned long long int) 7254937994286645317LL));
    }
    var_30 = ((/* implicit */unsigned long long int) var_4);
}
