/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74554
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (max((var_7), (var_5))))) * (17694129692774422005ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((arr_3 [i_1 - 1] [i_1 - 1] [i_1]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_1]))))));
                arr_4 [i_1] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (17694129692774422005ULL) : (8723396523821399095ULL)))) ? (min((arr_2 [i_0] [i_1] [i_1 + 1]), (arr_3 [i_0] [i_0] [i_1]))) : (min((0ULL), (11783722020361884478ULL))))));
                var_14 -= max((((4230186089142775291ULL) >> (((14250428037921960762ULL) - (14250428037921960701ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((8723396523821399084ULL) + (11620338377410225268ULL))))))));
                var_15 = arr_2 [i_0] [i_1] [i_1];
            }
        } 
    } 
}
