/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94861
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) 1501410711422650220LL);
            var_10 = ((((/* implicit */_Bool) ((unsigned long long int) -1501410711422650220LL))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
            var_11 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((arr_7 [i_2]) ^ (((/* implicit */int) arr_1 [i_0]))));
                        var_12 = ((/* implicit */short) arr_3 [i_3] [i_1] [i_0]);
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_13 = ((/* implicit */long long int) 1863763221);
            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_4] [i_0] [i_0]))));
        }
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1839889637783287688ULL)) ? (arr_12 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) (((-(((/* implicit */int) (short)2436)))) + (((/* implicit */int) var_6))))) + (max((((/* implicit */long long int) var_8)), (((long long int) (unsigned char)0))))));
}
