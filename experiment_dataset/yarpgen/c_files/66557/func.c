/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66557
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
    var_11 &= var_2;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(unsigned short)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_2 + 1]) ? (((/* implicit */int) (unsigned short)35001)) : (((/* implicit */int) arr_6 [i_2 + 1]))))) ? (((arr_6 [i_2 + 1]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35005))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53071)) ? (((/* implicit */int) (unsigned short)22633)) : (((/* implicit */int) arr_6 [i_2 - 1])))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (8525114339695780521LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -8525114339695780535LL))))) : (((/* implicit */int) (unsigned short)30543))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) == (arr_4 [(unsigned short)7] [(unsigned short)7])))) : (((/* implicit */int) min((((/* implicit */signed char) var_3)), (var_5))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_7))) | (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) ? (min((min((8525114339695780534LL), (-9LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)42902)), (var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_3)))))));
}
