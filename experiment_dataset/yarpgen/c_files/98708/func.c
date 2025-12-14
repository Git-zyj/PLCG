/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98708
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_1 + 2])))) / (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-112)) / (-1647943682)))), (576700817U))))))));
                arr_6 [(short)3] = ((/* implicit */short) (((~(((/* implicit */int) var_1)))) == (((((/* implicit */_Bool) (+(var_12)))) ? ((+(((/* implicit */int) arr_2 [i_1 - 1])))) : ((+(((/* implicit */int) arr_1 [i_0]))))))));
                var_21 += ((/* implicit */short) min((7312931096043055151ULL), (((/* implicit */unsigned long long int) 576700822U))));
                arr_7 [i_0] [i_0] = var_15;
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((int) var_9))))) ? (min((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_15)))))) : (min((min((var_7), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
    var_23 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_6)))))))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_1)))))));
    var_24 += (-((~(((/* implicit */int) max(((unsigned char)66), ((unsigned char)251)))))));
}
