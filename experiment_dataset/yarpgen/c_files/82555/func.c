/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82555
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_5)))))) - (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (unsigned short)7285))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_6)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))))) ? ((+(((var_10) ? (var_1) : (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)236), ((unsigned char)128)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((4586912860629823792ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5878)))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))))) - (min((arr_4 [i_0] [i_1 + 2] [i_2]), (arr_4 [i_0] [i_1 - 2] [i_1 + 1])))));
                    arr_9 [i_0] = ((/* implicit */int) arr_7 [12LL] [12LL]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) (((((-(arr_4 [i_0] [(unsigned char)15] [23ULL]))) >= (arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1361010157)) && (((/* implicit */_Bool) (unsigned char)7)))))))) : ((~(((((/* implicit */_Bool) 1361010157)) ? (13105319259976627264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */long long int) max((max((arr_6 [i_4] [i_3] [i_3]), (((/* implicit */signed char) arr_12 [i_3] [i_4])))), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_4] [1] [i_3])) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_4])) : (((/* implicit */int) arr_13 [i_3] [i_4] [i_4])))) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [(unsigned short)19] [i_3] [i_4])) < (((/* implicit */int) arr_10 [i_3]))))))))));
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_1 [0ULL]))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_20 [i_3] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(151382918U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_4] [i_5]))) * (arr_15 [i_4])))) ? ((-(arr_17 [i_3] [i_3] [i_4] [i_4] [i_5] [i_5]))) : (((arr_11 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5])))))))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)5878), (((/* implicit */unsigned short) (short)-18022)))))) : ((+(arr_1 [i_3]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6])))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_4] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28672)) ? (1073741824) : (((/* implicit */int) (short)0))))) : (arr_18 [(_Bool)1] [23ULL] [i_5] [23ULL])))) ? (((((/* implicit */_Bool) ((arr_2 [8U] [10ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned short)18]))) : (arr_4 [i_3] [i_4] [i_5])))) ? (((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [i_3] [i_3])) : (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_6 [14ULL] [14ULL] [14ULL]))) & (arr_11 [i_3]))) : (((((/* implicit */long long int) arr_7 [(signed char)12] [(signed char)12])) + (arr_11 [i_3]))))))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_20 ^= arr_16 [i_3] [(short)24];
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_21 [i_7] [i_7]))));
            var_22 = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_7] [i_7] [i_3]))))), (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_5 [i_3]) : (((/* implicit */int) arr_13 [i_3] [i_7] [i_7]))))))) ? (arr_1 [i_3]) : (((arr_12 [i_3] [i_3]) ? ((~(arr_15 [i_3]))) : (((/* implicit */unsigned long long int) arr_23 [i_3])))));
        }
        for (long long int i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_9 = 2; i_9 < 22; i_9 += 4) 
            {
                arr_28 [i_3] [i_9 - 2] [i_9 - 2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) arr_6 [i_9 + 3] [0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [9LL]))) : (arr_19 [i_3] [(unsigned short)6] [i_3] [i_9 + 2]))) : (((/* implicit */unsigned int) arr_5 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_3] [i_3] [i_9])))) ? (((/* implicit */int) arr_2 [i_8 - 1] [i_9 + 2])) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_3] [22U] [i_9])) < (((/* implicit */int) arr_13 [i_3] [11LL] [i_3])))))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)23462))))), (min((arr_17 [i_3] [i_9] [i_3] [5LL] [i_3] [i_3]), (((/* implicit */long long int) arr_23 [i_3]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_22 [i_10]))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8] [(short)24] [3LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)24]))) : ((-(0LL)))));
                }
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3])) ? (arr_23 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9] [(_Bool)1])))))) ? (((/* implicit */int) arr_6 [i_8 + 2] [i_8 + 2] [i_9])) : ((+(((/* implicit */int) arr_3 [i_3]))))))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_8 + 2] [i_9 + 1])) ? (arr_4 [i_3] [i_8 - 1] [i_9 - 2]) : (arr_4 [i_3] [i_8 + 2] [i_9 + 1]))) : ((+(max((arr_15 [i_3]), (((/* implicit */unsigned long long int) arr_26 [i_3] [i_3] [i_3]))))))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_22 [i_9]))));
                var_27 = min((((/* implicit */unsigned short) arr_13 [i_3] [i_8] [i_9 + 3])), (arr_30 [i_3] [i_3] [i_3] [(signed char)22] [i_9]));
            }
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                arr_33 [i_3] [i_8] [i_8 - 1] = ((/* implicit */_Bool) arr_11 [i_3]);
                var_28 = ((/* implicit */int) max(((~(arr_19 [i_8 + 2] [i_8] [i_8 + 2] [i_8 - 1]))), ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [(signed char)22] [i_11]))) + (arr_32 [i_11] [i_3] [i_3])))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                var_29 = ((/* implicit */unsigned char) arr_19 [14LL] [i_8 - 1] [i_8 - 1] [i_12]);
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [(_Bool)1] [i_3] [i_12])) ? (((arr_22 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_8 + 2]))) : (((arr_16 [i_12] [i_8]) ^ (((/* implicit */unsigned long long int) arr_23 [i_12])))))) : (((/* implicit */unsigned long long int) arr_23 [i_8 + 2]))));
            }
        }
    }
    /* vectorizable */
    for (long long int i_13 = 1; i_13 < 16; i_13 += 1) 
    {
        var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_13] [i_13 + 3] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_13] [12LL] [4U]))) : (arr_31 [i_13] [i_13] [14ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_13] [i_13] [i_13] [18LL])))))) : (arr_4 [(short)0] [i_13 - 1] [i_13 + 1])));
        arr_39 [i_13] = ((/* implicit */unsigned int) arr_4 [20U] [i_13] [i_13]);
        arr_40 [i_13] = ((/* implicit */_Bool) ((arr_22 [20ULL]) ? (((/* implicit */int) arr_3 [i_13 + 1])) : (((/* implicit */int) arr_3 [i_13 + 3]))));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_13])) : (((/* implicit */int) arr_3 [i_13]))))) > (((((/* implicit */_Bool) arr_3 [i_13])) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344)))))));
    }
}
