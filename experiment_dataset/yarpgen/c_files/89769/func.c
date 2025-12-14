/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89769
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = min((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (max((-1592178055), (((/* implicit */int) var_6)))) : (((((/* implicit */int) (unsigned short)65529)) % (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))))), (((int) 1574700558)));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_0 - 3]), (var_4)))) ? (arr_5 [i_0 + 1]) : (max((((/* implicit */long long int) var_10)), (arr_5 [i_0 - 3]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)200)), ((unsigned short)4064)))) ? (var_9) : (((((/* implicit */int) (unsigned char)191)) % (var_9)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((66060288U), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */long long int) (unsigned short)0)), (var_4))))))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) < (((/* implicit */int) (unsigned short)28860))))))) ? (((/* implicit */unsigned int) min((min((((/* implicit */int) var_6)), (-45925894))), (((/* implicit */int) var_6))))) : (((unsigned int) (-(2630142565532757542LL))))));
    var_19 = ((/* implicit */unsigned short) var_14);
}
