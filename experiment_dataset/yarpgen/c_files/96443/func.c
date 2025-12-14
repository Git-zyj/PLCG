/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96443
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
    var_17 = ((/* implicit */unsigned char) var_15);
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)-16900)) + (var_0)))))) ? (((/* implicit */int) var_15)) : (max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_8);
                arr_6 [i_0] [i_1] = var_15;
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)-40))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)39))) + ((+(arr_8 [i_0 - 2] [i_3 - 1] [i_3 + 1])))));
                            var_21 = ((/* implicit */int) arr_3 [i_1] [i_1]);
                            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
