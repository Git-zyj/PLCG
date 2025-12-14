/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64728
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [(unsigned short)5])))) : (((/* implicit */long long int) (~(arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_15) : (var_15))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (arr_5 [i_0] [i_2 - 2])))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))))));
                    var_19 = ((/* implicit */_Bool) var_14);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) ((short) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_2)))));
    var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (var_8)))))));
    var_22 = ((/* implicit */short) var_7);
    var_23 = ((/* implicit */unsigned long long int) var_11);
}
