/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79583
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) var_1))));
    var_11 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33352)) % (((/* implicit */int) var_2))))) == (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18513))))))))));
    var_12 = ((/* implicit */_Bool) (((-(((/* implicit */int) ((short) var_8))))) & ((+(((/* implicit */int) ((((/* implicit */int) var_1)) > (var_5))))))));
    var_13 = ((/* implicit */short) ((int) ((unsigned short) (-(5ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((min((min((((/* implicit */int) arr_4 [i_1])), (arr_2 [i_1]))), (arr_3 [(unsigned short)16] [i_0] [i_0]))) >= (((/* implicit */int) arr_4 [i_1 + 2])))))));
                var_15 ^= ((/* implicit */unsigned long long int) ((((-177178927) + (2147483647))) << (((772641180) - (772641180)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_5 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1]))) & (min((((((/* implicit */int) var_4)) << (0ULL))), (((/* implicit */int) ((((/* implicit */_Bool) 11376205841080415757ULL)) || (arr_6 [i_3] [i_0] [i_0]))))))));
                                arr_12 [i_1] = (((-(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])) ? (arr_10 [i_0] [i_4] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [14LL] [i_1]))))))) >= (((/* implicit */unsigned long long int) (+(((long long int) -1639078275))))));
                            }
                            for (int i_5 = 1; i_5 < 19; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_5] [i_5] [i_5] = ((((/* implicit */unsigned long long int) arr_3 [(short)7] [(short)7] [i_3])) ^ ((-(min((arr_14 [i_0] [i_1] [i_2] [i_2] [i_5 + 2]), (arr_14 [i_0] [17ULL] [i_0] [i_3] [i_5 + 2]))))));
                                arr_18 [i_3] [i_3] [i_2] [i_1] [i_5] = ((/* implicit */short) (+(var_6)));
                            }
                            arr_19 [i_0] [i_0] [i_2] [i_1] = ((int) max((((/* implicit */unsigned long long int) (!((_Bool)0)))), (((unsigned long long int) (unsigned char)246))));
                        }
                    } 
                } 
            }
        } 
    } 
}
