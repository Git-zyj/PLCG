/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99014
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) max((3775127374U), (var_10)))) | (((((/* implicit */unsigned long long int) 3775127374U)) ^ (18446744073709551604ULL))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = (-(((3775127373U) / (var_10))));
                    var_16 += ((((((/* implicit */_Bool) (-(var_1)))) ? (((3775127348U) << (((1156592499U) - (1156592489U))))) : (((unsigned int) var_5)))) - (min((519839922U), (var_1))));
                    var_17 = ((((((/* implicit */unsigned long long int) var_10)) <= (((var_0) + (17824039959644315244ULL))))) ? (min((((/* implicit */unsigned long long int) 16U)), (13745702501675777497ULL))) : (arr_0 [i_0]));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((((((/* implicit */_Bool) max((var_11), (var_2)))) ? (((/* implicit */unsigned long long int) max((3964358710U), (16U)))) : (min((((/* implicit */unsigned long long int) var_4)), (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967294U)) != (12872265804651932605ULL))))))))))));
}
