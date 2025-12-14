/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9153
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (var_0)));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(unsigned char)4] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))))));
        arr_3 [i_0] = var_6;
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = var_12;
        var_15 = (unsigned char)0;
        var_16 |= var_4;
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)35)) != (((/* implicit */int) (unsigned char)208))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                arr_14 [i_2] = (unsigned char)5;
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_18 = ((unsigned char) min((((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)251)))), (((/* implicit */int) ((unsigned char) var_1)))));
                            var_19 = ((unsigned char) ((unsigned char) var_12));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)7), (arr_5 [i_2 - 2])))) | (((((/* implicit */int) arr_5 [i_4 + 1])) - (((/* implicit */int) arr_5 [i_4 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
