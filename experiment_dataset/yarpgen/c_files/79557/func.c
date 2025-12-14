/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79557
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
    var_10 = ((int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_11 = 11260027768055548451ULL;
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_2 - 3]))) ? ((~(((/* implicit */int) (short)0)))) : ((~(((/* implicit */int) arr_0 [i_2 - 4])))))))));
                            var_13 *= ((/* implicit */signed char) (-((-(((unsigned long long int) var_7))))));
                            var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [13LL] [i_2 - 2])) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0])))) | (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2 - 2]))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(arr_9 [i_0])))) ? (min((((/* implicit */unsigned int) var_2)), (arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))))));
            }
        } 
    } 
}
