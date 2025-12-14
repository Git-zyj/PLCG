/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63456
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
    var_18 = min((var_8), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-6902207479576742733LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */_Bool) min((max((min((7898065801343506036LL), (((/* implicit */long long int) (_Bool)1)))), (((long long int) var_15)))), (((/* implicit */long long int) (_Bool)1))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) min((((max((((/* implicit */long long int) var_8)), (var_15))) % (((var_14) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) var_14))));
                    arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (-(var_2)));
                    var_21 *= ((/* implicit */long long int) ((_Bool) (-9223372036854775807LL - 1LL)));
                }
            }
        } 
    } 
    var_22 = ((long long int) (_Bool)1);
}
