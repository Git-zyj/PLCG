/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96864
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
    var_13 = ((/* implicit */short) (((((-(((/* implicit */int) ((unsigned char) var_11))))) + (2147483647))) >> ((((~(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))))) - (4294967149U)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned char)236))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) == (((/* implicit */int) arr_1 [i_0])))))) : (max((1256616361U), (((/* implicit */unsigned int) (unsigned short)16256))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)44))) : (((((/* implicit */_Bool) (unsigned short)49280)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)0))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (var_8))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (4294443008U))))) : (3038350933U)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_15 = var_10;
        arr_8 [i_1] = ((/* implicit */unsigned char) ((short) ((arr_6 [i_1 - 1] [i_1]) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))));
    }
}
