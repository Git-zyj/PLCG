/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8203
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
    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -801443935)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)96))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) arr_3 [i_0 - 1]);
                var_15 = ((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 16334093846907058317ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) : (213012302U)))))) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) min(((unsigned char)180), (((/* implicit */unsigned char) arr_3 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2016015525)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) (short)-8192))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_2);
}
