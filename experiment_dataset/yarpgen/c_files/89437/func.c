/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89437
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                {
                    var_12 = min((max((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned short) arr_6 [i_2] [i_2 - 4] [i_2] [i_1 - 1])))), (((/* implicit */unsigned short) ((_Bool) (_Bool)1))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2] [i_2 - 1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2] [i_2 + 1]))) : (var_6)))));
                    var_14 -= ((/* implicit */unsigned long long int) max((arr_4 [i_1 + 1] [i_0]), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned short) arr_6 [(signed char)19] [i_0] [i_2 - 4] [i_1 + 1])))))));
                    var_15 = ((/* implicit */long long int) ((unsigned char) 1861181461453064430ULL));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_3] [i_3 + 2] [i_2 - 1]))) ? (((((/* implicit */int) arr_0 [i_2] [i_3 - 3])) ^ (((/* implicit */int) min((var_5), (var_5)))))) : (((/* implicit */int) max((arr_3 [i_2 - 1] [i_1 - 1]), (((/* implicit */signed char) var_5)))))));
                                arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) ((arr_9 [i_0] [i_3] [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))))))), ((+((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3 - 2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) var_7)))))));
}
