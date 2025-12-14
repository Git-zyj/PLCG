/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83665
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
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)46474))));
                    arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))));
                    arr_11 [i_0 - 3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)231))))))) >> (((var_16) - (16918013551189245580ULL)))));
                    arr_12 [1] [i_0] [i_2] [5U] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2297686460U)) ? (1022194831) : (((/* implicit */int) (unsigned char)10)))), (((/* implicit */int) var_15))));
                    var_17 = (i_0 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) max((-1022194832), (((/* implicit */int) (short)25967))))) : (arr_5 [i_2] [i_1] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) max((-1022194832), (((/* implicit */int) (short)25967))))) : (arr_5 [i_2] [i_1] [i_0 + 1]))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */_Bool) var_2);
    var_19 = ((/* implicit */signed char) ((unsigned short) var_6));
}
