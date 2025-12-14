/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77930
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 *= ((short) min((((/* implicit */unsigned int) ((unsigned char) (unsigned char)63))), (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [3]))) : (4294967295U)))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)39))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min(((signed char)122), ((signed char)-63)))) : (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) var_7))))))))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */signed char) ((short) min(((~(((/* implicit */int) (short)-16330)))), (((/* implicit */int) (short)-16321)))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) var_9)))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) min(((unsigned char)131), (arr_6 [i_1] [i_1])))), ((~(((/* implicit */int) (signed char)16)))))) : (((/* implicit */int) var_6))));
                var_15 = ((/* implicit */_Bool) (signed char)122);
                var_16 = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
}
