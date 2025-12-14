/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65734
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
    var_12 = ((/* implicit */short) (((!(((/* implicit */_Bool) 12033193547214903721ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)102)) : (var_9)))) ? (((/* implicit */int) max(((unsigned char)48), ((unsigned char)195)))) : (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)154)))))) : (((/* implicit */int) (unsigned char)153))));
    var_13 *= ((((_Bool) max((((/* implicit */int) (_Bool)1)), (var_9)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned int) var_6)), (var_11))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) + (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned int) var_1)) : (var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */signed char) ((short) (!((!(((/* implicit */_Bool) 0LL)))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))) - (var_10)));
                            arr_11 [i_0] [(_Bool)1] [i_1 + 2] [i_2] [i_1 + 2] = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [0LL] [i_1] [i_0]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))) <= (((((/* implicit */_Bool) (~(2127200928)))) ? ((~(2637389185961953055LL))) : (((((/* implicit */_Bool) 2101592349U)) ? (2637389185961953055LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_4)) : (var_11))), (((/* implicit */unsigned int) var_6))))));
}
