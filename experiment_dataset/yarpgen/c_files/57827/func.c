/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57827
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((unsigned int) var_14))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? ((+(var_5))) : (var_5))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((signed char) ((long long int) (~(arr_1 [i_0 + 1]))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_17 -= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_1 - 1]))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)9] [i_2] [i_1] [i_0 + 1] [i_0]))) : (arr_7 [i_0] [i_1] [i_1])));
                        var_19 = ((/* implicit */unsigned short) ((long long int) ((signed char) arr_7 [i_0] [i_2] [i_3])));
                        var_20 = ((unsigned short) ((((/* implicit */_Bool) (short)-13906)) ? (4019948838856465839ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_21 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [(short)1]);
                    }
                } 
            } 
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1]))))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
            var_23 = ((/* implicit */int) ((((_Bool) arr_2 [i_0])) ? (((unsigned int) arr_6 [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_1] [i_0]))))));
        }
        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0)))) : (((((/* implicit */_Bool) (short)-32765)) ? (4019948838856465839ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    }
}
