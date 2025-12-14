/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65713
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
    var_19 -= ((/* implicit */unsigned short) max((var_4), (((/* implicit */int) var_8))));
    var_20 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)162)) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) == (((/* implicit */int) (unsigned short)61900))))))) / ((~((~(((/* implicit */int) arr_0 [10U]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)61872)) ? (2431968578U) : (1862998700U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)37086)))))))) : (min(((-(0LL))), (((/* implicit */long long int) ((_Bool) (_Bool)1)))))));
            }
        } 
    } 
}
