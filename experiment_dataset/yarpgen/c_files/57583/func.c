/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57583
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
    var_10 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [19ULL] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [18ULL])) ? (216275626U) : (3194193925U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-117)))))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (-7861239943036249708LL) : (((/* implicit */long long int) arr_4 [i_0]))))));
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) -7861239943036249705LL)) ? ((-(7861239943036249698LL))) : (((/* implicit */long long int) ((unsigned int) arr_4 [i_0]))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) min(((~(min((17385181825671091836ULL), (15757453069145624687ULL))))), (((/* implicit */unsigned long long int) (+(((int) (unsigned short)10853)))))));
}
