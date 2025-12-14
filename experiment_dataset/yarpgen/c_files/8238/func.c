/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8238
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-52))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_2]), ((signed char)-51)))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-32)))) >= (((/* implicit */int) (signed char)127))));
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)127)))))));
                }
            } 
        } 
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [(signed char)4]), (min(((signed char)(-127 - 1)), (var_0)))))) ? ((~(((/* implicit */int) (signed char)28)))) : ((~(((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (signed char)127)))))))));
    }
    for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
    {
        var_13 = ((/* implicit */signed char) max((((((/* implicit */int) arr_10 [i_3 - 2] [i_3 + 1])) / (((/* implicit */int) var_8)))), (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1]))));
        var_14 += (signed char)112;
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(min((((((/* implicit */_Bool) arr_5 [i_3] [i_3 + 2] [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) (signed char)-98)))), (((((/* implicit */int) var_10)) & (((/* implicit */int) var_6)))))))))));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_16 = arr_1 [i_4] [i_4];
        var_17 = arr_13 [i_4];
        var_18 = ((/* implicit */signed char) min((var_18), (var_3)));
        var_19 = var_6;
        var_20 = arr_5 [i_4] [i_4] [i_4];
    }
    var_21 = ((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) != (((/* implicit */int) var_0))));
    var_22 = ((/* implicit */signed char) (((~(((/* implicit */int) max((var_4), (var_5)))))) - ((~(((/* implicit */int) (signed char)123))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
        {
            {
                var_23 &= ((signed char) (signed char)127);
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (signed char i_8 = 3; i_8 < 18; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_5] [i_8 + 2] [i_7])))))));
                                arr_26 [i_5] [i_8] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127))))) ? (((((/* implicit */_Bool) arr_25 [i_9 - 1] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_25 [i_9 - 1] [i_5] [i_6 + 1])) : (((/* implicit */int) arr_25 [i_9 - 1] [i_5] [i_6 - 2])))) : (((/* implicit */int) (signed char)-28))));
                                var_25 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((signed char) (signed char)(-127 - 1)))) ? (((((/* implicit */_Bool) arr_18 [i_5] [i_7])) ? (((/* implicit */int) arr_5 [i_6 + 1] [i_7] [i_7])) : (((/* implicit */int) (signed char)122)))) : (((/* implicit */int) ((signed char) (signed char)33)))))));
                                var_26 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-47)))), (((/* implicit */int) arr_2 [i_5]))))));
                            }
                        } 
                    } 
                } 
                arr_27 [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_24 [i_6 + 1] [i_5] [i_6 + 1] [i_6 + 1] [i_5] [i_6 + 1])) ? (((/* implicit */int) arr_24 [i_6 + 1] [i_5] [i_6] [i_6 + 1] [i_5] [i_6])) : (((/* implicit */int) arr_24 [i_6 - 2] [i_5] [i_6 - 2] [i_6 - 2] [i_5] [i_5])))), ((~(((/* implicit */int) (signed char)-89))))));
            }
        } 
    } 
}
