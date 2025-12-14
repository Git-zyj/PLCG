/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55537
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
    var_14 |= ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30847))) & (var_1))) + ((~(var_1)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (+(max((((((/* implicit */unsigned long long int) arr_0 [(unsigned char)19])) * (arr_1 [i_0]))), (arr_1 [i_0])))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (19U)));
            }
        } 
    } 
    var_18 ^= ((((/* implicit */int) min((((/* implicit */short) (unsigned char)22)), ((short)16906)))) * (((/* implicit */int) (short)-16924)));
}
