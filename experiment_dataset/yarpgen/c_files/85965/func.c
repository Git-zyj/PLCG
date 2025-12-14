/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85965
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
    var_14 |= ((/* implicit */unsigned short) var_5);
    var_15 = ((/* implicit */signed char) var_11);
    var_16 = ((/* implicit */unsigned short) ((unsigned char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26781))) : (1512832791527818338LL))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) -1650519919)), (var_7))) : ((-(var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((-1330917243), (((/* implicit */int) var_4))))) * (max((((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1] [13LL])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (11576677755099044679ULL)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) var_0);
                var_19 = ((/* implicit */unsigned char) -1650519899);
            }
        } 
    } 
}
