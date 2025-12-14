/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90243
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
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)62771)), ((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))))));
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_2] [i_3]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (max((var_8), (((/* implicit */long long int) arr_11 [i_2] [i_1]))))))));
                    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((10914531970061158405ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0])))))))))));
                    arr_17 [i_2] [i_0] = ((/* implicit */_Bool) min(((((+(arr_5 [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_2])) * (((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)62769)))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) (!(((var_8) < (var_7)))));
    var_12 = ((/* implicit */short) (((+(var_0))) % (((/* implicit */long long int) (+((-(((/* implicit */int) var_3)))))))));
}
