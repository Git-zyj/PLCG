/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64172
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
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                var_13 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((-2147483647 - 1)) : (var_5)))), ((+(((((/* implicit */_Bool) var_10)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) - (9223372036854775807LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2 - 4])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))))));
                            arr_16 [(_Bool)1] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (+((+(((unsigned int) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
