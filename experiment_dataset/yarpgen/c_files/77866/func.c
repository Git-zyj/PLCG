/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77866
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((var_11) != (min((((/* implicit */int) (unsigned char)0)), (0)))))), (var_0)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) 35465847065542656ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (18411278226644008973ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))))))) : (arr_2 [i_1] [i_1] [i_1])));
                var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (max((-1383898829), (((/* implicit */int) (unsigned char)158))))))), (((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) << (((18411278226644008969ULL) - (18411278226644008964ULL)))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) arr_0 [i_0]))) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_2 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)26210))));
                                var_17 = ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2] [i_2 - 2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_5 [i_2] [i_2] [i_2 - 2] [i_2]));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_6 [i_0] [i_1] [i_2])))) << (((var_0) - (2784054658U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_19 = arr_6 [i_2 - 2] [i_2 + 2] [i_2 + 1];
                                var_20 += ((/* implicit */unsigned int) var_2);
                                arr_18 [i_5] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (arr_3 [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2 + 2] [i_5] [i_2] [i_2])))));
                                var_21 = arr_4 [i_1];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
