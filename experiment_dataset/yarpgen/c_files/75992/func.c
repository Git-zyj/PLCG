/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75992
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
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) | (2318560760U)));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2318560790U), (1976406535U)))) ? (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned short)62934)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)185))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) var_7))));
}
