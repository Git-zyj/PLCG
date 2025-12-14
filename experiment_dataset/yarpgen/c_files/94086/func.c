/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94086
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
    var_19 = ((/* implicit */long long int) (unsigned short)55836);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9699)))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (unsigned short)9707);
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)55868), ((unsigned short)65280)))) % (((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) (unsigned short)256))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_9))))) != ((-(3565848270U))))))));
}
