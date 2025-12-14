/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77781
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_2]);
                    arr_8 [i_1] [0] [(signed char)2] = ((/* implicit */unsigned long long int) -1883322389);
                    arr_9 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])))) ? (((((/* implicit */_Bool) ((12335072362770715645ULL) + (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)25)), (var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_10)))))) : (((/* implicit */int) min((((/* implicit */short) arr_1 [i_1 - 1] [i_1 - 2])), (var_13))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)));
}
