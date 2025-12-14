/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92343
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned char) min((67107840ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned char)197), (arr_3 [(unsigned char)21] [i_0])))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2] [i_2])))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_2 + 1] [i_1] [i_2 - 1]))) : (((/* implicit */int) max(((unsigned char)0), (arr_4 [i_2 + 1] [i_1] [i_2])))))))));
                    var_17 &= min((((/* implicit */unsigned long long int) min((arr_0 [i_2 + 1]), ((unsigned char)254)))), (((unsigned long long int) ((((/* implicit */int) (unsigned char)119)) * (((/* implicit */int) var_5))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_7 [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] [(unsigned char)16])));
                }
            } 
        } 
    } 
    var_19 |= (-(max((var_3), ((-(var_15))))));
    var_20 |= ((/* implicit */unsigned long long int) ((unsigned char) (-((-(var_7))))));
}
