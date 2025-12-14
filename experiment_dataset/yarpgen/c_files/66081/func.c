/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66081
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */int) ((((/* implicit */_Bool) -1712662625)) && (((/* implicit */_Bool) (signed char)122))));
                    var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)12] [i_1]))) : (926016000383293860LL))), ((+(-8132257111794107701LL)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) 8132257111794107684LL);
}
