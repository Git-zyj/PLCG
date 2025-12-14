/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71168
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
    var_19 = ((/* implicit */unsigned char) (short)32755);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                var_20 = ((/* implicit */signed char) arr_2 [i_1] [i_0 + 3]);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((short)32755), ((short)32725))))) * (min((((/* implicit */long long int) var_0)), (arr_2 [7ULL] [i_0])))))) ? (max((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)0] [i_0 + 4])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0 + 4] [(unsigned short)13])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
            }
        } 
    } 
}
