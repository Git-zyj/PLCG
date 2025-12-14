/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73628
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
    var_10 = ((/* implicit */signed char) max((var_10), (var_1)));
    var_11 = ((((/* implicit */_Bool) var_5)) ? ((~((-(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_1)));
    var_12 |= var_0;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) (((~((-(arr_7 [i_0] [i_0] [i_2]))))) << ((((-(arr_3 [i_0]))) - (2116922369)))));
                    var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (((((-(var_2))) << (((((var_2) + (6592952087096322382LL))) - (38LL))))) >= (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
}
