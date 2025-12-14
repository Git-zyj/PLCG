/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85688
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) 2083164493)) != (1838587387U)))), (((signed char) ((((/* implicit */_Bool) -191652114)) ? (var_9) : (((/* implicit */int) (short)-441)))))));
                    var_10 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)31)) ? ((-(((/* implicit */int) (unsigned short)65493)))) : (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_11 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_5))))))) ^ (((((/* implicit */_Bool) (~(456802160U)))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (signed char)-120)))))))));
}
