/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95363
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
    var_15 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) var_12))), (max(((+(((/* implicit */int) (unsigned char)58)))), ((+(((/* implicit */int) arr_3 [i_1] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_10)) ? (2963124649079816287LL) : (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))));
                                var_18 = ((/* implicit */unsigned char) ((int) ((long long int) 0LL)));
                                var_19 = ((/* implicit */unsigned int) (!(var_2)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned char)30)))))) >= (((long long int) var_3))));
    var_21 -= (((_Bool)1) ? (((unsigned long long int) (signed char)68)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))));
}
