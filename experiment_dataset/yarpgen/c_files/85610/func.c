/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85610
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) - (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (unsigned char)24)), ((unsigned short)12638))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) * (-1011824853)))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    var_14 = ((/* implicit */unsigned int) 8875658362024848518ULL);
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) - (var_8)))), (((/* implicit */int) arr_7 [i_2]))));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 968394469744999113LL)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)24039)) : (((/* implicit */int) (signed char)-93)))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) arr_9 [i_2] [i_4]))))))) ? (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) ((arr_11 [i_4] [i_3] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2])))))) : (((/* implicit */int) (signed char)41)))) : (((((/* implicit */_Bool) (unsigned short)4639)) ? (1047559285) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        arr_16 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)59274)) : (((/* implicit */int) arr_7 [i_2]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5472))) / (2ULL)))))) ? (5335419063424702544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((16642998272ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41464)))))))));
        arr_17 [i_2] = ((/* implicit */short) max(((+(1516717243))), (((((/* implicit */int) (short)-17924)) * (((/* implicit */int) arr_7 [i_2]))))));
        arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? ((-(((/* implicit */int) (short)5469)))) : (min((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32752)))), (arr_8 [i_2])))));
    }
}
