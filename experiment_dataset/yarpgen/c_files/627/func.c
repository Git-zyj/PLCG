/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/627
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
    var_10 += ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? ((-(arr_1 [i_0 - 1] [i_1]))) : (((/* implicit */int) arr_6 [7U] [i_0]))))), (0LL)));
                var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_0 + 1])) ? (-8850579084053548020LL) : (arr_2 [i_0 + 1]))) & (((/* implicit */long long int) (+(arr_1 [i_1 + 1] [i_1 - 1]))))));
            }
        } 
    } 
}
