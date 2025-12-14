/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72043
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
    var_12 = ((/* implicit */unsigned short) (+(2324594869U)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)11] [i_0]))) / (min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) arr_0 [i_4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_2] [i_1])))))));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) var_7);
                    var_16 = ((/* implicit */short) max((arr_3 [i_2]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)22586)))))));
                    var_17 = ((/* implicit */unsigned int) var_1);
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((!(((/* implicit */_Bool) 3861559776U)))), ((!(((/* implicit */_Bool) 2926489290U)))))))));
                }
            } 
        } 
    } 
    var_19 = ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((1368478001U) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), ((+((((~(var_7))) >> (((var_0) - (4013968559U)))))))));
}
