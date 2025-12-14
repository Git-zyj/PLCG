/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74338
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [(short)0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_13)) : (max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1] [i_0])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)132))))))));
                    arr_8 [i_0] [8ULL] [8ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))), (var_5)))) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((1061597324953088657LL), (((/* implicit */long long int) (unsigned char)127)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */short) 13437710776715639484ULL);
                                arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (-(((1573062830) * (((/* implicit */int) (_Bool)1))))))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)127))))));
                                arr_16 [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)136)) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31797)))));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */int) arr_4 [i_1] [i_1]);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-126))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_1);
}
