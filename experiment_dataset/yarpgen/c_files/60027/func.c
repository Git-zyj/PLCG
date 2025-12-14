/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60027
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
    var_13 ^= ((/* implicit */unsigned int) (~((-(8589934591LL)))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-6652535167570672304LL) >= (-8589934577LL)))) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)1040)) || (((/* implicit */_Bool) var_9))))) <= (((/* implicit */int) ((-8589934587LL) != (127LL)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)-1033)) != (((/* implicit */int) var_8))))) < (((/* implicit */int) (short)-1))));
                    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) -159847877)) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) arr_3 [i_1] [i_0]))))));
                }
            } 
        } 
    } 
}
