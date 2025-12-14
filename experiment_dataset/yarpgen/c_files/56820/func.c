/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56820
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
    var_16 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)105), ((unsigned char)134))))) < (7839937379180468480LL)));
                    var_18 = ((/* implicit */_Bool) ((int) (!((!(((/* implicit */_Bool) arr_1 [i_1])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_8))));
}
