/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81195
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
    var_10 = ((((/* implicit */_Bool) var_2)) ? ((((!(var_0))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)114)), (var_2))))) : (max((var_6), (((/* implicit */long long int) (unsigned char)0)))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) arr_3 [(unsigned char)8] [i_1] [(unsigned char)8]);
                    arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) (_Bool)1);
                                var_13 = ((/* implicit */long long int) arr_12 [i_0 + 4] [(_Bool)1] [(_Bool)1] [i_3] [i_0 + 4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) (~(max((((/* implicit */int) max((var_2), (var_2)))), ((-(((/* implicit */int) var_9))))))));
}
