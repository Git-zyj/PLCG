/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83147
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [10ULL] = ((/* implicit */unsigned short) max((-1884384686), (1884384702)));
                arr_7 [8ULL] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))))), ((+(arr_5 [i_0] [i_1] [i_1])))))) ? (((unsigned int) ((((/* implicit */int) (unsigned char)240)) >= (((/* implicit */int) (unsigned char)11))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((unsigned char) var_3));
}
