/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59251
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_15 ^= ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2]);
                        var_16 = max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) > ((+(arr_4 [i_1])))))), ((-(((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_7 [i_0])))))));
                        arr_11 [i_3] [i_2] [(short)9] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        var_17 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4])) & (((/* implicit */int) arr_3 [i_4]))))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [11ULL] [i_2])) >> (((arr_12 [i_4] [i_4] [i_1] [i_4]) + (1948400214179237415LL)))))), ((~(arr_6 [i_4] [i_2] [i_1])))))));
                        var_18 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_2] [i_4]))));
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_12 [(unsigned char)1] [i_5] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [(_Bool)1] [i_6]))) : (arr_16 [i_6] [i_5] [i_0] [i_5] [i_0])))))));
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [19LL] [i_1] [19LL]))))) ? ((-(((/* implicit */int) arr_9 [i_6] [4U] [i_1])))) : ((+(((/* implicit */int) arr_3 [i_0]))))))), (arr_10 [i_0] [i_1] [i_1] [i_0] [i_6])));
                            arr_18 [i_5] [i_1] [(_Bool)1] [i_5] = ((((/* implicit */_Bool) arr_12 [7ULL] [7ULL] [i_5] [13U])) ? (arr_14 [i_1] [4] [9U] [21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_6])))) && (((/* implicit */_Bool) ((arr_16 [i_6] [i_5] [i_2] [i_5] [(_Bool)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [5] [i_0])))))))))));
                        }
                        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_2] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)11]))) : (((((/* implicit */_Bool) (~(arr_16 [i_0] [(signed char)12] [i_0] [i_2] [(signed char)12])))) ? (max((((/* implicit */long long int) arr_4 [i_1])), (arr_12 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */long long int) (+(arr_4 [i_2]))))))));
                    }
                    for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [(short)16] [i_7] [i_1] [i_0] = ((/* implicit */short) (~(max((((((/* implicit */int) arr_22 [14] [i_1] [i_7] [i_7] [i_7] [i_1])) & (((/* implicit */int) arr_1 [i_0])))), ((-(arr_15 [i_7] [i_0] [i_1] [i_0])))))));
                        var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_7] [i_7 + 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])) : ((-(arr_15 [i_0] [i_1] [i_2] [i_7 - 2]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [4LL] [i_7] [i_2])))))));
                        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_1 [i_2]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [23U])) - (((/* implicit */int) arr_7 [i_7]))))) ? ((-(15785430412013057407ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_7] [i_7])))))))));
                    }
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_16 [i_0] [i_0] [i_0] [i_2] [i_2])));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_25 = ((/* implicit */long long int) arr_19 [i_8] [i_1]);
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_27 [(unsigned char)18] [i_8]))));
                }
                for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17715))))) ? (((/* implicit */int) arr_28 [i_1])) : (((/* implicit */int) (short)12503))))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_4 [i_9]), (((/* implicit */unsigned int) min((arr_25 [i_0]), (((/* implicit */int) arr_9 [i_0] [i_10] [i_0])))))))) > (arr_24 [i_0] [i_11]))))));
                                arr_36 [i_0] [(unsigned short)16] [(_Bool)1] [17] [i_10] [i_10] [i_11] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_34 [3] [i_1] [i_1] [i_10] [(unsigned short)17]))))), (arr_29 [(short)20]))), (((/* implicit */unsigned long long int) (-(arr_20 [(unsigned short)22] [(unsigned short)22] [(unsigned short)22] [i_10] [i_10]))))));
                            }
                        } 
                    } 
                    var_29 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (-(arr_16 [i_9] [i_1] [16ULL] [i_1] [16ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_1] [i_1] [i_1]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (2661313661696494205ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [8] [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_0]))))) : (((((/* implicit */_Bool) arr_33 [i_9] [(signed char)15] [i_1] [i_0])) ? (arr_31 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_1] [23] [14] [i_0])))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            arr_42 [i_13] [i_1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(signed char)11] [i_1] [i_13] [i_13])) ? (((((/* implicit */_Bool) min((arr_20 [i_13] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) arr_19 [i_0] [(_Bool)1]))))) ? (((/* implicit */unsigned int) (~(arr_39 [i_0] [i_1] [i_12] [i_13])))) : ((-(arr_32 [i_0] [i_1] [i_12] [i_13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [14] [i_12])))));
                            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) -1757569677)) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [(short)19] [(_Bool)1] [i_13])))))))) ? (((/* implicit */int) arr_28 [(signed char)4])) : (((/* implicit */int) arr_28 [i_1]))));
                            arr_43 [i_0] [i_13] [i_12] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [(signed char)9] [1U]))))) / (((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_12] [i_13])) ? (arr_6 [i_0] [i_1] [22]) : (((/* implicit */unsigned long long int) arr_4 [i_12])))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_22 [i_0] [(unsigned short)20] [i_13] [i_12] [i_13] [i_13])) * (((/* implicit */int) arr_3 [i_13])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_12)))) ? ((+(var_12))) : (var_12))))))));
}
