/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59699
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) ((-1814276259) % ((~(((/* implicit */int) (unsigned char)24))))));
                        arr_10 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_0 [i_0] [i_3]))))));
                        arr_11 [(unsigned short)2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((min((arr_5 [i_0] [1U] [i_2]), (arr_5 [i_1] [i_2] [i_3]))), ((unsigned short)65525)));
                        arr_12 [i_3] [(unsigned char)1] [i_2] [i_0] [i_1] [i_0] |= ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3]);
                    }
                    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        arr_16 [i_4] &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 3] [i_4 + 2] [i_4 - 2])))) != (((/* implicit */int) ((((/* implicit */int) (signed char)105)) <= (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 3])))))));
                        var_20 = ((/* implicit */unsigned char) var_6);
                    }
                    arr_17 [6] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) arr_0 [i_0] [i_1]))), (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) -1814276259);
    var_22 = ((/* implicit */unsigned int) var_7);
}
