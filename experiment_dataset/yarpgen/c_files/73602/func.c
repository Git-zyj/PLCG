/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73602
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) (+(((var_4) ? (((/* implicit */int) var_0)) : (var_16)))));
                            arr_15 [6] [i_1] [i_1 - 2] [i_1] [(signed char)1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                        }
                        var_19 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (var_2)))) || (((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_0] [i_0] [i_0]))))) * ((+(((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_8)))))))));
                    }
                } 
            } 
        } 
        var_20 |= ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) var_5))));
        var_21 = ((/* implicit */short) var_7);
    }
    var_22 = ((/* implicit */unsigned short) min((max((((((/* implicit */int) var_7)) | (((/* implicit */int) var_9)))), (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_16 [i_5] [i_5])) != (((/* implicit */int) var_6))))));
        var_24 += ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_16 [(short)18] [(short)18]))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+((-(((/* implicit */int) var_2)))))))));
        var_26 += arr_17 [i_5];
    }
}
