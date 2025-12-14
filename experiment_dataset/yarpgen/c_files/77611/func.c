/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77611
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
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 = (~(((((/* implicit */_Bool) arr_8 [i_1] [i_0 - 1] [i_2] [i_0 - 1] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) arr_8 [i_4] [i_0 - 1] [i_2 - 1] [i_3] [i_2 - 1] [i_3])) : (arr_2 [i_1] [i_0 - 1] [(_Bool)1]))));
                                var_17 &= ((/* implicit */_Bool) arr_1 [i_0]);
                                var_18 = ((/* implicit */unsigned int) var_15);
                                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_3 [7] [i_1] [i_1]), (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (~(4398046511103LL)))))) ? (((/* implicit */int) arr_6 [i_4] [7LL] [i_2] [i_1] [i_0])) : (((((/* implicit */int) ((_Bool) var_14))) * ((~(((/* implicit */int) (signed char)-46))))))));
                            }
                        } 
                    } 
                    var_20 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (var_3)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_14))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_0 [i_2]))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_0))));
}
