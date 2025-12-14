/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90742
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)254), (((/* implicit */unsigned char) var_13))))) / (((/* implicit */int) var_2))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9665))) == (arr_0 [i_0]))))))) | (((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        arr_4 [2LL] |= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_1)))) == ((-(((/* implicit */int) (unsigned short)51081))))));
    }
}
