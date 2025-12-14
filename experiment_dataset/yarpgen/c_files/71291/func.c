/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71291
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((12622249193098067609ULL), (((/* implicit */unsigned long long int) 6U))))) && (((((/* implicit */unsigned int) -1478716549)) != (371113182U))))), ((!(((/* implicit */_Bool) (~(var_10))))))));
                arr_7 [(unsigned char)6] [(unsigned char)6] [i_0] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), (max((5824494880611484019ULL), (((/* implicit */unsigned long long int) 483008193))))))));
                var_14 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [8LL]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-116)) || (((/* implicit */_Bool) -8719289087692406871LL))))) : (-465655643)))), (min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_10) : (((/* implicit */int) (unsigned char)255))))), (5824494880611484004ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 2])) >> (((((/* implicit */int) arr_1 [i_1 + 1])) - (128))))))));
            }
        } 
    } 
}
