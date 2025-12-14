/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96093
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)40394)))) % ((~(9223372036854775807LL))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_2))))) | (((((/* implicit */_Bool) -717029617)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)998)))))))) > (((((/* implicit */_Bool) 766849871737988932ULL)) ? (max((2511038259153053057ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)998))) : (766849871737988935ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [7ULL] [i_3] = ((/* implicit */unsigned int) (((_Bool)0) ? (((17679894201971562681ULL) | (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) -717029638))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 3; i_4 < 14; i_4 += 4) 
                            {
                                var_13 += ((/* implicit */unsigned long long int) var_7);
                                var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) 40942169U)) : (10468079006715735711ULL))))))) : (((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4] [i_4])) ? (max((var_10), (((/* implicit */int) (_Bool)1)))) : (arr_1 [1LL] [i_0])))));
                                arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_4 - 3] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 3])) ? (var_6) : (((/* implicit */long long int) arr_12 [i_2] [i_4 - 3] [(short)12] [i_4] [i_4 - 2] [i_4 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483641)) ? (((/* implicit */int) (unsigned short)65069)) : (var_7))))));
                            }
                            for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? (((max((9676323283261316773ULL), (((/* implicit */unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [i_1] [16U] [i_0] [i_5])) : (((/* implicit */int) (short)-6892))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) var_1))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] = max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -969578174)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3165875542U))))), (arr_0 [i_1] [i_0]));
                                arr_18 [i_0] [i_1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((3165875560U) ^ (((/* implicit */unsigned int) 67108863))))))));
                                var_16 &= ((/* implicit */_Bool) (short)977);
                                var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 969578174)), (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)944)) ? (((/* implicit */int) (unsigned short)41070)) : (((/* implicit */int) (unsigned short)41070))))) : (var_6)))));
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) ((unsigned long long int) (-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
