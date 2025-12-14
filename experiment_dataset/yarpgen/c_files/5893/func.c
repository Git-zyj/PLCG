/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5893
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
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((3940845359U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (min((((/* implicit */unsigned short) ((354121963U) <= (var_7)))), (var_16)))));
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) 3940845353U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3469208537U)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_21 = arr_1 [i_0];
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (unsigned char)250)), (arr_2 [i_1 - 2]))), (((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                arr_8 [i_0] [i_0] [i_0] = 1U;
            }
            var_24 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_5)))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_3]))) : (min((2201317683U), (((/* implicit */unsigned int) (unsigned short)57693)))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [i_6] [i_5] [i_4] [i_3] [i_0] = ((/* implicit */int) max((((arr_18 [i_3] [i_3] [i_4] [i_5] [i_6]) << (((arr_10 [i_0] [i_3] [i_4]) - (2498877589U))))), (arr_18 [i_0] [i_3] [i_4] [i_5] [i_6])));
                            var_26 = (_Bool)1;
                            arr_23 [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned int) var_17)), (var_0))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned char) var_16);
            var_28 = ((/* implicit */_Bool) ((((arr_16 [i_0] [i_3] [i_3] [i_0] [i_0]) < (3940845368U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_3] [i_3]))) : (((((/* implicit */long long int) arr_2 [i_0])) ^ (arr_12 [i_0] [i_3] [i_3])))));
            var_29 = (+(354121951U));
        }
        arr_24 [i_0] = ((/* implicit */unsigned int) (unsigned char)7);
    }
}
