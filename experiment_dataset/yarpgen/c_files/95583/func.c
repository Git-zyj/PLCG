/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95583
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
    var_16 ^= ((/* implicit */unsigned int) (unsigned char)95);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) 1642538758U);
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)65527));
                    var_18 &= ((/* implicit */unsigned char) (unsigned short)12696);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (var_9)));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((12LL), (((/* implicit */long long int) var_10))))) ? (min((((/* implicit */unsigned int) var_7)), (2262652918U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -13LL))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)16365))))) && (((/* implicit */_Bool) (unsigned char)137))))))));
}
