/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56976
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_6))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned char)143)), (var_10)))))) ? (max((6442081886037956047ULL), (((/* implicit */unsigned long long int) (unsigned char)13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((signed char) max((arr_1 [i_0]), (var_13))));
        arr_4 [i_0] = ((/* implicit */signed char) var_1);
    }
    for (unsigned int i_1 = 4; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((unsigned int) (+(((/* implicit */int) var_7)))))));
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15411))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(8583569627367968854ULL)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_1])) : ((+(((/* implicit */int) arr_2 [i_1] [i_1])))))) : (((/* implicit */int) max(((unsigned short)7771), (((/* implicit */unsigned short) (short)-23734)))))));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3178709743678287823LL)) ? (((unsigned long long int) arr_0 [(unsigned char)8] [(unsigned char)8])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) min((-21), (((/* implicit */int) (short)-1143))))) : (max((arr_0 [(unsigned short)2] [(unsigned short)2]), (((/* implicit */long long int) var_15)))))))));
    }
}
