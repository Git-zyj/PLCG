/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63863
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) / (min(((-(549755813888ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(max((((/* implicit */int) (unsigned char)58)), (-1))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) 1)) ? (((/* implicit */int) var_5)) : (-1125831694))), (((/* implicit */int) arr_0 [i_0 + 3] [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2)) ? (1) : (-1857971700)))), (arr_3 [i_1] [i_0 + 3])));
            arr_5 [i_1] = ((/* implicit */unsigned short) (-(var_1)));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (short)-24846)))), ((!(((/* implicit */_Bool) (unsigned char)207)))))))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((long long int) ((1857971699) - (((/* implicit */int) (unsigned short)0))))))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (arr_1 [i_5] [i_3])));
                            arr_17 [i_0] [i_4] [i_0] [i_2] [i_0] |= ((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2]);
                        }
                    } 
                } 
            } 
        }
    }
    var_24 = ((/* implicit */int) var_0);
}
