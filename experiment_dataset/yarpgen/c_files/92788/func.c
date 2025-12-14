/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92788
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((max((max((var_17), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))))), (((((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) << (((min((18446744073709551615ULL), (18446744073709551603ULL))) - (18446744073709551545ULL)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (short)32767)) << (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)1))))))));
                        var_21 = ((/* implicit */unsigned short) min((10ULL), (((/* implicit */unsigned long long int) 522849059U))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) var_9);
    var_23 = ((((/* implicit */int) min((min((((/* implicit */short) (_Bool)0)), ((short)32740))), (((/* implicit */short) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (_Bool)1)))))))) < (((/* implicit */int) var_0)));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4095)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) 18446744073709551615ULL))));
}
