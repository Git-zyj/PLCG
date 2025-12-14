/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73102
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */unsigned long long int) var_5);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48)))))) : (max((((/* implicit */unsigned long long int) (signed char)97)), (3427947239159214869ULL))))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)43))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [(signed char)9])), (arr_0 [i_0])))) : (arr_12 [i_1] [i_4 - 1] [i_4] [i_4] [i_1])))) ? (((/* implicit */unsigned long long int) ((var_11) ? (arr_0 [i_1 - 1]) : (((/* implicit */int) (short)-1))))) : (12011541244894751328ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_5 - 2]), (arr_14 [i_5 - 1]))))) & (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) | (max((3427947239159214869ULL), (((/* implicit */unsigned long long int) 3348860583U))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 23; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) 4);
                                var_19 = ((/* implicit */unsigned short) arr_21 [i_5] [i_5] [i_5 + 3] [i_5] [i_5]);
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5] [0U])) && (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_0))))))))) : (((((((/* implicit */_Bool) -842281122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (865953376U))) << (((((((/* implicit */int) (signed char)-109)) + (-206509953))) + (206510069)))))));
                }
                arr_25 [i_5] [(short)18] [(short)18] = ((/* implicit */short) 2147483647);
                var_21 ^= ((/* implicit */unsigned char) (+((~(arr_23 [i_5] [i_5 + 1] [(unsigned char)14] [i_5] [i_5])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) 5688255726716806658ULL)) ? (((/* implicit */int) (short)29799)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (short)16384))))));
}
