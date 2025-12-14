/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57680
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (max((6727740656175097913LL), (((/* implicit */long long int) 3778216311U))))))));
        var_12 = ((/* implicit */signed char) var_7);
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) var_0);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (min((((/* implicit */unsigned long long int) ((-6727740656175097913LL) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) 6727740656175097926LL)) ? (9410369792909127824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) max(((signed char)93), (((/* implicit */signed char) (_Bool)1))));
                    arr_17 [i_2 + 1] [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_2])), (arr_4 [0])))), (var_4))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~(min((min((((/* implicit */unsigned int) var_8)), (var_6))), (min((((/* implicit */unsigned int) var_10)), (var_1)))))));
}
