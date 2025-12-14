/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6024
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4200694434U)) ? (((/* implicit */long long int) ((-711698507) - (((/* implicit */int) (unsigned char)230))))) : (((-3499173885216848455LL) & (((/* implicit */long long int) arr_0 [i_3])))))))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((long long int) ((long long int) arr_7 [i_0] [i_1 - 2] [i_3]))))));
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */long long int) var_1);
                        var_14 = ((/* implicit */signed char) 711698506);
                        var_15 = ((/* implicit */unsigned char) min((var_15), ((unsigned char)0)));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned int) var_3);
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 2] [i_2] [i_4]))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_5 - 2] [(_Bool)0])) ? (((/* implicit */int) arr_11 [i_2] [i_1] [i_5 - 2] [i_5 + 2])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_5 - 2] [i_5 - 2]))));
                        var_19 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-3)) / (((/* implicit */int) var_3))));
                    }
                    arr_17 [i_0] [i_0] [1ULL] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_1 - 2]))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), (var_6)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1 + 1] [1LL])) ? (var_8) : (((/* implicit */int) (unsigned short)4953))))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((var_5) - (623087229U)))))) : (((unsigned int) var_4)))) : (arr_10 [i_1] [11] [i_2] [i_1 + 1])));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) var_0);
    var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) ((signed char) var_1)))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
}
