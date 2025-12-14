/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80496
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
    var_14 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((signed char) -1039211603))), (7ULL))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)20367)), (((long long int) (+(((/* implicit */int) var_10)))))));
                var_16 = ((/* implicit */int) min((max((((/* implicit */long long int) (short)511)), (-2213687604451965305LL))), (((/* implicit */long long int) ((_Bool) arr_5 [i_0] [i_1 + 1] [i_1 + 2])))));
                arr_6 [i_1] = var_8;
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((min((76167592335929606LL), (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */signed char) (_Bool)0)))))))))))));
}
