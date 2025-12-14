/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86067
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) var_10);
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) min(((-(min((-4443617178584399993LL), (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)61253))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_0);
    var_14 += min((((((/* implicit */_Bool) ((unsigned long long int) -1806474633))) ? (var_10) : (((/* implicit */unsigned long long int) min((var_9), (var_9)))))), (7891807901170232005ULL));
}
