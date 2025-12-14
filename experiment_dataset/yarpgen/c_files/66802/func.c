/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66802
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -405253634)))))))) != (((((var_6) && (((/* implicit */_Bool) var_13)))) ? (min((var_13), (var_13))) : (((((/* implicit */_Bool) var_12)) ? (var_3) : (3121915286U)))))));
    var_16 = min(((-((-(((/* implicit */int) (unsigned short)23966)))))), (((/* implicit */int) var_11)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_3 [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((var_7), (((/* implicit */int) (short)25658))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)29513)) : (((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) var_6))));
                            var_19 ^= ((/* implicit */unsigned short) -79254903);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned short) min((79254902), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21918)) ? (3121915286U) : (((/* implicit */unsigned int) 79254903))))) && (((/* implicit */_Bool) min((var_4), (var_14)))))))));
}
