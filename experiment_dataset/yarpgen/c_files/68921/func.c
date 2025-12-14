/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68921
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (18318877661476710319ULL))) : (((/* implicit */unsigned long long int) min((6504317583774889451LL), (((/* implicit */long long int) (signed char)-39)))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (short)25874);
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [(_Bool)1])), (((((/* implicit */unsigned int) var_10)) / (1448908413U))))))));
                }
            } 
        } 
    } 
}
