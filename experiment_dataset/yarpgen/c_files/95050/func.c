/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95050
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
    var_14 ^= ((/* implicit */unsigned short) ((((((((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_11))))) | ((~(var_4))))) + (9223372036854775807LL))) >> (((var_3) - (4752270704468220646LL)))));
    var_15 ^= ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned short) var_4);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3))))) < (((int) min((var_2), (var_2))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_13);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_14 [i_3] [i_0] [i_0] [i_0 - 1] [i_0 - 1] &= ((/* implicit */signed char) ((max((((/* implicit */int) var_7)), (var_0))) << (((((((/* implicit */int) var_1)) & (((/* implicit */int) var_1)))) - (32243)))));
                        arr_15 [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */signed char) ((((long long int) min((var_0), (((/* implicit */int) var_13))))) + (((/* implicit */long long int) (~(((/* implicit */int) max((var_2), (var_2)))))))));
                    }
                } 
            } 
        } 
    }
}
