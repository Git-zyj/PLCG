/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69376
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
    var_16 &= ((/* implicit */unsigned short) 16778161407519054384ULL);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                    var_17 = ((/* implicit */signed char) ((unsigned int) ((-481927587889155761LL) + (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((1023) % (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) ((var_1) - (arr_0 [(unsigned char)11] [i_0]))))));
                    var_19 = ((/* implicit */_Bool) (signed char)-14);
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4098351270U)))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16778161407519054384ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) (unsigned char)0))))));
}
