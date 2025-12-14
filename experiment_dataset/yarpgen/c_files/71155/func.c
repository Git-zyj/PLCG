/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71155
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) var_14)) << (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) >> (((-8702137592225116490LL) + (8702137592225116519LL)))))))))));
                                var_18 = ((/* implicit */unsigned long long int) var_7);
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_15) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_2 - 2]))) >= (arr_0 [i_1 - 3]))))) : (8702137592225116510LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)255)));
                                arr_20 [i_6] [i_1] [i_2] [i_1] [i_0] = 26787914U;
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) ((7349728357037005644ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5859)))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) var_7);
}
