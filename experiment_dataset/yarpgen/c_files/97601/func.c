/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97601
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
    var_20 = ((/* implicit */unsigned int) (unsigned char)84);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 24; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) var_14)), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (((var_18) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    var_22 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [21] [i_1] [6ULL]))) & (arr_5 [i_2] [(signed char)16] [i_2]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_10);
}
