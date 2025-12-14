/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86467
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (short)14239))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -8104132534249057207LL))))) : (((/* implicit */int) (unsigned char)26)))))));
                var_15 = max((((/* implicit */short) (signed char)122)), ((short)14235));
                var_16 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) (short)14239)) ? (((/* implicit */unsigned long long int) 2640690534U)) : (8ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (short)14254)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) ((_Bool) (signed char)58))) : (((/* implicit */int) var_2))));
    var_18 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_12)) : (8ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */int) (unsigned short)15)) : (2147483632)))))) ? (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) var_10))))) : (((/* implicit */int) (unsigned short)65535))));
}
