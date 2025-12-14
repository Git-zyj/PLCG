/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91053
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
    var_13 *= (((!(((/* implicit */_Bool) (~(152383275)))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    var_14 &= ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) max((var_6), (((/* implicit */unsigned int) ((signed char) ((arr_1 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_16 -= (-(((/* implicit */int) (unsigned short)0)));
                                var_17 = ((/* implicit */unsigned char) (signed char)-94);
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] = var_8;
                var_18 = ((/* implicit */signed char) -152383275);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_9))));
}
