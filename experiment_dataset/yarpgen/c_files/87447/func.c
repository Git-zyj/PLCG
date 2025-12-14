/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87447
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
    var_10 = ((/* implicit */short) max((var_1), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 *= ((/* implicit */short) (~(arr_2 [i_0])));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((unsigned char) (short)-9561))) : ((+(((/* implicit */int) var_7))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((int) arr_2 [i_0]));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (267911168)));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -3)) ? (-1486374272) : (-3))));
                                var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (arr_14 [i_1] [i_2] [i_2 + 1] [i_4] [i_3]) : (((/* implicit */int) ((arr_14 [(short)16] [(unsigned char)20] [i_2 + 1] [i_4] [i_3]) >= (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */short) var_0);
            }
        } 
    } 
}
