/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65294
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
    var_13 = ((/* implicit */short) min(((~(min((((/* implicit */unsigned long long int) var_7)), (var_6))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_10)), (((short) var_8)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((arr_0 [i_0 + 1]) * (((/* implicit */unsigned long long int) 2876549155U)))))))));
        var_15 = (!(((((131056U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) || (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */short) var_8))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((max((min((arr_6 [i_2] [i_1]), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2] [i_0])))), (((/* implicit */unsigned int) max((((/* implicit */short) var_8)), (arr_9 [i_0 - 1] [i_1] [i_2] [i_3 - 1])))))) >> (((((((/* implicit */_Bool) -1)) ? (2291503811U) : (131056U))) - (2291503806U)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            var_17 -= ((/* implicit */unsigned short) (-(((((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])) / (var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3 - 1])))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_0]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 = min((max((((/* implicit */unsigned int) (signed char)124)), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3] [i_0]))) : (arr_6 [i_0] [i_3]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((4294836251U), (arr_5 [i_0] [i_1] [i_2]))))))));
                            var_20 = ((/* implicit */unsigned long long int) -1LL);
                            var_21 ^= ((/* implicit */int) 131029U);
                        }
                        var_22 = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_3)) : (arr_13 [i_0] [i_0] [i_0 + 1])))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1] [i_0 - 1])), (var_2))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) min(((~(arr_17 [i_6] [i_6]))), (((/* implicit */int) ((max((-1LL), (((/* implicit */long long int) arr_16 [i_6])))) > (((/* implicit */long long int) var_1)))))));
        var_25 = ((/* implicit */short) var_4);
    }
    var_26 = ((/* implicit */unsigned short) max(((-(min((var_6), (var_6))))), (((/* implicit */unsigned long long int) var_0))));
    var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)41))))) : (((/* implicit */int) var_10)))), (((((/* implicit */int) var_0)) / ((-(((/* implicit */int) var_10))))))));
    var_28 = ((/* implicit */unsigned int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
