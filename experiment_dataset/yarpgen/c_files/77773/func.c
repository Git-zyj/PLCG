/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77773
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-1), ((short)-1)))) ? (((unsigned int) arr_3 [i_0] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */int) (short)21157)) : (((/* implicit */int) (short)-26553)))))));
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32766)) - (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18020))) : (arr_3 [i_0] [i_0])))))) ? (((unsigned int) ((int) arr_2 [2U]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21155))));
                var_12 = ((/* implicit */unsigned int) arr_0 [i_1]);
                arr_4 [i_0] = arr_2 [i_1];
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-10038)) | (((/* implicit */int) (short)-21140))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32751))) != (arr_3 [i_0] [i_0]))))) : (((unsigned int) var_0))))) ? (arr_3 [i_0] [i_0]) : (4294967295U)));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_2);
}
