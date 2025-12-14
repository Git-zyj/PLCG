/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62988
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_11 [i_1 + 1] = ((/* implicit */short) ((int) (unsigned char)0));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 2383333003198323679LL)) ? (((((/* implicit */_Bool) 5855748450646903413LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) : (-2383333003198323669LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_12);
    var_17 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)-16384)))), (((768076916928445219ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2459))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 2296835809958952960ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))));
    var_18 = ((/* implicit */unsigned char) min((11026653126359176789ULL), (((/* implicit */unsigned long long int) (unsigned char)9))));
}
