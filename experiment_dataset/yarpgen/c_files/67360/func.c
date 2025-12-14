/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67360
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
    var_19 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : ((+(var_15))))));
    var_20 = ((((/* implicit */_Bool) (~(var_16)))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)72), ((signed char)-31)))) >> (((var_12) - (1005108105U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 = (+(arr_5 [i_0] [i_2] [i_1 + 1]));
                    arr_6 [i_2] [i_2] = ((signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (var_0))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)21)) & (((/* implicit */int) (signed char)70)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_2] [i_2] [i_0]) % (arr_0 [i_1 - 1])))) ? (max((arr_5 [i_3] [i_2] [i_1 + 1]), (((/* implicit */unsigned int) arr_4 [i_2])))) : (((unsigned int) 15U))));
                        var_23 ^= ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) 1811911601U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-105))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [(signed char)13] [i_2] = ((/* implicit */signed char) 0U);
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 3768887236U)) ? (arr_12 [i_1] [i_2] [i_2] [i_5]) : (arr_12 [i_0] [i_1] [i_2] [i_0]))));
                            var_25 = ((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)7] [i_2]))) : (((((/* implicit */_Bool) (signed char)63)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))))));
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_7))) % (((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_0 [(signed char)11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        }
                        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2])))) && ((!(((/* implicit */_Bool) var_3))))));
                        arr_19 [i_2] = var_13;
                    }
                }
            } 
        } 
    } 
}
