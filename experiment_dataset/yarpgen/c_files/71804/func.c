/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71804
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_10), (((/* implicit */short) var_1)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [(short)11] [i_2] [i_0] = ((/* implicit */signed char) (+((-(arr_2 [i_0])))));
                        var_21 += ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) * (min((((/* implicit */unsigned int) (short)-14470)), (3458389507U)))))));
                        arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) (signed char)(-127 - 1)))))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((((/* implicit */_Bool) (~(min((234124735), (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_11)))))) : (var_4));
}
