/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95749
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (min((arr_2 [i_0] [(short)7]), (((/* implicit */long long int) (signed char)82))))))) - (var_7)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((arr_5 [i_0] [i_1] [i_2] [i_3]) ? (var_12) : (-1913899991748448195LL)))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                            var_20 = ((/* implicit */long long int) ((_Bool) arr_4 [i_0] [i_1] [i_0 - 1]));
                            var_21 = ((short) min((1913899991748448194LL), (((/* implicit */long long int) (short)-3392))));
                            var_22 &= ((/* implicit */_Bool) (signed char)-99);
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_0 [i_0] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_1]))));
                var_24 = ((/* implicit */long long int) arr_3 [(short)6] [i_1 + 2]);
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))) ? (min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_5))));
}
