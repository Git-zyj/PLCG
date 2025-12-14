/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73249
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
    var_10 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */long long int) ((unsigned char) (short)1545))), (max((var_5), (((/* implicit */long long int) (signed char)-73)))))));
    var_11 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (-1069141086666497958LL)))) + (-1555394383))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_0 [10U] [i_0]))));
                    var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) ((long long int) var_9)))), (min((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (arr_5 [i_0] [i_1] [i_0]) : (1345417177365385021LL))), (((/* implicit */long long int) (unsigned short)0))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */short) var_0);
}
