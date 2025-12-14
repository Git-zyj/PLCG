/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67530
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
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8057))) >= (7766930922528097370ULL)));
    var_19 = (((-(((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 2474601976U)))))) < (((/* implicit */unsigned long long int) ((long long int) (unsigned short)8038))));
    var_20 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_3 + 1]) : (((unsigned long long int) arr_3 [(short)17])))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 2])) + (((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1820365319U)) ? (((/* implicit */int) ((1820365319U) == (((/* implicit */unsigned int) 940237410))))) : ((+(((/* implicit */int) (short)-23676))))));
                            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) <= (((var_6) ? (2221417435U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10546)))))));
                        }
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
                        arr_18 [i_0] [15ULL] [i_4] [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -940237411)) && (var_0))))) + (((((/* implicit */_Bool) 6LL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))));
            arr_19 [i_1] |= ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_0]) : (var_4));
        }
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) (short)-23688))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_29 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
    }
}
