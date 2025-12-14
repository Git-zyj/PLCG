/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9535
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) arr_0 [1LL]);
        var_14 = ((/* implicit */_Bool) var_6);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2 + 1])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [(unsigned char)5] [(unsigned short)9] [(unsigned char)5])) : (((/* implicit */int) arr_0 [i_3]))))) : (((long long int) var_10))));
                                arr_14 [5] [i_0] = ((/* implicit */_Bool) -7396444225484227740LL);
                                var_16 = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */int) var_2);
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((long long int) arr_9 [i_0] [i_0] [(signed char)0]));
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned long long int) arr_15 [i_5]);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) (signed char)-126);
                            var_20 = ((/* implicit */unsigned int) (+((-((-(((/* implicit */int) arr_18 [i_6] [i_6]))))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_24 [i_8 - 1] [i_6] [i_7])) / (((/* implicit */int) arr_18 [i_5] [i_8 - 2])))))))));
                            var_22 += ((/* implicit */signed char) arr_24 [i_8] [16] [i_6]);
                        }
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-66540115)))) ? (((((-7396444225484227740LL) + (9223372036854775807LL))) << (((((-5625271977773264307LL) + (5625271977773264349LL))) - (40LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_16 [10ULL]), (arr_23 [i_6] [0LL] [i_6] [15])))))))) ? ((+(((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((21LL), (((/* implicit */long long int) arr_23 [i_6] [i_6] [i_6] [i_6]))))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_10))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [12ULL]))))))))));
                            arr_33 [(signed char)21] [(unsigned char)21] [i_6] [(unsigned short)13] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-5625271977773264287LL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)31))))) ? (arr_26 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [(unsigned short)24] [i_6] [i_8 - 1] [i_10] [(_Bool)1]))))))));
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8 + 3] [(unsigned short)9] [i_8 - 2] [i_8 - 1]))) / (var_7))))));
                            var_25 = arr_25 [i_8 + 2] [3LL] [(unsigned short)14] [(signed char)16];
                        }
                        for (short i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            arr_36 [i_5] [i_5] [i_7] [(unsigned short)22] [13] [i_6] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_24 [i_5] [18ULL] [7ULL])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_25 [i_5] [i_5] [i_8 + 1] [i_5])))) == ((((_Bool)1) ? (arr_32 [i_11] [i_6] [i_7] [i_6] [(unsigned short)17]) : (arr_19 [i_6] [(short)13] [(signed char)5])))))));
                            arr_37 [i_6] [i_6] [i_7] [i_5] [(signed char)10] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 5625271977773264306LL)) ? (arr_22 [i_8 + 1] [i_8 + 3] [i_8 + 1]) : (arr_22 [i_8 - 1] [i_8 - 2] [i_8 + 3])))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [2ULL]))) | (min((arr_19 [i_5] [i_7] [20]), (((/* implicit */unsigned long long int) arr_22 [i_5] [i_5] [(unsigned char)3])))))) % (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) % ((~(((/* implicit */int) var_5))))))))))));
                            var_27 = ((/* implicit */int) min((max((((((/* implicit */_Bool) 5625271977773264307LL)) ? (arr_20 [3ULL] [i_6]) : (((/* implicit */long long int) arr_21 [(unsigned short)10] [i_7] [(unsigned char)7])))), (5625271977773264315LL))), (((/* implicit */long long int) max((max((((/* implicit */int) arr_30 [i_5] [i_6] [i_5] [i_6] [i_7])), (1632823319))), (((/* implicit */int) var_2)))))));
                            var_28 = ((/* implicit */long long int) var_3);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_29 = ((((/* implicit */_Bool) -7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))));
                            var_30 = var_6;
                        }
                    }
                } 
            } 
        } 
    }
}
