/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82209
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_12))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1 + 3] [i_1] [9U]) >> (((arr_1 [i_0]) - (647278370)))))) ? (((/* implicit */unsigned long long int) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))) : (var_2))))))) : (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1 + 3] [i_1] [9U]) >> (((((arr_1 [i_0]) - (647278370))) + (1881546161)))))) ? (((/* implicit */unsigned long long int) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))) : (var_2)))))));
                    var_18 = ((/* implicit */signed char) arr_3 [i_0]);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_0) / (((/* implicit */int) arr_4 [i_1] [i_2]))))))) ? (((/* implicit */int) (((-(var_8))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)113)) == (((/* implicit */int) (_Bool)0))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_5 + 4] [i_5 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_21 [i_5] [i_3] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (short)28073)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28079))) : (-6977996109331214642LL)));
                                var_20 = ((/* implicit */signed char) (-((+(1588889086)))));
                                var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
                                var_22 = ((((/* implicit */int) arr_15 [i_6] [i_6 - 1] [i_3] [i_5 + 2])) / (((/* implicit */int) var_3)));
                                var_23 = ((/* implicit */unsigned char) ((arr_17 [i_5 - 1] [i_5 + 1] [i_3] [i_6 - 2] [i_7] [i_7]) << (((((/* implicit */int) arr_14 [i_6] [i_6 + 1] [(unsigned short)3])) + (36)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-29176))));
                }
                var_25 = ((/* implicit */unsigned short) arr_15 [i_3] [i_3] [i_3] [i_4]);
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_3] [i_4] [i_3])) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_3] [i_4] [i_4])))) : (((/* implicit */int) min((var_12), (arr_18 [i_3] [i_3] [i_3] [i_4] [i_4]))))));
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_27 [i_9] [i_9 - 2] [i_9 + 3] [i_9] [i_9]))))));
                                var_28 = ((/* implicit */unsigned char) (((~(2088247060623608809ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_9 + 2] [i_9 - 1] [i_3] [i_9 - 1])) | (((/* implicit */int) arr_15 [i_9 + 1] [i_9 + 2] [i_3] [i_9 - 2])))))));
                                var_29 = ((/* implicit */int) min((var_29), (((((((/* implicit */int) arr_19 [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_9 - 1])) | (((/* implicit */int) arr_19 [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9] [i_9 - 2])))) ^ (((/* implicit */int) ((arr_20 [i_8] [i_9] [i_8] [i_9] [i_9 - 1]) || (arr_20 [i_3] [i_3] [i_3] [i_8] [i_9 - 2]))))))));
                                var_30 = ((/* implicit */signed char) (-(min((arr_28 [i_4] [i_8] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 - 2]), (((/* implicit */unsigned int) arr_11 [16ULL] [6U] [16ULL]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        for (short i_12 = 1; i_12 < 23; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_30 [i_12 - 1]))));
                    var_32 = ((/* implicit */signed char) min((((/* implicit */int) var_7)), (((((((/* implicit */_Bool) arr_30 [(unsigned short)7])) ? (((/* implicit */int) arr_31 [10U] [i_13] [i_13])) : (((/* implicit */int) arr_31 [i_11] [i_12] [(unsigned short)20])))) | (((/* implicit */int) arr_35 [i_12] [(unsigned char)23] [i_11] [i_13]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        for (short i_15 = 3; i_15 < 9; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                {
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((arr_22 [16ULL] [i_16] [i_15] [16ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_15 + 1] [i_15 + 1] [i_15 - 2]), (arr_14 [i_15 + 1] [i_15 + 1] [i_15 - 2]))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 4; i_17 < 8; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_30 [i_15 + 1])) + (11928))))));
                        var_35 = ((/* implicit */unsigned short) (+(977606744)));
                        arr_51 [i_14] [i_16] [i_15] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) max(((signed char)-121), ((signed char)83)))) ? (((/* implicit */int) arr_15 [i_14] [i_15 - 3] [i_14] [i_17])) : (((/* implicit */int) min((arr_15 [i_14] [i_15 - 3] [i_14] [i_17 - 3]), (arr_15 [i_14] [i_15 + 1] [i_14] [i_17 - 4]))))));
                        arr_52 [i_14] [i_14] [i_17 - 4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((3429956598U), (((/* implicit */unsigned int) (short)28077))))), (((arr_27 [i_14] [i_15 - 3] [i_17 - 4] [i_17] [i_17 + 2]) << (((arr_27 [i_14] [i_15 - 2] [i_17 - 3] [i_17] [i_17 - 2]) - (4873496120407017437LL)))))));
                    }
                }
            } 
        } 
    } 
}
