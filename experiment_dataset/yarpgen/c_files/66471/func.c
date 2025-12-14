/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66471
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (((((8887917307162162240ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (0LL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_2 [i_3 - 1]))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))) ? (((int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_4])) <= (((/* implicit */int) (unsigned char)5))))) : (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) arr_0 [i_0])) : (997861091)))))));
                                var_16 -= ((/* implicit */_Bool) min(((~(2400139515U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 - 2])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_11)))), (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (arr_7 [i_1 - 1] [i_1 - 1] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (((((/* implicit */_Bool) 1894827781U)) ? (((/* implicit */int) var_2)) : (var_0)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) var_11))) : (var_0))))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) arr_14 [10LL]);
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_20 = ((/* implicit */int) -3898728519949543249LL);
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_16 [i_5])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [(unsigned char)5])) : (((/* implicit */int) arr_20 [i_5]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [8] [8] [8]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) arr_20 [i_5]))))) : (((arr_21 [i_5] [i_6] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_22 = ((/* implicit */short) arr_16 [i_5]);
                var_23 = arr_14 [i_6];
            }
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (int i_10 = 3; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) 6304722939954290366LL)) && ((!(((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_10 - 2] [i_10] [(_Bool)1] [(_Bool)1]))))));
                            var_25 = ((/* implicit */short) ((((arr_21 [i_10 - 2] [i_10] [i_10]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10 - 2]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10 - 2]))) ^ (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20736)))));
                            var_26 = ((/* implicit */unsigned short) arr_20 [i_10 + 2]);
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) arr_21 [i_8] [i_8] [i_8]);
                var_28 = ((/* implicit */unsigned int) arr_23 [i_8] [i_8] [20U] [i_5]);
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5610230743385858628ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_0) > (((/* implicit */int) (short)-20724))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30951))) ^ (3332578777128795339ULL)))));
                var_30 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) / (var_9)))) ? (((((/* implicit */_Bool) arr_20 [8U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744))) : (15114165296580756277ULL))) : (max((12788430116403033544ULL), (((/* implicit */unsigned long long int) 0)))))));
                var_31 -= ((/* implicit */short) -1618784692);
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_12 = 3; i_12 < 22; i_12 += 2) 
                {
                    var_32 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_5] [(signed char)15] [(signed char)15] [i_12 + 1] [i_11 + 1] [12U]))));
                    var_33 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1274442312190111287LL)) || (((/* implicit */_Bool) arr_28 [i_6] [i_6])))) && (((/* implicit */_Bool) arr_21 [i_12] [i_12 + 1] [i_11 + 1]))));
                }
                for (short i_13 = 2; i_13 < 20; i_13 += 3) 
                {
                    var_34 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_29 [i_5] [i_11 + 1] [i_13 - 1])))), (var_11)));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_23 [i_13] [i_13] [10LL] [i_13 + 2])) : (((/* implicit */int) arr_23 [i_13] [i_13 + 2] [i_13] [i_13 - 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_13 - 1] [(signed char)19] [i_13] [i_13 + 3])) << (((-3898728519949543244LL) + (3898728519949543245LL)))))) : (((((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13 - 2] [i_13 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13] [i_13] [i_13 - 1] [i_13 - 1]))) : (arr_29 [i_13 - 2] [i_6] [i_11])))));
                }
            }
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32717)) && ((!(((((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_15 [i_5]))))))));
            var_37 = ((/* implicit */short) min((((/* implicit */long long int) max((arr_33 [i_6] [i_6] [i_5] [i_5]), (arr_33 [i_6] [i_6] [i_5] [i_5])))), (min((((/* implicit */long long int) arr_33 [0ULL] [i_6] [i_6] [i_5])), (1961110961995842142LL)))));
        }
        var_38 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_34 [i_5] [i_5] [15])), (((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [16U])) + (2147483647))) << (((((/* implicit */int) arr_33 [i_5] [i_5] [i_5] [i_5])) - (1)))))) ? ((~(((/* implicit */int) arr_35 [i_5] [i_5] [i_5] [i_5])))) : (((/* implicit */int) (short)-32717))))));
    }
}
