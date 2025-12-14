/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8270
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_9))));
                var_13 = ((/* implicit */int) min((var_13), ((((!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) var_11))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4779)) ? (((/* implicit */int) (short)-21978)) : (((/* implicit */int) (short)15736))))) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (max((-983589938), (((/* implicit */int) (short)32752))))))))));
                var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967286U)))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) 983589937)) ? (((/* implicit */int) (short)-29741)) : (var_10)))))) >= (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -983589938)) ? (((/* implicit */int) (short)15736)) : (((/* implicit */int) (short)-12519))))), (((((/* implicit */_Bool) (short)0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15736)))))))));
                var_15 = ((/* implicit */short) arr_1 [i_1]);
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned long long int) var_9);
}
