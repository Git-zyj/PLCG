/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65261
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */short) var_1)), (min((((/* implicit */short) var_7)), (var_14)))))), (max((max((-2791985702425302198LL), (((/* implicit */long long int) var_12)))), (min((-2791985702425302198LL), (((/* implicit */long long int) var_14))))))));
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) != (min((-2791985702425302174LL), (2791985702425302174LL))))))) < (((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (2791985702425302173LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) 2791985702425302196LL);
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) var_14);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) var_5)) ? (2791985702425302197LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), ((+(var_15)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((min((-2791985702425302174LL), (((/* implicit */long long int) min((var_2), (((/* implicit */short) var_1))))))), (((/* implicit */long long int) var_1))));
}
