/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67318
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (15929429382925720570ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-1505926750) : (((/* implicit */int) ((unsigned char) var_6)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 1]))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_10)), (((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) var_2))))))) : (((long long int) ((((/* implicit */_Bool) 2691292001605414379ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_15)))))));
                var_22 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 274900443U)) <= (7613055735072665815LL)))) * (((/* implicit */int) ((((/* implicit */int) (short)-28737)) > (((/* implicit */int) var_6)))))))) ^ (2691292001605414392ULL)));
                var_23 = var_6;
            }
        } 
    } 
}
