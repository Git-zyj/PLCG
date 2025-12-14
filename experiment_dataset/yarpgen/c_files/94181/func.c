/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94181
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (signed char)118))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))) * ((-(((((/* implicit */int) (signed char)-67)) % (((/* implicit */int) (signed char)-9))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 - 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) arr_4 [i_1] [i_1 - 2])))) : ((+(((/* implicit */int) arr_3 [i_0 - 2]))))));
                arr_6 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-13)) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1]))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_7 [(signed char)16] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1]))))));
                                arr_15 [i_1] [i_1] [i_2] [i_1] [i_4] [i_2] = var_11;
                                arr_16 [i_0 - 1] [i_1] [i_1] [i_3] [(signed char)2] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_2])) < (((/* implicit */int) arr_8 [i_0])))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */int) arr_2 [i_0 - 1])) % (((/* implicit */int) arr_3 [i_0 - 1])))) : (((/* implicit */int) ((signed char) max((arr_5 [i_0] [(signed char)11]), (arr_8 [i_0])))))));
            }
        } 
    } 
    var_16 = var_11;
}
