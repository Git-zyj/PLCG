/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94620
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15)) ? (7764528185593691647LL) : (-6740207636095841159LL)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (signed char)84))))) : (((/* implicit */int) var_12))))) + (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((3247992083U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = max((((1125625028935680ULL) | (((/* implicit */unsigned long long int) -4358110890255685388LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) -4358110890255685388LL))), (((int) arr_3 [i_0 + 1]))))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((-1027046154863518020LL), (min((((/* implicit */long long int) var_3)), (var_1))))) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) var_0))), (arr_3 [i_0])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_6)))))));
    var_22 = ((/* implicit */unsigned short) ((var_17) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) var_3))))))));
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_12))))) ? (var_14) : (((/* implicit */int) var_18))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) var_9)))))));
}
