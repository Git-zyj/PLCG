/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/853
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
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_5), ((_Bool)1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)35938)))))))) ? (12897879409171855829ULL) : (((/* implicit */unsigned long long int) var_1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned short)1984))));
                    var_17 -= min((((/* implicit */int) (short)-11266)), (min((((/* implicit */int) (unsigned short)24716)), (0))));
                }
            } 
        } 
    }
}
