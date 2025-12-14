/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82653
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
    var_17 = ((/* implicit */short) (+(((((/* implicit */int) max(((unsigned short)64698), (((/* implicit */unsigned short) (signed char)-97))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)3954)) : (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((1965023439U), ((+(((((/* implicit */_Bool) arr_1 [5U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (3926054594U)))))));
                var_18 *= ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) arr_4 [i_0])), (0U)))));
                var_19 *= ((/* implicit */long long int) max(((+((+(((/* implicit */int) var_16)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_5 [i_1] [i_0])) == (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_14)) ? (15764580149962597991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) max(((short)-8637), (var_9)))))), (((/* implicit */unsigned long long int) var_5))));
}
