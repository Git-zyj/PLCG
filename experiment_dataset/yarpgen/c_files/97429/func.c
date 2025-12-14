/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97429
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((unsigned int) 4294967272U));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) (+(arr_1 [i_1 - 1] [i_1 - 1]))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) var_10);
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((-(((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (24U))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (4294967272U)))));
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_6)), (var_5)))))))) : (((((((/* implicit */int) var_3)) > (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)3218))))) : (max((1044480U), (((/* implicit */unsigned int) (_Bool)1))))))));
    var_14 = ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)62)), (var_3)))) : (((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62317))) - (-5191703170618813116LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) : (var_10))));
}
