/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71169
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [23] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((signed char) (unsigned short)0)))), ((((!(((/* implicit */_Bool) -739052843)))) ? (((int) 278119570)) : (((/* implicit */int) var_5))))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3630942663U)) ? (((((/* implicit */_Bool) 278119570)) ? (-278119570) : (((/* implicit */int) (short)-31904)))) : ((-(((/* implicit */int) (signed char)14))))))) ? (((int) ((((/* implicit */_Bool) (short)19)) ? (((/* implicit */int) (short)-28642)) : (((/* implicit */int) var_1))))) : (((/* implicit */int) ((unsigned char) ((_Bool) 2994097461130162039ULL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [(short)17] [8LL] [i_2] [i_1] [(short)5] [i_0] = ((int) ((((/* implicit */_Bool) min(((signed char)-14), ((signed char)-47)))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((int) (unsigned short)36430))));
                                var_13 = ((/* implicit */int) ((unsigned char) max((var_3), (((/* implicit */int) ((_Bool) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) (!(((_Bool) var_6))));
    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_9) : (((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (((((/* implicit */_Bool) (signed char)-14)) ? (-4031761649377187608LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(-1838791043131758062LL))) : (((/* implicit */long long int) ((unsigned int) var_1)))));
}
