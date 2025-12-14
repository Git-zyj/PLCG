/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67850
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(524287ULL)))) || ((_Bool)1)))), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (-2509397145623280623LL))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */signed char) min((-4735854742090262651LL), (((/* implicit */long long int) ((((/* implicit */_Bool) min((-34840805), (arr_0 [i_0])))) || (((((/* implicit */_Bool) var_15)) || ((_Bool)1))))))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))) ? (2509397145623280638LL) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)36600)))) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) min((var_12), (var_12)))))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned int) ((((_Bool) (unsigned short)49817)) ? (((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49812))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)36600), (((/* implicit */unsigned short) var_14))))))))))));
    var_19 = ((/* implicit */unsigned char) var_4);
    var_20 = ((/* implicit */long long int) var_7);
    var_21 = ((/* implicit */_Bool) var_1);
}
