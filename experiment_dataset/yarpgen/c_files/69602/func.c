/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69602
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] = min(((+(((((/* implicit */_Bool) (unsigned short)53294)) ? (((/* implicit */int) (unsigned short)54130)) : (((/* implicit */int) (unsigned short)37621)))))), (((/* implicit */int) (signed char)59)));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -267387691)) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1])) : (arr_5 [i_0] [i_1 - 1] [i_1]))) == ((+(((((/* implicit */_Bool) (unsigned short)57406)) ? (((/* implicit */int) (unsigned short)65531)) : (-1678136714)))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (var_1))) < (((/* implicit */int) (unsigned short)60337)))))));
                arr_9 [i_0] [i_1] [i_1] = ((((/* implicit */int) min((arr_6 [i_1 + 2]), (arr_0 [i_1 + 2])))) & (var_8));
                arr_10 [i_0] [(unsigned short)14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_0])) ? (arr_3 [i_1 - 1]) : ((-(((/* implicit */int) (unsigned short)11405))))))) || ((!(((/* implicit */_Bool) ((-1078640230) / (arr_3 [i_1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_9);
}
