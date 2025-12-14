/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90247
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
    var_11 = max((((/* implicit */long long int) ((_Bool) min((((/* implicit */int) (_Bool)1)), (-1))))), (min((min((((/* implicit */long long int) var_6)), (var_1))), (max((var_4), (((/* implicit */long long int) (signed char)7)))))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((((long long int) max((var_8), (((/* implicit */unsigned int) var_6))))), (((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) var_6)), (-11))))))))));
    var_13 = ((/* implicit */long long int) min((((unsigned char) max((var_7), (3234661405U)))), (((/* implicit */unsigned char) ((signed char) max((var_3), (((/* implicit */long long int) var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((short) ((long long int) min((((/* implicit */long long int) var_6)), (arr_0 [i_1]))));
                var_14 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) ((long long int) (_Bool)1))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((long long int) min(((unsigned char)247), (((/* implicit */unsigned char) (_Bool)1))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((max((((long long int) var_8)), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */long long int) ((unsigned int) ((int) 313531277))))));
}
