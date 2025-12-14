/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87703
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
    var_19 = ((/* implicit */short) ((var_14) >> (((var_3) - (177111326U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((18446726481523507200ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
                var_21 = ((/* implicit */signed char) (-((~((~(var_14)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (((+((-(var_0))))) * (((16912737075018893935ULL) | (((/* implicit */unsigned long long int) 2409955284U))))));
            }
        } 
    } 
}
