/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6541
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)85)) - (((/* implicit */int) (signed char)-112))));
        var_15 = ((/* implicit */short) (-(((/* implicit */int) (signed char)85))));
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_11);
            var_16 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 + 2] [2LL])) + (((/* implicit */int) arr_4 [i_1] [18LL]))));
            var_17 = (((-(arr_3 [i_1] [i_1]))) % (arr_3 [i_1 - 1] [i_1]));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((arr_2 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (short)511))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_1])) / (arr_3 [i_1 - 1] [i_1]))))));
        }
        var_18 = ((/* implicit */_Bool) max((((/* implicit */int) ((max((((/* implicit */long long int) arr_4 [i_1] [i_1])), (arr_2 [i_1]))) != (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1 + 3] [i_1]), (((/* implicit */short) (signed char)86))))))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                arr_13 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((max((((/* implicit */int) arr_11 [i_4])), (arr_3 [i_3] [i_3]))) < (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3]))))))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_3 [i_3] [i_3]) : (((/* implicit */int) var_11))))));
                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_3 [i_3] [(short)10]) : (((/* implicit */int) (short)-1)))))))) ? (((2404493408009493612ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(-1)))), (((((/* implicit */_Bool) (short)-1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))))))));
            }
        } 
    } 
}
