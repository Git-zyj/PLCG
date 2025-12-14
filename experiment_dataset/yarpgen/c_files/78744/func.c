/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78744
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
    var_11 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_12 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) (unsigned short)65535);
                arr_4 [i_1 + 1] [21U] = ((/* implicit */unsigned short) ((signed char) var_8));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != ((~(((-3683741715684689737LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
