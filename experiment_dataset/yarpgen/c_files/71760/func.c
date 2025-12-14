/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71760
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [0ULL]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(-8919578572286826063LL))))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(var_5))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (-(max((max((arr_10 [(_Bool)1] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) arr_2 [16] [16])))))))));
                    var_17 = ((/* implicit */unsigned long long int) (!(arr_3 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */long long int) (short)5267);
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-5261)), (var_1)));
    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((int) 17170230627711208597ULL))))));
    var_21 = ((((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)1))))) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)28543))))))));
}
