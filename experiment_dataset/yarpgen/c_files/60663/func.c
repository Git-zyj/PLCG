/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60663
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
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = 6825847408220150964LL;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] = ((/* implicit */int) min((((arr_6 [i_0] [i_2] [i_2]) % (((/* implicit */unsigned long long int) 2687438435U)))), (((/* implicit */unsigned long long int) min((1607528882U), (((/* implicit */unsigned int) (short)-30774)))))));
                    var_21 = ((/* implicit */_Bool) (unsigned char)228);
                }
            } 
        } 
    } 
}
