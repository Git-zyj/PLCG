/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56150
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
    var_12 = ((/* implicit */unsigned char) (((((_Bool)1) ? (2980505452U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_13 = var_7;
                            var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) var_10))))))) ? (1023U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_5 [i_0 + 2] [12U] [i_2])))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1] [i_0]))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_7 [i_0]))))))));
            }
        } 
    } 
    var_16 |= min((((/* implicit */unsigned int) ((min((var_3), (var_3))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (724427159U))))))), (21U));
}
