/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65231
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
    var_18 = ((/* implicit */signed char) var_12);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)37))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17))))))) ? (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_9);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1486121332)) ? (867033367U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (_Bool)1)) : (3)))))) >> (((1716406881U) - (1716406855U)))));
                            arr_13 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */short) var_16);
                        }
                    } 
                } 
            }
        } 
    } 
}
