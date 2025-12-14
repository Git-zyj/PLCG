/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86589
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
    var_17 += ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) ((int) var_1)))), (min((var_2), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))));
    var_18 ^= ((/* implicit */long long int) var_13);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (+(4294967282U)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((short) max((((/* implicit */int) max((var_13), (var_8)))), (((((/* implicit */int) arr_5 [i_1] [(unsigned char)7])) << (((arr_1 [i_1]) - (65852630U))))))));
                    var_21 = ((/* implicit */unsigned int) min((max(((unsigned short)41935), ((unsigned short)41929))), (((/* implicit */unsigned short) (_Bool)0))));
                }
            } 
        } 
    } 
}
