/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94346
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) (+(max((((unsigned int) arr_13 [i_0] [i_1] [i_2] [i_1] [i_4 + 1])), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_3]))))));
                                arr_16 [i_0] [i_1] [i_2] [3U] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [(unsigned short)12] [i_0] [i_3] [i_4]);
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((arr_6 [i_0] [i_2 - 2]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))), (arr_9 [i_0] [i_1] [i_2] [3LL] [0ULL]))))));
                                arr_17 [i_3] [i_1] [i_2 + 2] [i_2 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) + (((/* implicit */int) (unsigned char)252))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */int) (unsigned short)58347)) % (((/* implicit */int) (signed char)-61)))))))));
                arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10197944010846297951ULL)) ? (5833520344226146400LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))))));
                var_20 = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)233))))) / ((-(6628278178402645167LL))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_2)) ? (7396380358003792298ULL) : (((/* implicit */unsigned long long int) var_2))))))));
    var_22 = ((unsigned char) ((unsigned long long int) ((var_6) / (((/* implicit */int) var_4)))));
    var_23 = ((/* implicit */long long int) ((unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (-7772657205536700632LL))), (((/* implicit */long long int) 2006105298U)))));
}
