/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79395
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
    var_13 -= ((/* implicit */int) max((((/* implicit */long long int) var_12)), (var_3)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((unsigned char) var_2)))));
                    var_15 = ((/* implicit */unsigned char) ((int) var_11));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)252))))), (((unsigned int) 33554428))))));
                                var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) min((min((((/* implicit */short) var_0)), (var_5))), (((/* implicit */short) var_4)))))));
                                var_18 *= ((/* implicit */_Bool) ((unsigned short) min((min((-620746383), (33554436))), (((/* implicit */int) min((var_0), (var_10)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_5] = (-((~(-1LL))));
                                var_19 = ((/* implicit */long long int) var_0);
                                var_20 = (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)11))));
                                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) (-2147483647 - 1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */int) var_5);
}
