/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58509
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
    var_12 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */int) var_11)) >> (((/* implicit */int) var_11)))), ((-(((/* implicit */int) (unsigned short)56076))))))));
    var_13 = ((/* implicit */_Bool) 5622224215367846550ULL);
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(min((var_7), (((/* implicit */long long int) var_11))))))) >= (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (6567956330163396059ULL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_2 [i_1]))))));
                arr_6 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) ((var_9) >> (((arr_1 [i_0] [i_0]) + (4003650054500493686LL))))))), (arr_4 [i_0] [i_0])))) : (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) ((var_9) >> (((((arr_1 [i_0] [i_0]) + (4003650054500493686LL))) - (1148245372622502127LL))))))), (arr_4 [i_0] [i_0]))));
            }
        } 
    } 
}
