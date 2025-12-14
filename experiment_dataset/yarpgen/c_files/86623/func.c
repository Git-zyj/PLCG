/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86623
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
    var_15 ^= ((/* implicit */unsigned int) var_5);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) (+((-(2240824632U)))))) ? (((/* implicit */unsigned long long int) max((max((var_0), (((/* implicit */long long int) 2054142678U)))), (((/* implicit */long long int) var_11))))) : (max((max((var_1), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */long long int) -1208540478)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)42528))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 2882800481572259474LL)) ? (-2882800481572259467LL) : (-2882800481572259482LL))));
            }
        } 
    } 
    var_17 = (-(var_8));
    var_18 = ((/* implicit */_Bool) min(((+(2054142678U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (15422981860547808055ULL)))) && (var_11))))));
}
