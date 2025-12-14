/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66965
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_13 *= ((/* implicit */short) min((((long long int) 2023136946571042799LL)), (((/* implicit */long long int) var_9))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (2288081519U)));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (signed char)-36))))));
                    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))));
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)16))))) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */int) (signed char)-36))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (12276011172272377835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_4])))))) ? (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_1] [(signed char)12])))) : (((/* implicit */int) arr_7 [i_1] [i_1]))));
                }
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_12)))), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (var_6)))));
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2381974513U)) && (((/* implicit */_Bool) 4258952427U))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_6);
}
