/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66678
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
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((unsigned int) var_12)))) >= (max((-329883956), (((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (signed char)13)))))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [i_0] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [4] [i_0 + 2] [i_0 + 1])) ? (arr_13 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : (max((((/* implicit */unsigned long long int) ((int) var_2))), (((var_2) ? (var_3) : (18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11423482655577824393ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 2])) + (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))) : ((-(arr_13 [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [(short)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1])) | (1ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109)))));
                            arr_24 [i_0] [i_0] [5ULL] [i_6] [i_0 + 1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 + 1] [(_Bool)1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_22 [i_0 + 1] [i_1])) : (1ULL))));
                            arr_25 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1ULL)) ? (((int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) 9411462367901109818ULL)) || (((/* implicit */_Bool) (short)-25678)))))));
                            var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_1] [i_5] [i_6])) || (((/* implicit */_Bool) 69876237))))), (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) -4072876854116349034LL)) ? (arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [(unsigned short)11]) : (var_3))) : (max((9035281705808441797ULL), (((/* implicit */unsigned long long int) (unsigned short)65504))))))));
                            arr_26 [i_0] [i_0] [i_1] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(arr_13 [i_0] [i_0] [i_1] [i_1] [i_5] [7ULL]))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 + 2]))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) -556484813))))) << (((((((/* implicit */int) var_1)) + (((/* implicit */int) var_8)))) - (31148))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))))) ? (((int) -1497896705)) : (((int) 13342039508088537988ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_10);
}
