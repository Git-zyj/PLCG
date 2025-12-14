/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/826
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (min((((/* implicit */unsigned long long int) (unsigned char)143)), (((((/* implicit */_Bool) (signed char)-35)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -821862842184406684LL))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) 4294705152U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551613ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8])))))) < (((((/* implicit */_Bool) (short)-26829)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65531)) || (((/* implicit */_Bool) arr_0 [i_0] [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_7 [i_3 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 3]))) : (16149071736089652116ULL))) : (((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 2]))) : (arr_0 [i_0] [i_3 - 2])))));
                            var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_9 [i_3 + 2] [i_3 + 2] [(short)3] [i_3 - 2]) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 3] [i_3] [i_3 - 1])) : (((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 3] [i_3] [i_3 - 3]))))), (min((var_7), (((/* implicit */unsigned long long int) arr_9 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 + 2]))))));
                        }
                    } 
                } 
                var_18 = ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_5 [i_0] [i_0] [i_1]) : (arr_5 [i_1] [i_0] [i_0]))) & (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (arr_5 [i_1] [i_0] [i_0]) : (arr_5 [(short)6] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        {
                            var_19 &= ((/* implicit */signed char) var_10);
                            var_20 -= ((short) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_1 [2ULL] [i_1])) ? (1054608014U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
