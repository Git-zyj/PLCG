/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79048
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_16))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (-8443897010704977153LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))))))));
    var_20 = ((/* implicit */unsigned int) (+(8443897010704977152LL)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [3] [i_0] [i_3] [9] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (min((var_16), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_1 + 1] [(unsigned char)2] [i_0] [(unsigned short)1] [(unsigned char)5]))))))));
                                var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_14 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1] [i_2] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19)))))))))));
                                arr_16 [i_0] = var_7;
                                arr_17 [i_0] [i_0] [i_3] = ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)252)))))) != (((/* implicit */int) (signed char)-83)));
                            }
                        } 
                    } 
                    arr_18 [i_2 - 2] [i_1 - 1] [i_0] = 8443897010704977152LL;
                }
            } 
        } 
    } 
}
