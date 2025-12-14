/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8625
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
    var_10 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min(((!(((/* implicit */_Bool) (short)-29102)))), (((((/* implicit */_Bool) (short)29102)) && (((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))))));
                            arr_10 [i_0] = (-(((unsigned int) ((((/* implicit */_Bool) (short)11610)) ? (1375817556U) : (3692263290U)))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_12 += ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                arr_12 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) (short)-24467)))))));
                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */long long int) 1721313459U)) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_7))) - (0LL)))))));
                var_14 -= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) + (2147483647))) << (((((-3LL) + (23LL))) - (20LL)))))))))));
            }
        } 
    } 
}
