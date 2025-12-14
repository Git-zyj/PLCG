/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73169
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
    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */unsigned long long int) (-(((var_10) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_14 = min((((/* implicit */unsigned char) (((_Bool)1) && (((var_8) || (((/* implicit */_Bool) (unsigned short)63991))))))), ((unsigned char)4));
                                var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_4)) << (((min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])), (-939393189))) + (939393199)))))));
                                var_16 = arr_10 [i_0] [(signed char)15] [i_2] [i_2] [i_4];
                                var_17 += ((/* implicit */unsigned long long int) var_7);
                                arr_13 [i_0] [(_Bool)1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) ((int) ((unsigned int) 8191ULL)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) min((min((18446744073709543424ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (unsigned char)4))));
            }
        } 
    } 
}
