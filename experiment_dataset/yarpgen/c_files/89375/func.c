/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89375
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
    var_14 -= ((/* implicit */signed char) min((((/* implicit */short) ((((var_8) && (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((unsigned short) (short)4967)))))), (var_12)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) (((_Bool)1) ? (3453272456U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))));
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)7])) && (((/* implicit */_Bool) (unsigned short)27454)))) ? (1911227621U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_13)))) ? (min((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_0 [i_4]))))), ((+(((/* implicit */int) var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        arr_10 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1] [i_1] [i_2 - 1]))) - ((~(1788938816U)))));
                    }
                } 
            } 
        } 
        var_19 &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(short)8])) - (((/* implicit */int) arr_7 [8U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(unsigned short)14])) * (((/* implicit */int) arr_7 [10U]))))) : ((+(2253151873U))));
    }
}
