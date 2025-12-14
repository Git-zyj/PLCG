/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56857
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
    var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)32998))) ? (var_7) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)8811)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == ((+(((/* implicit */int) var_8))))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [6ULL] [i_1] [i_2 - 1])) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-8813)))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) var_10)))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8805)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (short)21))));
    }
}
