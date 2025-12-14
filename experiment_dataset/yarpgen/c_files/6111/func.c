/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6111
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) min((var_1), (((/* implicit */signed char) (_Bool)1)))))) == (min(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (650349965) : (((/* implicit */int) var_4)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (var_8)))) ? (max((650349947), (((/* implicit */int) arr_8 [i_0] [i_1] [4ULL] [i_3])))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((2332726280U) ^ (((/* implicit */unsigned int) -1253245570)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 1] [i_3] [i_2 - 2] [i_2 - 2] [i_1 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                                var_18 &= ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 3] [i_2 - 2] [i_3] [i_2 - 2])) ? (9200304308845537191LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [22ULL] [(unsigned short)8] [i_3] [i_4 + 1])))))));
                                arr_14 [i_2] [i_0] [i_0] [i_0] [i_2] [8LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1749008793)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_4] [i_4 - 1] [i_0]), (((/* implicit */short) arr_10 [i_4] [i_4 - 1] [i_0] [i_4] [i_0] [i_0] [i_0])))))));
                                arr_15 [(unsigned char)2] [(unsigned char)2] &= ((unsigned long long int) (short)-32508);
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-7845))));
                }
            } 
        } 
        var_20 ^= ((/* implicit */long long int) ((unsigned int) (unsigned char)149));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_21 [i_6] = ((/* implicit */signed char) (unsigned char)255);
            var_21 = ((/* implicit */int) ((long long int) 650349976));
        }
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 13; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                {
                    arr_27 [i_8] [i_8] [i_5] = ((/* implicit */short) min(((~(((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (short)-15484)))))), (((/* implicit */int) var_15))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)121))))) ? (((int) arr_8 [(unsigned char)20] [i_7] [1LL] [i_7])) : (((/* implicit */int) ((unsigned char) arr_25 [i_5] [13] [i_8])))));
                    var_23 = ((/* implicit */signed char) var_11);
                    var_24 = ((/* implicit */long long int) min((((int) arr_25 [i_7 - 1] [i_7 + 1] [i_8])), ((~(((/* implicit */int) arr_10 [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 1] [i_8] [i_7 + 1] [i_7 - 1]))))));
                }
            } 
        } 
        arr_28 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (8U))), (((/* implicit */unsigned int) var_11)))));
        arr_29 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [20U] [i_5] [i_5] [(signed char)21])), (81877705)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (arr_22 [i_5])))) : (((((/* implicit */_Bool) arr_3 [16])) ? (((/* implicit */long long int) arr_3 [14LL])) : (min((-1LL), (((/* implicit */long long int) (unsigned char)129))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 4) 
        {
            var_25 = (i_9 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)53))))), ((-(arr_6 [i_10])))))) ? (((max((arr_9 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */long long int) arr_30 [i_9] [i_9])))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_32 [i_9])))))) : (9223372036854775802LL)))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)53))))), ((-(arr_6 [i_10])))))) ? (((((max((arr_9 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */long long int) arr_30 [i_9] [i_9])))) + (9223372036854775807LL))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_32 [i_9])))))) : (9223372036854775802LL))));
            var_26 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_10 - 1] [i_10 + 1] [i_10 + 1])) && (((/* implicit */_Bool) arr_12 [i_10 - 1] [i_10 + 1] [i_10 + 1]))))), (arr_12 [i_10 - 1] [i_10 + 1] [i_10 + 1])));
        }
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (unsigned char)127);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */int) max((((((_Bool) (unsigned short)52886)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))), (var_14)));
    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((1374417004U) % (((/* implicit */unsigned int) 650349965))))))));
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_7))));
    var_32 = min((var_9), (((/* implicit */long long int) ((((/* implicit */int) (short)28725)) <= (((/* implicit */int) (short)28425))))));
}
