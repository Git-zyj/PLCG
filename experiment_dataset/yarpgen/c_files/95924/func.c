/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95924
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)20161)))))))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28672)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28680)) && (((/* implicit */_Bool) max(((unsigned short)36846), (((/* implicit */unsigned short) arr_0 [i_0]))))))))) : (((((10346945140676910470ULL) << (((9181391304050752229ULL) - (9181391304050752205ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 70368744177663LL))))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            var_18 = ((/* implicit */_Bool) var_7);
            var_19 ^= ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1 - 2] [i_1] [i_1]))))) ? ((-(arr_6 [i_1] [i_1]))) : (max((arr_7 [i_1] [i_2]), (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_2])))))) ^ (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) -70368744177664LL)))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) max((arr_8 [i_2]), (((/* implicit */int) arr_9 [i_2 + 1] [i_1 + 1] [i_1 - 2]))))) > (((((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_2] [i_2])) || (((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (max((arr_7 [i_1] [i_1]), (((/* implicit */long long int) 780641660))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */short) arr_12 [i_1] [i_3] [12] [12]);
                            var_22 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_2] [i_5])) ? (10346945140676910470ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-23)) || (((/* implicit */_Bool) var_11))))) : ((~(337703092))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [(unsigned char)18] [(unsigned char)14] [i_1] [14U]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18220815801820508734ULL)) || (arr_12 [(unsigned char)11] [i_2] [i_4] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 780641663)))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((131071LL) - (131041LL))))))));
                        }
                        for (int i_7 = 3; i_7 < 20; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_2] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1511193395072819182ULL)) ? (var_17) : (((/* implicit */long long int) 337703115))))) : (arr_14 [i_2] [i_2] [i_4] [i_4]))))))));
                            arr_24 [i_1] [i_2] [i_2] [i_4] [i_7] [i_4] [i_7 + 2] = ((/* implicit */short) arr_10 [i_7] [i_2] [i_2] [i_1 + 1]);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((15203199267931548192ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)36868)), (780641660)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)26726))) : ((~(arr_11 [i_1] [i_3] [i_4])))))) : (((((/* implicit */_Bool) ((-780641649) ^ (-780641644)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((7964524159135526838ULL), (((/* implicit */unsigned long long int) (unsigned short)19335))))))));
                            var_27 |= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_3] [i_3] [i_4] [i_7])) ? (((/* implicit */int) arr_10 [i_1] [i_3] [i_4] [i_7])) : (780641660)))) / ((-(arr_13 [i_1] [i_2] [i_2] [i_4] [i_2]))))) >> (((max((((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_3] [i_2]))), ((-(9ULL))))) - (18446744073709551544ULL)))));
                        }
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_1]))) | ((-9223372036854775807LL - 1LL)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_29 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (-3374664640324659709LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        {
                            arr_34 [i_11] [i_10] [i_9] [i_8] [i_1] = ((/* implicit */unsigned int) var_17);
                            arr_35 [(_Bool)1] [i_9] [i_9] [i_9] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12981734107190838464ULL)) && (((/* implicit */_Bool) ((arr_8 [i_9]) / (((/* implicit */int) arr_9 [i_11] [i_9] [6ULL])))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((arr_14 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_8]) | (arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_8]))))));
                            var_31 = ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_9]))) / (arr_7 [i_8] [i_1]));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_10] [i_9] [4ULL] [i_1]))))) ? ((~(arr_7 [i_1] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -3349062326679951643LL)) || (((/* implicit */_Bool) 780641668)))))))))));
                        }
                    } 
                } 
            } 
            var_33 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
        }
    }
    var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-15292))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-1370)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (max((var_5), (((/* implicit */int) var_13)))))))));
}
