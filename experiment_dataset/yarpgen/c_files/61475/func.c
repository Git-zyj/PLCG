/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61475
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
    var_13 -= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) (short)-25);
                var_15 &= ((/* implicit */short) (_Bool)1);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-25)) == (((/* implicit */int) (_Bool)1)))) ? (((((3480977734U) > (3480977720U))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) (short)18924))))) : ((+(813989555U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7234)))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (short)24);
}
