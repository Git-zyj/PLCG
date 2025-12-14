/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91650
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
    var_10 -= ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) -368846393);
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)-119))) ? (((((/* implicit */_Bool) (unsigned short)64920)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (min((var_2), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (1839546249U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) -1LL);
}
