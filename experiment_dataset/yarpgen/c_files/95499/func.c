/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95499
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned long long int) min((-1484326104), (((/* implicit */int) (short)25900))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (var_11)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))))));
                var_20 = ((/* implicit */unsigned long long int) 17592169267200LL);
                arr_5 [i_0] [i_1] = ((/* implicit */short) arr_1 [i_0 - 2]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_11);
    var_22 = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-27648))))))));
}
