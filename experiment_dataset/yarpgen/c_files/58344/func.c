/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58344
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
    var_14 ^= ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (var_10)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7))))))), (((min((var_3), (((/* implicit */unsigned long long int) var_10)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))))))))));
                            var_16 *= ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))), (var_9))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
}
