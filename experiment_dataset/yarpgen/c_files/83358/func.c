/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83358
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(var_3))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_4)) : ((+((-(((/* implicit */int) var_5)))))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((var_6), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (32766U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_15 = ((arr_0 [i_0 + 1]) == (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_1] [i_0]) : (var_3))));
            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10960))) : (2145386496U))))));
            var_17 = (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_11)) : (var_8))));
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((arr_3 [i_0] [i_3]), (((/* implicit */int) ((((/* implicit */_Bool) 188719425)) || (((/* implicit */_Bool) 2675277440U))))))))));
                    var_19 *= ((/* implicit */unsigned char) arr_7 [i_2] [i_2] [i_2]);
                    var_20 = ((/* implicit */short) (((((+(((/* implicit */int) var_0)))) > ((+(arr_0 [6U]))))) || (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0] [i_0 - 1])))))));
                    var_21 &= var_6;
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    arr_21 [i_6] [i_6] [i_6] [i_4] = ((_Bool) max((arr_0 [i_4]), (arr_0 [i_5])));
                    var_22 |= ((/* implicit */int) ((max(((~(-746588491))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))))))) <= (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_4] [i_5] [i_6])) : (((/* implicit */int) var_0)))) <= (((var_3) / (var_8))))))));
                    var_23 = var_1;
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((int) (-(-1751565307)))))));
                }
            } 
        } 
        arr_22 [i_4] [7U] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_1 [i_4] [i_4]), (((/* implicit */unsigned char) var_1)))))));
    }
    var_25 ^= (~(((/* implicit */int) var_9)));
}
