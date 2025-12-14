/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84770
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) (_Bool)1);
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1086135392))));
        var_19 = ((/* implicit */_Bool) 18446744073709551600ULL);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = arr_0 [(signed char)4];
        var_20 &= ((/* implicit */int) arr_1 [i_1]);
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((((/* implicit */_Bool) 8388607U)) ? (18446744073709551599ULL) : (16ULL))), (((/* implicit */unsigned long long int) arr_0 [i_1])))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((arr_7 [i_2]) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)16)))))));
        arr_9 [(unsigned char)5] = ((/* implicit */long long int) arr_7 [(_Bool)1]);
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) arr_10 [i_2] [i_3]);
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2]))))) ? (18446744073709551600ULL) : ((~(arr_8 [i_2])))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_4]) ? (arr_8 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_8 [i_2]))))) : (((((/* implicit */int) arr_11 [i_4])) - (((/* implicit */int) (_Bool)1))))));
            arr_15 [i_2] = ((/* implicit */unsigned int) ((arr_7 [i_2]) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) ((signed char) var_11)))));
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_2] [i_2])))) >> (((arr_17 [i_5] [i_2]) - (10609054648071637923ULL)))));
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) ((unsigned char) arr_18 [i_2] [i_5] [i_5] [i_5]));
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_9);
                var_28 = ((/* implicit */_Bool) arr_20 [i_2] [i_5] [i_5] [i_2]);
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
            {
                arr_26 [i_2] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [15ULL] [i_5])))) ? (((((/* implicit */_Bool) var_10)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34)))));
                var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))))) || (((/* implicit */_Bool) ((arr_25 [(unsigned char)3] [i_5] [i_7]) ? (arr_17 [i_5] [i_5]) : (arr_8 [i_7]))))));
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_30 -= (-(((var_0) & (((/* implicit */unsigned int) 268435456)))));
                    arr_32 [i_5] = ((/* implicit */_Bool) var_8);
                    arr_33 [i_5] [i_5] [i_9] = ((/* implicit */_Bool) (unsigned char)140);
                }
                var_31 = ((/* implicit */unsigned char) 18446744073709551602ULL);
                var_32 = ((/* implicit */short) ((unsigned long long int) arr_29 [i_2] [i_5] [i_5] [i_8]));
            }
            for (long long int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    arr_39 [i_2] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_5] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_38 [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_11 + 3] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2]))) : (3298312013U))))));
                    arr_40 [i_5] [i_5] [i_10] [i_11] = ((/* implicit */int) (((+(3298312035U))) != (996655278U)));
                    var_33 = ((/* implicit */signed char) (+((-(arr_17 [i_5] [i_5])))));
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_2] [i_2] [i_5] [i_11])) & (((/* implicit */int) arr_29 [i_2] [i_5] [i_5] [i_2]))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    arr_44 [i_12] [i_5] [1LL] [i_5] [i_5] [i_2] = ((_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) arr_41 [i_2] [i_5] [i_10] [i_5] [i_12] [i_12])) : (((/* implicit */int) arr_30 [3] [i_5] [i_5] [i_10] [i_5] [4ULL]))));
                    arr_45 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) arr_28 [i_2] [i_2] [i_10]);
                }
                var_35 = ((/* implicit */unsigned char) (_Bool)1);
                arr_46 [i_5] [i_5] [i_10] = ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) arr_16 [i_5])) : (var_6));
                arr_47 [i_2] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)187)) ? (((unsigned long long int) arr_13 [i_2] [i_5] [i_10])) : ((~(2580021622038217187ULL)))));
            }
            arr_48 [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) ((_Bool) arr_18 [i_2] [i_2] [i_5] [i_5]))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)15))))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)188)) > (((var_11) ? (((/* implicit */int) arr_20 [i_2] [i_5] [i_2] [i_2])) : (268435478)))));
        }
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3298312013U)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_12)))))));
        var_38 = ((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_2] [i_2]);
    }
    var_39 &= ((/* implicit */_Bool) var_7);
}
