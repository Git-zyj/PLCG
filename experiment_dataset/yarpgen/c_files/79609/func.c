/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79609
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))));
                    var_20 = ((/* implicit */unsigned short) (+(var_7)));
                    var_21 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))), (var_17))), (((/* implicit */long long int) ((((arr_0 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1203473797)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_11))))))))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */long long int) var_0);
}
