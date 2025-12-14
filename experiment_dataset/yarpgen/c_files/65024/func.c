/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65024
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
    var_12 = ((/* implicit */signed char) ((unsigned char) (~(((((/* implicit */_Bool) 2989528202151720188LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? (((/* implicit */int) (short)21673)) : (((/* implicit */int) arr_0 [(signed char)2])))) / (((/* implicit */int) arr_3 [i_0])))), ((~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)65306)) : (((/* implicit */int) arr_1 [i_0])))))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0 - 1])), (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) (short)60)) : (((/* implicit */int) var_7))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65306))) * (arr_2 [i_0 - 2] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_15 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)259))));
                        var_16 += ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) || (((_Bool) 1195532950))));
    }
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-47)) ? (((((var_11) << (((((/* implicit */int) (unsigned char)65)) - (63))))) | (((/* implicit */unsigned int) ((var_9) & (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) min((var_3), (var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-21674))) ^ (var_11))) : (var_11)))));
}
