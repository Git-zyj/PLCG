/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67236
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((18446744073709551615ULL) >> (((/* implicit */int) (_Bool)1))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)80)))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_2] [i_0]))))))));
                    var_20 += ((/* implicit */long long int) ((max((((875356740391118241ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2287828610704211968LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1)))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 3])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2287828610704211968LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((_Bool)1)))))) : ((+(((/* implicit */int) (_Bool)1))))));
                    arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) arr_9 [i_1])) && (((/* implicit */_Bool) (short)-22381)))) || (((((/* implicit */_Bool) arr_8 [i_0])) || ((_Bool)1)))))));
                    arr_12 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [i_3]) | (arr_3 [i_0 + 1])))) | (arr_2 [i_0])));
                }
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    arr_17 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 3])))));
                    arr_18 [i_4] [i_4] = ((/* implicit */long long int) arr_14 [i_0] [i_0 + 2] [i_0 + 1]);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 3]))) : (arr_2 [i_0 + 3])));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_4] [i_6])) : (((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_6] [i_6] [i_6])))))) ? (((((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) - (((/* implicit */int) var_14)))) : (((/* implicit */int) (_Bool)1))))));
                                var_23 = 361495197193618965LL;
                                arr_23 [i_0] [i_4] [i_4] = (-(((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6] [i_0] [i_1])) && (((/* implicit */_Bool) var_14))))) - (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) >= (arr_21 [i_4] [i_1] [i_5])))))));
                                arr_24 [i_0] [i_4] [i_4] [i_6 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)14] [i_4] [i_6])) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0 + 3] [18LL])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) 6830093138626175393LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0 + 2] [i_5 + 1] [i_5 - 2] [i_4] [i_6 + 1] [i_6])) / (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    arr_29 [i_0 + 3] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-28998)), (min((var_5), (var_1)))))), ((~(((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_7] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_7]))) : (3535564272U)))))));
                    arr_30 [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_15 [(short)0] [i_1] [i_1] [i_1]))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 3; i_8 < 20; i_8 += 2) 
                {
                    arr_34 [i_0 + 3] [i_1] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [(unsigned short)0] [(signed char)20] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62110)) ? (((/* implicit */int) arr_15 [i_1] [i_8] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((short) arr_25 [i_0] [i_0])))));
                        arr_38 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) (-(arr_37 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_8 - 3])));
                    }
                    arr_39 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((7669597723608587936LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    arr_40 [i_8] [i_1] [i_0] = ((long long int) arr_9 [i_0]);
                }
                arr_41 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        {
                            arr_46 [i_0] [i_1] [i_10] [i_11] [i_10] [i_11] = ((/* implicit */unsigned int) (_Bool)1);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -6830093138626175393LL))) ? (var_17) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_0] [i_0 + 1]))))))))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0])))))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((var_16) - (1719851951U))))))));
                            }
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */signed char) ((((((long long int) (unsigned char)116)) | (((long long int) arr_32 [i_1] [i_1])))) ^ (((/* implicit */long long int) (~((~(((/* implicit */int) arr_25 [i_0] [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            {
                arr_55 [i_13] [i_13] [i_14] = ((/* implicit */unsigned short) (((((!((_Bool)1))) && (((/* implicit */_Bool) ((unsigned short) arr_27 [i_14] [i_13]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)58990)), ((~(((/* implicit */int) var_13))))))) : (var_16)));
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((((/* implicit */int) arr_48 [i_13] [i_13] [i_13] [i_13] [i_13] [i_14])) >= (arr_3 [i_13])))))), (((((/* implicit */_Bool) arr_53 [i_13] [i_14] [i_14])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [2LL] [i_14] [i_14] [i_14]))))))))));
                var_30 = ((max((17807379884196509096ULL), (((/* implicit */unsigned long long int) var_1)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_13] [i_13] [i_14]))));
                arr_56 [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) 8372224)) ? (((/* implicit */unsigned long long int) 343102504)) : (639364189513042519ULL)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_45 [i_13] [i_13] [i_13] [2LL] [i_14] [i_13])) : (((/* implicit */int) max((arr_52 [i_13] [i_14] [i_14]), (((/* implicit */unsigned short) (_Bool)0))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_53 [i_14] [i_13] [i_13])), (6917524914670394504ULL)))) ? (((((/* implicit */_Bool) arr_13 [i_13] [i_13])) ? (((/* implicit */int) arr_50 [i_14])) : (((/* implicit */int) arr_36 [i_13] [i_13] [i_13] [i_13])))) : (((((/* implicit */_Bool) arr_3 [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_54 [i_13]))))))));
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)65513)) : (2147483647))) << ((((-(((/* implicit */int) arr_47 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_14] [i_13] [i_13] [i_14])))) - (9582))))))));
            }
        } 
    } 
}
