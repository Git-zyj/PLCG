/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84347
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
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) var_11)), (((var_1) % (((/* implicit */long long int) 65630091U)))))));
    var_17 = var_3;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) >> (((var_2) - (290747933)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (var_0))))) : ((-(4229337209U)))));
                                var_19 |= ((/* implicit */unsigned char) 7908188230048465441ULL);
                                var_20 = ((/* implicit */signed char) var_1);
                                var_21 += ((/* implicit */_Bool) min((((arr_0 [i_3 + 2]) | (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_3 [i_2])), (var_5)))))) ? (max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) arr_7 [(unsigned char)0] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) 4229337213U))));
                }
            } 
        } 
    } 
    var_22 = (((~(7908188230048465441ULL))) - (((/* implicit */unsigned long long int) var_0)));
}
