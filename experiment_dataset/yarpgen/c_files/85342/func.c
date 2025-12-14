/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85342
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
    var_17 = ((/* implicit */_Bool) (unsigned char)142);
    var_18 = min((((/* implicit */long long int) var_8)), (max((var_14), (((/* implicit */long long int) var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 -= ((/* implicit */short) min((arr_4 [i_2] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) <= (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (signed char)-106)))))));
                    var_20 ^= ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */int) ((short) var_2))) & (((((((/* implicit */int) var_3)) & (((/* implicit */int) var_9)))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) var_1)))))))));
}
