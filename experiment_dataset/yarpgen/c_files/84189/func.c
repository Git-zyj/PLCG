/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84189
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((_Bool) var_8)) && (((/* implicit */_Bool) ((unsigned short) (_Bool)0))))))));
                arr_5 [i_1] [i_1 - 3] = var_10;
                arr_6 [(_Bool)1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned int) max((18376144108783753791ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) 536870908U))))) ? ((-(((/* implicit */int) (unsigned char)65)))) : (((/* implicit */int) (_Bool)1)))))));
                arr_7 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max(((unsigned char)233), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((6908219291008480444ULL) == (10812180527738022192ULL))))) : (max((984579559U), (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((short)13406), (((/* implicit */short) var_8))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (590733911U)))) ? (4351318288547930830ULL) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (3119100810975822008ULL))))), (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((short) (_Bool)1)))))))))));
}
