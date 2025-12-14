/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61123
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (-6950740936430656690LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)22924)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) : (1096391651U)));
    }
    var_14 |= ((/* implicit */_Bool) var_10);
    var_15 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-22925)) | (((/* implicit */int) var_3))))) : (((long long int) (signed char)-113))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1])))), (((/* implicit */int) var_1)))))));
                    arr_11 [i_1] [i_1] [6U] = ((/* implicit */unsigned char) ((min(((!(((/* implicit */_Bool) var_7)))), (arr_9 [i_1] [i_1] [i_1]))) ? (((/* implicit */int) (unsigned short)52459)) : ((-((+(((/* implicit */int) (unsigned char)56))))))));
                    var_18 = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
        var_19 *= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_1)), (3267832790U)))));
        var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (((/* implicit */short) arr_8 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)76)))) : (max((arr_7 [i_1] [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) (short)27387)))))))));
        var_21 = ((/* implicit */short) ((unsigned int) 5753630115687280189ULL));
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-68))));
        var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (var_10)))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_4]))) ? (((/* implicit */unsigned long long int) (+(3267832794U)))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (1757686462085659768ULL) : (((/* implicit */unsigned long long int) 4294967289U))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) var_11);
                var_24 = ((/* implicit */unsigned char) ((2427938470147706762LL) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 8ULL))))));
            }
            for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((arr_24 [i_7 + 1]) ? (((arr_24 [i_7 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7 + 1]))) : (-2427938470147706779LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_24 [i_7 + 1]), (arr_24 [i_7 + 1]))))))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            var_26 ^= ((/* implicit */short) min(((-(((/* implicit */int) (short)-19519)))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_9)))))));
                            arr_30 [i_4] [i_5] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 1027134510U)) : (max((arr_18 [i_7] [i_7 - 1] [i_7 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_7] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))))));
                            arr_31 [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned long long int) ((short) ((short) arr_18 [i_7 + 1] [i_7 - 1] [i_5])));
                        }
                    } 
                } 
                var_27 |= ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
            }
            arr_32 [i_4] [i_4] [i_5] = var_6;
        }
    }
}
