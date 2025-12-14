/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97243
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) 4095U)) ? (4294967295U) : (1531796904U));
        arr_3 [i_0] = ((/* implicit */signed char) ((((1919018498U) | (max((var_0), (((/* implicit */unsigned int) (short)31735)))))) > (var_1)));
        arr_4 [i_0] = var_0;
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        arr_8 [6U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3206045331U)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-20433)), (((((/* implicit */_Bool) var_6)) ? (arr_5 [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
        arr_9 [i_1] [i_1] = 0U;
        arr_10 [i_1] = ((/* implicit */signed char) ((unsigned int) 1470821445U));
        arr_11 [i_1 - 2] [11U] |= ((/* implicit */signed char) arr_0 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_14 [(short)7] [(short)14] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10238))) : (3083669152U)));
        arr_15 [19U] = min((((((/* implicit */_Bool) (signed char)-17)) ? (2157951109U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) arr_12 [i_2] [20U])));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_21 [21U] [i_3] [i_3] = ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_4])))))))) + (min((((/* implicit */unsigned int) (short)32738)), (4294967295U))));
                    arr_22 [i_2] [i_3] [i_3] [22U] = var_9;
                    arr_23 [10U] [i_3] [i_4] = ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_4] [i_4] [(short)11] [i_2]), ((short)-5445)))))));
                    arr_24 [i_2] = 1818704055U;
                }
            } 
        } 
        arr_25 [i_2] &= (-(((unsigned int) arr_19 [(signed char)4] [i_2] [i_2] [i_2])));
        arr_26 [i_2] &= ((/* implicit */short) var_2);
    }
    var_11 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (3661012136U)))));
    var_12 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (short)-32195))))));
}
