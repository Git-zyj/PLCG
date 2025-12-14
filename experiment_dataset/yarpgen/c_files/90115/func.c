/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90115
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
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 6283692689078087349ULL)) && (((/* implicit */_Bool) (unsigned short)11020)))))));
                    var_10 ^= ((/* implicit */short) max(((~(((/* implicit */int) (unsigned short)54516)))), (((((/* implicit */int) (unsigned short)54516)) + (((/* implicit */int) (unsigned short)32768))))));
                }
            } 
        } 
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54534))) + (-6839477465452905855LL)))))))));
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1066521937U))))) - (((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (unsigned short)54503)) : (((/* implicit */int) (unsigned short)32777))))));
    }
    var_12 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (unsigned short)32793))))) ? (279587174U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) < (var_4)))))))));
}
