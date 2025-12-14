/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7448
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
    var_17 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 4] [i_1]))) != (var_0)));
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_9)))) * (((/* implicit */int) (signed char)24))))) | (min((min((163396292U), (((/* implicit */unsigned int) (signed char)49)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [9LL])))))))));
                    arr_10 [i_0] [i_2] [i_2] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))) == (((unsigned long long int) 13336498517616658560ULL)));
                    arr_11 [i_2] [(short)9] = ((/* implicit */unsigned long long int) var_12);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((6LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) >> (((((/* implicit */int) var_7)) - (155)))));
}
