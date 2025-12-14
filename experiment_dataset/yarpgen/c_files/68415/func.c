/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68415
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
    var_19 += ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_5 [i_1]))))));
                var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)29))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [16])))))) ? (max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
                var_21 += ((((/* implicit */_Bool) (~(max((1637344527592414476ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (_Bool)1))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0]))))))) ? (((/* implicit */int) (unsigned short)39992)) : ((~(((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((unsigned long long int) var_1));
    var_25 = ((/* implicit */unsigned int) var_5);
}
