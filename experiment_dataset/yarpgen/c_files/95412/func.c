/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95412
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
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_1] |= max((((/* implicit */long long int) ((_Bool) arr_0 [i_0] [i_1]))), (max((((((/* implicit */_Bool) (unsigned short)6117)) ? (6618084267664493687LL) : (arr_0 [i_1] [i_0]))), (((/* implicit */long long int) var_3)))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */long long int) (unsigned short)59418)), (((arr_3 [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 1294312413U)) ? (8259432147734425339LL) : (((/* implicit */long long int) -1679893865))))));
    var_19 += ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) var_8)))));
}
