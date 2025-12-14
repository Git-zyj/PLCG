/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80405
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [(unsigned char)16] = ((/* implicit */int) 17657326037386719578ULL);
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 546541732)), (4001044256U)))) ? (((/* implicit */int) (short)-32759)) : (((((((/* implicit */int) (short)-7633)) + (2147483647))) >> (((arr_1 [i_0]) - (1675142004171464766ULL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_10);
    var_19 = ((/* implicit */unsigned long long int) var_6);
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((789418036322832038ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (4294967283U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))) == (((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5)))))));
}
