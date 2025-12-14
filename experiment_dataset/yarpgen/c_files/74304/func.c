/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74304
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(arr_1 [i_0])));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0])))))));
            var_17 = ((/* implicit */unsigned char) ((var_15) * (((/* implicit */unsigned long long int) arr_0 [(signed char)13]))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_6 [(signed char)21] [i_0] [i_1]);
        }
        for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2 + 1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_2 - 2] [i_0]))));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(arr_5 [i_0])));
            /* LoopSeq 4 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_19 += ((/* implicit */_Bool) var_11);
                var_20 = arr_4 [i_3];
            }
            for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (arr_10 [i_0]) : (((/* implicit */unsigned long long int) 2143289344))));
                arr_16 [i_4] = ((/* implicit */unsigned int) arr_5 [i_4 + 1]);
                var_22 ^= arr_6 [i_4] [i_2] [i_4];
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                arr_21 [i_2] [20LL] [20LL] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [15LL] [i_2] [18])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_5 [i_0])));
                arr_22 [i_0] [i_2] [i_5] = ((/* implicit */signed char) var_4);
                var_23 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0])));
            }
            for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) 
            {
                arr_25 [i_6] [i_2] = (!(((/* implicit */_Bool) arr_12 [i_2 + 3] [i_2 - 2] [(_Bool)1])));
                arr_26 [i_2] [i_2] [i_6] = ((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_6 - 2]);
                var_24 &= ((/* implicit */signed char) arr_17 [i_6 - 1] [i_6] [i_6]);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_13 [i_6] [13] [i_6 + 1] [20ULL]))));
                arr_27 [i_0] [i_6] [i_6] = ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_0] [i_6 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11));
            }
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2 - 2] [i_2])) ? (((/* implicit */int) arr_12 [i_0] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [(signed char)4] [i_2]))));
        }
        arr_28 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)106)) : (var_13)))));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_27 *= ((/* implicit */_Bool) (signed char)-113);
        arr_32 [4ULL] [i_7] = ((/* implicit */signed char) var_4);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 2) 
        {
            arr_35 [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_29 [i_8]) : (arr_29 [i_7])))) ? (var_6) : (((/* implicit */int) var_7)))))));
                var_29 ^= ((/* implicit */unsigned long long int) arr_19 [i_8] [i_7] [i_7]);
                var_30 = ((((/* implicit */_Bool) (signed char)-41)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_9])) : (((/* implicit */int) arr_19 [i_7] [i_8] [i_8])))) : (((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_15)) ? (arr_14 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            }
        }
        var_32 = ((int) arr_24 [i_7] [i_7]);
        var_33 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -5471982060986769704LL))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_7] [i_7] [i_7]))))) : (min((max((3668305956U), (((/* implicit */unsigned int) -2143289365)))), (((/* implicit */unsigned int) arr_7 [i_7]))))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 2) 
    {
        arr_40 [i_10] [12ULL] = ((/* implicit */unsigned int) (_Bool)1);
        arr_41 [i_10] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-27490)) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_10])) ? (((/* implicit */int) arr_9 [3U] [i_10] [3U])) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)69))))) == (max((((/* implicit */unsigned long long int) var_1)), (var_12))))))));
    }
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-119)) : (var_6)))))) ? (((/* implicit */int) (signed char)74)) : ((+(((/* implicit */int) var_8))))));
    var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) <= (var_14))))) : (max((((/* implicit */unsigned long long int) var_11)), (var_12)))))) ? (((((/* implicit */_Bool) (-(-2023832575)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))))));
}
