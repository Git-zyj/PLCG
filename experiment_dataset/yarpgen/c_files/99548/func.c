/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99548
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_1))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(unsigned short)7] [i_0]))))) ? (((-1) + (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((arr_1 [2U]), (var_0))))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_5 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) arr_3 [21U] [21U]))))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_1))) : (((/* implicit */unsigned int) (-(arr_4 [i_1])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_1)))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_5)))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_14 += ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (arr_10 [i_4] [i_2 + 4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                            arr_16 [i_1] [i_2] [i_3] [0LL] [i_5 + 1] [i_3] = ((/* implicit */short) var_6);
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_2] [(short)10] [(short)10] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4))))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)108))))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                        arr_21 [i_1] [13ULL] [i_2 - 2] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [(unsigned short)12] [i_1])) ? (((/* implicit */int) arr_11 [1U])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [8ULL] [i_1 + 2] [i_1] [i_1]))) == (var_1)))))) : (((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7))))) : (((/* implicit */int) var_7))))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_26 [i_1 - 1] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (signed char)-107)) + (((/* implicit */int) (signed char)106)))) : (((/* implicit */int) var_0))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ^ (((((/* implicit */_Bool) var_0)) ? (arr_22 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12288))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_7] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        for (long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_18 = (+((((!(((/* implicit */_Bool) var_6)))) ? ((+(arr_29 [i_8]))) : (((((/* implicit */int) var_9)) % (((/* implicit */int) var_7)))))));
                                arr_31 [i_8] [i_9] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                                var_19 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) - (arr_10 [i_1] [i_1] [i_1 + 1]));
                                arr_32 [i_10] [i_9 + 1] [(signed char)7] [i_8] [9ULL] [(unsigned short)21] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((9223372036854775807LL) ^ (-3435334397393283218LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                arr_40 [i_1] [i_1] [i_7] [i_8] [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) var_9);
                                arr_41 [i_1 + 2] [i_7] [i_8] [i_11] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_22 [i_1] [i_1]), (((/* implicit */long long int) var_6)))))))), ((~((-9223372036854775807LL - 1LL)))));
                                arr_42 [i_1] [i_1] [16] [i_1] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(unsigned short)10] [2U] [2U] [0])) ? (var_10) : (((/* implicit */unsigned int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) arr_17 [(_Bool)1] [i_8] [i_1] [i_1])) % (((/* implicit */int) var_6))))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_11)) > (((/* implicit */int) var_8))))))) : (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        arr_43 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_10)))))) ? (((((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9650)))))) ? (((/* implicit */long long int) 65535)) : (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [20U] [20U] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)107))) : (var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_1]))))) ? (max((arr_8 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_1)) ? (arr_29 [i_1]) : (((/* implicit */int) var_5)))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        arr_47 [i_13] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) ? (arr_13 [i_13] [i_13] [i_13] [i_13] [i_13] [20U] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (arr_29 [(signed char)13]))) <= (((((/* implicit */_Bool) arr_36 [i_13] [5ULL] [(_Bool)1] [(unsigned short)13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))))));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)57)) == (((/* implicit */int) (unsigned char)187))));
        arr_48 [i_13] = ((((arr_4 [i_13]) / (((/* implicit */int) var_8)))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))))));
        arr_49 [8ULL] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [17U] [21ULL] [21ULL] [17U] [11LL] [i_13]))));
    }
    var_22 = ((/* implicit */unsigned int) var_2);
}
