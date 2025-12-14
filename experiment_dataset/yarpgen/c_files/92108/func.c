/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92108
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
    var_10 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (var_4)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)223)), (var_0)))) : (((((/* implicit */int) var_9)) % (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)223)) ? (((unsigned long long int) (short)4854)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))) | (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_8)) < (var_4)))))));
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-4859)))))))), (max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))) : (25ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_3)))))))))));
                    var_13 *= ((short) (~(((unsigned int) (short)16320))));
                    var_14 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) ((((/* implicit */int) (signed char)-31)) == (-1174966724)))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) (signed char)88)))))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_0]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_3);
    var_17 = ((/* implicit */unsigned short) var_3);
}
