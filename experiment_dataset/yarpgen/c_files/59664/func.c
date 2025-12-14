/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59664
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29368)) ? (((int) ((2985481002U) + (2985616942U)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65527)))))))))));
    var_21 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)52680)))), (((((/* implicit */_Bool) max((((/* implicit */short) var_16)), (var_9)))) ? ((+(((/* implicit */int) (unsigned char)232)))) : (((int) (unsigned short)65535))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (short)16128)) ? (((/* implicit */int) (unsigned char)119)) : (((int) (_Bool)1)))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned short) ((short) (unsigned char)232)))))) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)217))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)119))))) ? (min((((/* implicit */unsigned int) var_16)), (2938533260U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (31))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned char)35)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-16133)), ((unsigned short)30835)))) : (((/* implicit */int) ((_Bool) var_19)))))));
}
