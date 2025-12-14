/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84636
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_12))))), (var_10)))) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) % (((/* implicit */int) (signed char)127))))))))));
    var_14 = ((/* implicit */int) min((((/* implicit */short) (signed char)124)), (var_1)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_16 += var_9;
                    var_17 = ((/* implicit */unsigned short) max((max((275425469U), (4019541827U))), (min((3092800156U), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34834))) != (arr_3 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (((+(((((/* implicit */_Bool) (unsigned short)34832)) ? (15405569283762575256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30722))))))) + (((/* implicit */unsigned long long int) ((max((2410240374U), (1U))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)54111))))))))));
}
