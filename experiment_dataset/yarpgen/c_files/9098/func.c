/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9098
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
    var_14 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) (+(arr_0 [i_0])));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_13 [3U] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) << (((((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned short)37321)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (_Bool)1)))))) - (26287)))));
                        var_16 = ((/* implicit */unsigned int) ((unsigned char) max((min((((/* implicit */unsigned int) var_2)), (var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2])) < (((/* implicit */int) arr_8 [i_1 + 1] [(unsigned short)6] [i_3]))))))));
                        arr_14 [i_1] = ((/* implicit */short) arr_4 [i_1] [i_2 + 3]);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_4] [(_Bool)0]))));
        var_17 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) arr_11 [i_4] [i_4]))), (max((((/* implicit */unsigned int) arr_7 [i_4] [i_4] [i_4] [i_4])), (var_6)))))), (min((((/* implicit */long long int) arr_16 [i_4])), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) + (var_9)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = arr_18 [i_5];
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_18 [i_6 - 1]);
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (unsigned int i_8 = 1; i_8 < 24; i_8 += 2) 
                {
                    {
                        var_19 = (~(((/* implicit */int) arr_27 [18U] [i_6 - 1])));
                        arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (_Bool)1);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-85)) && (((/* implicit */_Bool) arr_19 [i_8 - 1]))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) var_7);
        }
        arr_29 [i_5] = ((/* implicit */unsigned char) arr_20 [i_5] [i_5]);
        var_22 = ((/* implicit */_Bool) arr_21 [i_5] [i_5]);
        arr_30 [17] = ((/* implicit */short) arr_21 [3ULL] [i_5]);
    }
}
