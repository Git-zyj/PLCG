/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80735
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
    var_11 += ((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)107)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_1)), (arr_0 [i_0] [i_1]))))));
                var_13 ^= ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (+(var_10)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (signed char)-85))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-27388)))))));
    var_16 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
}
