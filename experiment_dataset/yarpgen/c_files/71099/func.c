/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71099
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2] [i_0])) : (((/* implicit */int) ((unsigned char) (signed char)0)))));
                                var_17 = ((/* implicit */short) (+((+(((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [i_1] [i_0]);
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((arr_0 [i_1]), ((signed char)117))))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) var_11)), (var_8))) >> (((/* implicit */int) ((unsigned char) -1010736610)))));
    var_20 = var_11;
}
