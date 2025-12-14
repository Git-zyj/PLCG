/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87931
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12181324974703010540ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) (_Bool)0)))))))) ^ (((/* implicit */int) max(((short)-32762), (((/* implicit */short) ((unsigned char) 9757483006953367054ULL)))))))))));
                        var_13 = min((max((min((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_2))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [19])))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_5))), (((arr_1 [i_0]) & (((/* implicit */int) (unsigned short)32293))))))));
                        var_14 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) var_8))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */short) var_2);
                        var_16 = ((/* implicit */unsigned int) min((var_16), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) (short)10716)) : (5)))), (var_10)))));
                    }
                    for (short i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        var_17 |= ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_10 [i_5 - 2] [i_5 + 2] [i_5 + 1] [i_1] [i_5 - 1])))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] = ((/* implicit */unsigned char) (short)-32762);
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_0] [i_2] [i_2]))) && (((/* implicit */_Bool) max(((-(arr_8 [i_0] [i_1] [i_0] [i_5]))), (((/* implicit */int) (signed char)112))))))))));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((int) (short)32754))))) > (min((((/* implicit */unsigned long long int) arr_16 [i_5 + 2] [i_1] [i_2] [i_1])), (((((/* implicit */_Bool) arr_6 [i_5] [i_2] [i_1] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))))));
                    }
                    var_20 = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)163)), (arr_2 [i_0] [i_0])));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_9 [i_1] [i_1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            {
                var_23 -= ((/* implicit */signed char) max(((short)-32744), (var_4)));
                var_24 = ((/* implicit */signed char) (+(arr_13 [i_6] [i_6] [i_6] [i_7])));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 3; i_8 < 11; i_8 += 4) 
                {
                    var_25 ^= ((/* implicit */int) max(((short)29089), (((/* implicit */short) (_Bool)0))));
                    arr_24 [i_8] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_8 - 2] [i_8])) >= (arr_20 [i_8 - 2]))))) : (((arr_21 [i_8 + 1] [i_8]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (short)-32744);
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            {
                var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_2))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)(-127 - 1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_10] [1LL] [i_10] [i_9])) : (((/* implicit */int) var_8))))))))));
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 11; i_13 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_12 [i_13] [(signed char)1] [i_9] [i_11]))));
                                var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_35 [i_13 + 1] [1LL] [i_13] [i_13] [2]), ((!(((/* implicit */_Bool) arr_14 [i_12] [i_12] [i_11] [i_10])))))))) : (((arr_10 [i_13 + 1] [8] [(short)10] [i_10] [i_13 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) min((((/* implicit */int) arr_30 [i_10])), (arr_14 [i_9] [i_9] [i_9] [5LL]))))), (min((((unsigned short) arr_27 [i_9] [i_10])), (((/* implicit */unsigned short) arr_36 [i_9] [i_9] [i_9] [i_9]))))));
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_9] [i_10] [i_10] [i_10]), (arr_7 [i_9] [i_10] [i_9] [i_9])))) ? (((/* implicit */int) min((arr_7 [i_9] [(unsigned char)6] [i_9] [i_9]), (arr_7 [i_10] [i_9] [i_10] [i_9])))) : (((((/* implicit */_Bool) arr_7 [i_9] [15ULL] [i_10] [15ULL])) ? (var_7) : (((/* implicit */int) (signed char)66)))))))));
                var_32 = ((/* implicit */short) (+((~(arr_34 [i_9] [(short)3] [i_10] [i_10])))));
            }
        } 
    } 
}
