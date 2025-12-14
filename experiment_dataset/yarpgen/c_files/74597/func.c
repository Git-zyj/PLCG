/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74597
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((var_9), (var_9)))), ((((+(var_7))) & (((/* implicit */unsigned long long int) var_9))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (unsigned short)41745))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [(unsigned char)1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3127675828444185938LL)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (min((var_5), (((/* implicit */long long int) arr_2 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_13 = ((/* implicit */_Bool) ((long long int) var_3));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
            }
        } 
    } 
}
