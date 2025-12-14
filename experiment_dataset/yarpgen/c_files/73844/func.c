/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73844
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
    var_14 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_7)) || ((!(((/* implicit */_Bool) -4012843560575455336LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 -= (~(((((/* implicit */_Bool) ((unsigned short) arr_3 [i_1]))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)43))) : (max((((/* implicit */unsigned long long int) arr_1 [2LL])), (var_5))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((var_9), (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_1 [4ULL])))))))))));
                var_17 = ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3])) + (((/* implicit */int) ((unsigned char) max((3957154204U), (((/* implicit */unsigned int) var_10)))))))))));
                                var_20 = ((/* implicit */signed char) -4012843560575455317LL);
                                var_21 = var_2;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
