/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98995
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
    var_17 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (var_12)))))) ? (((((_Bool) var_10)) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_13)))) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) ((unsigned char) var_10)))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((_Bool) (unsigned char)0)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_1 [i_0]), (var_9))))));
                    var_20 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */_Bool) min((max((((/* implicit */signed char) var_8)), (arr_8 [i_3]))), (min((((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2] [i_4])), ((signed char)-113)))));
                                arr_10 [i_0] [i_4] [i_4] [i_3] [i_4] [i_3] = (unsigned char)0;
                                arr_11 [i_0] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
