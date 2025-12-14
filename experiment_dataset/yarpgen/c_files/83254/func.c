/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83254
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_11 ^= ((/* implicit */_Bool) var_7);
    var_12 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(short)11] [i_0])) ? (arr_13 [i_4] [16] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [18ULL] [i_0] [i_4])) ? (((/* implicit */int) (unsigned short)9648)) : (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_10 [i_4] [i_1] [i_2])))))))));
                                var_13 = ((/* implicit */unsigned long long int) var_3);
                                arr_15 [i_4] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (arr_13 [i_2] [i_2] [i_2] [10] [8ULL])))) % (((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3 - 2] [i_4])) ? (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])) : (max((arr_8 [i_3] [i_3] [i_2] [(_Bool)1]), (((/* implicit */long long int) var_8))))))));
                                var_14 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((105553116266496LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) + (arr_12 [i_0] [i_3 + 1] [i_3 + 1] [10LL]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))) % (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [9U] [(_Bool)1] [i_2] [i_3]))) : (1083034768U)))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_0] = ((min((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))), (((-48883355856773026LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 1083034768U)) ? (((/* implicit */int) max((var_7), (arr_4 [i_0] [i_1] [i_1] [i_2])))) : (((/* implicit */int) (signed char)49))))));
                    arr_17 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (((_Bool)1) ? (((159049763U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32751))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_23 [15LL] [20LL] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 31LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1]))) + (263953070U)))) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                                arr_24 [i_0] [i_0] [(unsigned short)22] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_0] [i_1] [(short)10] [6LL] [(unsigned short)21] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_0])) / (((/* implicit */int) ((5711474420197268343LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-13939)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
