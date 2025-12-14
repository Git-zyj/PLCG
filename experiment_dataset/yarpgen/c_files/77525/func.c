/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77525
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
    var_19 = ((/* implicit */short) (((-(((var_2) ? (((/* implicit */int) var_5)) : (var_16))))) * ((+(((((/* implicit */int) var_17)) / (var_7)))))));
    var_20 -= ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)20303)), (-260549989)))), (max((var_13), (((/* implicit */unsigned long long int) arr_4 [i_0]))))))));
                arr_6 [i_0] = ((/* implicit */long long int) var_3);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 11; i_2 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned long long int) ((var_2) && (((/* implicit */_Bool) arr_5 [14U]))));
        var_23 *= ((/* implicit */short) arr_4 [20]);
    }
}
