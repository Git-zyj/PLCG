/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70363
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
    var_17 = min((((/* implicit */signed char) (_Bool)1)), ((signed char)38));
    var_18 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */unsigned long long int) (~(min((var_4), (((/* implicit */int) var_15)))))))));
    var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    var_20 = ((long long int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 ^= ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                var_22 = ((/* implicit */signed char) (((-(var_0))) / (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_8 [(signed char)6] [i_1] [i_2] [i_0] = ((/* implicit */long long int) var_5);
                            var_23 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_7)) : (var_9))), (var_5)))));
                            arr_9 [i_0] [i_0] [8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (min((4095), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_1))));
                            arr_10 [i_0] [i_0] [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) min((min((var_0), (((var_15) ? (((/* implicit */long long int) var_4)) : (var_6))))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1)))))));
                            var_24 = min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9726)))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))), (((long long int) var_4)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
