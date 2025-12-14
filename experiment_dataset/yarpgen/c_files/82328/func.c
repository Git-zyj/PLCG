/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82328
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (max((((/* implicit */unsigned int) var_3)), (var_2)))))) | (((((/* implicit */_Bool) var_13)) ? (((var_8) ? (((/* implicit */unsigned long long int) var_5)) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_2] [i_1] [i_0]), (arr_3 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (arr_0 [i_0])))) : (min((((/* implicit */long long int) var_3)), (arr_3 [i_0] [i_1] [i_2])))));
                    var_17 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) var_2)))), (var_15)));
                    var_18 -= ((/* implicit */long long int) (((~(arr_4 [i_2]))) << (((((/* implicit */int) arr_2 [(_Bool)1])) >> (((arr_8 [i_2]) + (169112159298341103LL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned int) arr_10 [19] [i_1] [14LL] [i_1]);
                                var_20 = ((min((min((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) var_8))))))) | (((/* implicit */unsigned long long int) var_9)));
                                var_21 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_2] [i_4]))))))) : (((arr_3 [i_0] [i_0] [i_4]) ^ (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) ((((((/* implicit */int) var_15)) % (((/* implicit */int) var_6)))) << (((/* implicit */int) ((arr_8 [(unsigned char)11]) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
