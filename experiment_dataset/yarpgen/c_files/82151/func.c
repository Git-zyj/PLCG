/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82151
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1] [i_0])) ? (509014473) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1]))))));
                            var_12 = ((/* implicit */int) ((unsigned short) ((short) ((var_1) | (0)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) arr_10 [i_1 - 1] [i_5 - 1] [i_5] [i_5 + 1])) % (var_0))));
                            arr_14 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((long long int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)123))) ^ (arr_9 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) 6U)))));
                            var_14 = ((/* implicit */signed char) ((long long int) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_4] [i_5] [i_1])) ^ (((/* implicit */int) (short)-32554)))) & (max((arr_10 [i_0] [i_1] [i_4] [16]), (arr_12 [i_0] [i_0] [i_1 - 1] [i_4] [i_5]))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_0]))))) & (min((var_9), (((/* implicit */long long int) 4294967289U)))))) + (((long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_5 [i_0] [7] [i_0]) : (var_6))))));
                var_15 = ((/* implicit */unsigned short) (-(((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_9 [i_0] [i_0] [i_0]))) - (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_1])), (arr_12 [i_1] [0LL] [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_6 + 3] [i_7] [i_0] [i_6] = ((/* implicit */short) ((max((var_7), (((/* implicit */unsigned int) var_10)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (short)2)) - (((/* implicit */int) (short)-47)))))));
                                var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) (-((+(((/* implicit */int) var_8))))))), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) - (var_9))) + (((((/* implicit */long long int) arr_19 [19U] [i_8] [i_6] [i_7] [i_8])) + (arr_6 [i_1] [i_1] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        arr_29 [i_9] [i_9] = ((((long long int) 922863537U)) | (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_17 [i_9] [i_9] [i_9] [i_9]))));
        var_17 = ((/* implicit */short) ((((((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [i_9])) + (((/* implicit */int) (short)2)))) * ((~(((/* implicit */int) var_8))))));
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        arr_33 [i_10] = ((/* implicit */unsigned int) ((max((-1144641216644902580LL), (var_0))) & (((((max((var_0), (arr_17 [i_10] [i_10] [18U] [i_10]))) + (9223372036854775807LL))) >> (min((((/* implicit */long long int) arr_1 [i_10] [(signed char)20])), (arr_9 [2U] [18] [2U])))))));
        var_18 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_10])))) && (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) arr_9 [18LL] [i_10] [18LL]))))));
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((var_9) + (var_2)))))));
        arr_34 [(signed char)4] [i_10] &= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((arr_10 [0LL] [i_10] [i_10] [i_10]), (1458965019)))))) - (((((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((/* implicit */long long int) ((arr_8 [i_10] [i_10] [(short)3] [i_10]) - (arr_11 [i_10] [i_10] [i_10] [i_10])))))));
        var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (((/* implicit */long long int) arr_19 [i_10] [(unsigned char)19] [i_10] [i_10] [(unsigned char)19])))))), (((long long int) 10U))));
    }
    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (unsigned char)255)))));
        var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_0)) ? (var_0) : (var_9))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (arr_24 [(signed char)3] [(unsigned short)8] [i_11] [(unsigned short)8] [i_11])))))) / (min((((/* implicit */long long int) arr_12 [i_11] [i_11] [i_11] [i_11] [i_11])), (((arr_37 [i_11] [i_11]) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        arr_38 [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_7)) <= (arr_30 [i_11]))))) % (max((((/* implicit */unsigned int) (short)18891)), (0U)))));
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_6), (var_6))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) min((arr_2 [2LL]), (((/* implicit */short) arr_32 [i_11])))))))));
    }
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((int) 1953746441U))) ^ (((var_9) ^ (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)250))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_6))))))));
}
