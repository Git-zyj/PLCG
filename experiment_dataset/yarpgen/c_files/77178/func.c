/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77178
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) 8743398668551397147LL)) ? (((/* implicit */unsigned int) 16777215)) : (281184974U))), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_2 [i_1]))))))));
                var_16 |= ((/* implicit */long long int) (+(max((((((/* implicit */unsigned long long int) 3688226406U)) + (var_11))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))));
                var_17 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [18LL])) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) arr_1 [16ULL]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                                var_18 = ((/* implicit */_Bool) (+(4013782348U)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(-4LL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0)));
}
