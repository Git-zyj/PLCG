/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99264
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
    var_12 = ((/* implicit */long long int) min((var_5), (var_5)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_13 *= ((/* implicit */short) max(((~(((arr_9 [i_0 - 2] [i_1] [i_2] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                            var_14 = var_2;
                            arr_10 [i_3] [i_3] [i_3] [i_3 - 2] [i_3] [(unsigned char)16] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (7303822090379455793ULL)))) ? (((((/* implicit */_Bool) 11142921983330095827ULL)) ? (4095077577071156657ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_4))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 7303822090379455794ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)146)), ((unsigned short)47965)))))), (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0 - 1] [i_0]))))));
                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3990002138U)) ? ((~(max((((/* implicit */long long int) (unsigned short)10687)), (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_1]))))) : (9223372036854775796LL)));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) (unsigned char)148)), (var_6)))), (((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 + 3] [i_1] [i_4] [i_4])))))))) ? (((((/* implicit */int) arr_8 [(signed char)21] [i_1] [i_4 + 1] [i_4 + 1])) / (((/* implicit */int) var_11)))) : (var_5))))));
                            var_18 -= ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [11LL] [11LL] [i_5])) * (((/* implicit */int) arr_3 [i_1] [i_4 - 1] [15]))))) ? (min((((/* implicit */long long int) arr_14 [i_4] [i_4] [i_4] [i_0])), (arr_12 [i_0] [i_1] [i_4] [i_5]))) : (((/* implicit */long long int) max((var_0), (((/* implicit */int) var_1))))))) + (2078488714LL))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) ((var_4) | (arr_0 [i_5])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 = var_2;
}
