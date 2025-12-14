/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84405
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
    var_13 = ((/* implicit */signed char) (~(((((/* implicit */int) max((var_5), ((unsigned char)252)))) - (((/* implicit */int) var_4))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_2] [i_1] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0]))) >> (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-67)))))))) ? (((((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) arr_3 [i_0] [i_0])))) + (((/* implicit */int) arr_2 [(_Bool)1] [i_2])))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1] [i_2]))))))));
                    var_14 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1]))) : ((-(((/* implicit */int) var_12))))));
                        var_16 ^= ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) + ((-(((/* implicit */int) (_Bool)0))))));
                        var_17 = arr_4 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 3];
                        var_18 -= ((/* implicit */signed char) arr_4 [(signed char)2] [i_2] [i_0] [i_2 + 1]);
                    }
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((arr_12 [i_0] [i_0] [i_2 + 1] [(unsigned char)16] [i_0]) ? (((/* implicit */int) arr_8 [i_4] [i_0])) : (((/* implicit */int) arr_5 [i_2 + 2])))) <= (((/* implicit */int) arr_4 [i_4 - 1] [i_4 + 1] [i_2] [i_4 + 1]))));
                        arr_14 [i_2] = ((/* implicit */unsigned char) (!(arr_10 [i_0] [i_2] [i_0])));
                        var_19 += ((((/* implicit */int) arr_5 [i_2 + 2])) > (((/* implicit */int) arr_5 [i_2 - 1])));
                        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 2]))));
                    }
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 2]))))) | ((-(((/* implicit */int) (_Bool)1))))));
                    }
                    arr_17 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (+(max((((/* implicit */int) arr_16 [i_2 + 1] [(_Bool)1] [i_2 - 1] [i_2 + 3] [i_2])), (((((/* implicit */int) arr_15 [i_2] [i_2] [i_2 + 2] [i_2])) - (((/* implicit */int) (unsigned char)4))))))));
                    var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_10 [i_2 + 3] [i_2 + 2] [i_2 + 2])) | (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)209))))));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_11))))));
}
