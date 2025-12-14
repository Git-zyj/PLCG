/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58697
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)224))))) == (var_16)));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (short)-26892))));
    var_22 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned char)87)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_23 += ((/* implicit */_Bool) (short)-5832);
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)142)) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned char)225))));
            }
        } 
    } 
    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (((6991657905833964221LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))))))) >= (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */_Bool) 3212878877553713836ULL)) ? (((/* implicit */int) (signed char)-25)) : (var_5))) : (((/* implicit */int) ((short) var_14)))))));
}
