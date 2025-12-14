/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83982
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
    var_10 = ((/* implicit */unsigned char) var_8);
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) * (((unsigned long long int) -1368345713)))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1368345691)) / (7146140552894725883LL))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) | ((-(((((/* implicit */int) var_1)) * (((/* implicit */int) var_4))))))));
    var_13 *= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 18446744056529682432ULL)) ? ((+(((/* implicit */int) (short)17276)))) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_7))))))) ? ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_3 + 1])))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_6 [i_1] [i_1] [(short)8]))))));
                        arr_12 [6ULL] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2535892084771834813ULL)) ? (((/* implicit */int) arr_9 [i_3] [i_0] [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) (unsigned char)255))))));
                    }
                } 
            } 
        } 
    }
}
