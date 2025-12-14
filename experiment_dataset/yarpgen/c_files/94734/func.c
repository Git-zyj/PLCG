/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94734
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned int) min((min((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0]))), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)0)), (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)85)) || (((/* implicit */_Bool) 2143776236))))), ((-(1818554491U))))), (((/* implicit */unsigned int) (_Bool)0))));
            arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */short) 688655160U);
        }
    }
    var_17 = ((/* implicit */int) min((((/* implicit */short) var_9)), (min((((/* implicit */short) (_Bool)0)), ((short)-3857)))));
}
