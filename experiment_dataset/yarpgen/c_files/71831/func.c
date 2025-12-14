/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71831
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
    var_17 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) max(((-(((((/* implicit */int) var_15)) * (((/* implicit */int) var_11)))))), (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_2] [i_1])), (max(((short)17987), (var_8))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_5)) : (arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1]))), (((/* implicit */long long int) arr_10 [i_4] [i_4] [i_4 - 1] [i_3] [i_0 - 2] [i_0])))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) var_16))) : (((/* implicit */int) ((_Bool) var_13))))))));
                                var_19 = ((/* implicit */unsigned short) var_8);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_2);
}
