/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60081
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (2585013470U)))))), (max((((/* implicit */unsigned int) ((signed char) var_15))), (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_11))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_5 [i_3] [(signed char)8] [i_3]))));
                                var_20 += ((signed char) min((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_7 [12U] [i_1] [i_1] [i_3] [i_3] [(unsigned short)14])) : (((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)12))));
                            }
                            var_21 = ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7168))) : (2381684145U));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [13U] [i_0])) ? (933747177U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1])))))) ? (min((max((3371720498U), (arr_4 [i_0] [(signed char)12] [(signed char)18]))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_1])) - (25)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [(signed char)14] [i_1]))) % (arr_0 [(unsigned short)4] [i_1])))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_2))))))))));
                arr_13 [i_0] [i_1] [i_1] = arr_10 [i_0];
                var_23 *= ((/* implicit */unsigned short) (+((+(2950178966U)))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 18; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_21 [i_1] [(signed char)5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) 2950178966U);
                            arr_22 [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-35)), (1344788330U)));
                            var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_0)), (((3105867887U) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_16 [i_0] [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
