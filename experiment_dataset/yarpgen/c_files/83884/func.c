/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83884
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1835081180)) ? (17717151875651976308ULL) : (((/* implicit */unsigned long long int) 2U))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((var_5), (548208528U))))) : (((/* implicit */unsigned int) (~(min((var_12), (var_12))))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] = ((/* implicit */unsigned short) arr_1 [i_1]);
                            arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1835081196)) || ((_Bool)1))) ? (max((((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 2])), ((+(-1835081198))))) : ((+(((/* implicit */int) arr_4 [i_2 + 3] [i_2 + 3] [i_2 - 1]))))));
                            var_18 = ((/* implicit */unsigned short) arr_3 [i_2]);
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (short)2054);
                        }
                    } 
                } 
                arr_14 [6LL] [6LL] [6LL] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (arr_2 [i_1] [i_1] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_9))));
                var_20 = ((/* implicit */long long int) (+(max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)22))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_5);
    var_22 *= ((/* implicit */short) var_7);
}
