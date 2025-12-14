/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62828
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
    var_11 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30354))) : (587989216883071205ULL))) << (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3478865042438430521LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-105)))))) ? (((/* implicit */int) (unsigned short)8193)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_7) ? (6886370569609652769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-15256)), (var_10))))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_2 - 1])) ? (-1) : (arr_7 [i_2] [i_2 + 1] [i_2 - 2]))) : (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 = 749351330032046785LL;
                                var_14 = ((/* implicit */unsigned int) ((int) min((var_5), (((/* implicit */unsigned char) (signed char)60)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (max((661846670), (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1]))))));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        arr_16 [i_5] = (i_5 % 2 == zero) ? (((/* implicit */int) max((((6886370569609652777ULL) >> (((((/* implicit */int) arr_14 [i_5])) - (38023))))), (((/* implicit */unsigned long long int) (short)15256))))) : (((/* implicit */int) max((((6886370569609652777ULL) >> (((((((/* implicit */int) arr_14 [i_5])) - (38023))) - (1430))))), (((/* implicit */unsigned long long int) (short)15256)))));
        var_15 = ((((/* implicit */_Bool) (short)-16319)) ? (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_5])))) : (((/* implicit */int) var_6)));
        var_16 = ((/* implicit */unsigned char) max(((~(max((1), (((/* implicit */int) (signed char)0)))))), (((/* implicit */int) arr_15 [i_5]))));
    }
}
