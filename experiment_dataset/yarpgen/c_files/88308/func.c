/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88308
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_13);
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10)))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) min(((short)1200), (((/* implicit */short) (_Bool)1))))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)39474)) / (((/* implicit */int) var_4))))), (((var_15) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))) == (((/* implicit */unsigned long long int) var_10))));
    var_17 |= ((/* implicit */unsigned short) var_13);
}
