/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73185
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-370283085), (var_15)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)65408)) : (370283084))) : (((/* implicit */int) ((unsigned short) 0U)))))) : (var_2));
                var_18 = ((/* implicit */unsigned short) ((int) 1917256174U));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])), (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)21151))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -370283085)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0]))) : (arr_0 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -370283085)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32256)))))) : (var_12)))));
                                arr_12 [i_3] [i_1] = min((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)58)))))), ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)98)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) (unsigned char)197);
    var_20 = ((/* implicit */unsigned int) var_11);
}
