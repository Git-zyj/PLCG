/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75317
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
    var_11 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_9)) : (var_4)))) ? (var_4) : ((~(var_2)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) 2147483629)) : (arr_2 [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2837)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned short)2522))))) : (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)2522))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) 11444602532895615153ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28672))) : (arr_2 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_1 [(short)8]))));
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-25847), (((/* implicit */short) (_Bool)1)))))))), (arr_7 [i_1])));
    }
    var_15 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (unsigned char i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_8 [i_3])))) ? (arr_11 [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) arr_10 [i_2])) > (((/* implicit */int) var_10))))))))));
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_4]);
                    var_16 = ((/* implicit */long long int) max((arr_10 [i_2]), (arr_10 [i_4])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_3);
}
