/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93282
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
    var_18 = ((/* implicit */unsigned char) ((_Bool) (!(((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    var_19 = ((/* implicit */unsigned char) (+(var_2)));
    var_20 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */long long int) var_0)) > (var_8))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_1] = (-(((long long int) (unsigned char)60)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((-(((arr_3 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_12))))))) == (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) - (var_2))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)150)) > (((/* implicit */int) (unsigned short)46909))))) + (max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0]))))));
            }
        } 
    } 
}
