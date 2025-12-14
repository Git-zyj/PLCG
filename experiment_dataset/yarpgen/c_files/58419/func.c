/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58419
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((signed char) max(((+(arr_0 [i_0] [i_1]))), (arr_0 [i_0] [i_1])));
                arr_5 [i_1] = (-(2932007872U));
                var_21 = ((unsigned char) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((_Bool) var_0)))));
                var_22 = ((/* implicit */unsigned short) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_3 [i_0])));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_7))))) - (arr_2 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) - (((arr_3 [(unsigned char)3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                arr_14 [i_2] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) ((signed char) var_17))))));
                var_23 += ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_2);
}
