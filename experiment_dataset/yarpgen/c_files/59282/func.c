/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59282
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775806LL)))))))));
    var_15 = ((/* implicit */unsigned int) 6380477447939677938LL);
    var_16 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_11)), (576460717943685120ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) (+((+((-(((/* implicit */int) var_7))))))));
                var_17 = ((/* implicit */signed char) min(((~(((/* implicit */int) ((((/* implicit */_Bool) 810032481U)) && (((/* implicit */_Bool) var_7))))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) <= (13981879385423858095ULL)))) ^ (((/* implicit */int) (short)-15946))))));
            }
        } 
    } 
}
