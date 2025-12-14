/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67549
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (3080702586946684317ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (11) : (((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) (-(((arr_0 [i_1 - 2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68)))))));
                arr_4 [(_Bool)1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5578893527908775141ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-51))))) ? (min((((/* implicit */unsigned long long int) (short)15675)), (var_7))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) -4456523934380475301LL)) == (3534489759074859072ULL))) ? (7935665907925203316LL) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) var_8)))))))));
                var_13 &= ((/* implicit */short) (((((!(((/* implicit */_Bool) 3283688790U)))) ? (1011278517U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) 0))));
            }
        } 
    } 
}
