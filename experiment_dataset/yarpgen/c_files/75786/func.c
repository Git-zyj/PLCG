/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75786
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
    var_19 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */_Bool) 8388096)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)63))))))) ? (((/* implicit */int) min((((unsigned short) (unsigned short)22700)), (((/* implicit */unsigned short) ((_Bool) 8388096)))))) : (((/* implicit */int) var_14)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) (short)25068))), (((long long int) ((signed char) var_12)))));
                arr_6 [i_1] [(short)5] [i_0 + 1] = ((/* implicit */_Bool) min((((-8388097) / (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0 + 1])) : (((/* implicit */int) var_11)))))), (-1260151749)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 4; i_3 < 19; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_17 [i_2] [0U] [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_3 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1])))))) : (((((/* implicit */_Bool) -8388097)) ? (468436066U) : (((/* implicit */unsigned int) 8388115)))));
                    arr_18 [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (8175827945533475709LL) : (((/* implicit */long long int) min((2500767556U), (((/* implicit */unsigned int) 2147483635))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 7071104988462305899LL)) ? (((/* implicit */int) (unsigned char)240)) : (-864573636))) > (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) ((_Bool) (signed char)7)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8503)))));
}
