/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9665
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
    var_13 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3974938798U)) ? (((/* implicit */long long int) var_11)) : (561676076828216922LL)))), ((+(var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((arr_3 [i_0 - 1]) ? (((/* implicit */unsigned long long int) var_11)) : ((+(((unsigned long long int) arr_3 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned int) var_1);
                            var_16 = ((/* implicit */unsigned int) arr_8 [i_3] [i_3] [i_3] [i_3] [i_0] [i_0]);
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_1 + 2])) > (((/* implicit */int) arr_5 [i_1] [i_1 - 3] [i_1]))))) / (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3] [i_1] [i_1 - 3] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1 - 3] [i_1] [i_1 - 3] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_1] [i_1 + 3] [i_1] [i_1]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((((long long int) (unsigned short)39738)) >> (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_8))))))));
                var_18 = ((unsigned char) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((var_3), (var_3))))));
                var_19 = ((/* implicit */unsigned short) min((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) ((1267091263U) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_9);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_9))));
}
