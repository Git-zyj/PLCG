/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62827
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
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42))) >= ((~(((((/* implicit */_Bool) -927168425014534171LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (575020354U)))))));
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
    var_20 &= ((/* implicit */unsigned char) var_15);
    var_21 = ((/* implicit */unsigned int) (((~(((((/* implicit */long long int) ((/* implicit */int) var_17))) & (var_12))))) / (((max((((/* implicit */long long int) (signed char)-38)), (var_7))) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)43364)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned char) ((((arr_1 [i_0 + 2]) >> (((var_0) - (902755465U))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [8LL] [i_0]))))));
                arr_6 [i_1] |= (signed char)-113;
            }
        } 
    } 
}
