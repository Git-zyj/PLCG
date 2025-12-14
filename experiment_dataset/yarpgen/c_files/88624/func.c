/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88624
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((max((((/* implicit */int) (signed char)54)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (short)11226)))))) < ((((-(((/* implicit */int) arr_2 [i_0] [4])))) - (((((/* implicit */_Bool) 3931948394U)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (short)11226))))))));
                    var_21 = ((/* implicit */int) (unsigned char)137);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_24 = ((/* implicit */unsigned char) (_Bool)1);
    var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (max((((/* implicit */long long int) (~(((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))))));
}
