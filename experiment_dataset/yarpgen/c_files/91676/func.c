/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91676
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
    var_11 = ((/* implicit */unsigned char) (short)18896);
    var_12 &= ((/* implicit */unsigned short) ((unsigned char) max(((short)18886), ((short)-18916))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [18U] [18U] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((7076932028839682840ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */int) (short)7097)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned short) (+(((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (signed char)-81)) : (arr_3 [i_0] [i_0])))))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-81))))) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [0] [(unsigned short)7] [(unsigned short)7]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
