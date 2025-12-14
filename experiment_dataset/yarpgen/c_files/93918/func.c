/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93918
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [i_0])), (var_5)))) ? ((-(((/* implicit */int) (unsigned short)58166)))) : (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
                var_11 = ((/* implicit */unsigned char) min((4516194274416956974LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) max((var_8), (var_3)))), (arr_5 [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-996883134) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-519940087719881266LL))))), (((/* implicit */long long int) var_7))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35419)) == ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)35419))))))));
    var_14 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_5)));
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -519940087719881257LL)))) ? (min((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) 2966803020359726694ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3847299488U))))))));
}
