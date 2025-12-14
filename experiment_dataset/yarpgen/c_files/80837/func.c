/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80837
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
    var_10 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_0 [i_0])) && (var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2040))) : (var_1))))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-22804)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-30197), (((/* implicit */short) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (var_1)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)751))))))) : (((long long int) var_1))));
                    arr_9 [i_0] [i_1] = ((/* implicit */int) var_0);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)768))) - (-4984084862461356563LL)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
}
