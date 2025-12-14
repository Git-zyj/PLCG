/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80806
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) 12360832749969893473ULL);
                var_19 += ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_14))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */long long int) (signed char)36)), (((long long int) arr_7 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_11))))) - (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned short)62523)))) || ((!(((/* implicit */_Bool) -1091676948)))))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned short)62506))));
}
