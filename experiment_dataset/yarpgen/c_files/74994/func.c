/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74994
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [8] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (-1881526289)))) ? (((/* implicit */unsigned int) max((1881526288), (1881526288)))) : ((+(arr_4 [i_4] [i_0] [i_1 + 3])))))) + (((12096175096824304140ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1881526289)) ? (1881526288) : (arr_3 [i_2]))))))));
                                arr_16 [6U] [i_1 - 2] [i_2] [i_3 - 2] [i_1] = ((/* implicit */unsigned short) 1881526288);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1881526286)) ? (((/* implicit */unsigned long long int) 1881526286)) : (((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */unsigned long long int) 1881526288)) : (4503049871556608ULL)))))) ? (((/* implicit */unsigned long long int) ((2814649499U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1881526288)) ? (-1881526287) : (((/* implicit */int) var_10)))))))) : (max((17287226616925041257ULL), (((/* implicit */unsigned long long int) -11451099))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (((((/* implicit */_Bool) arr_17 [(unsigned short)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) : (var_3)))));
        arr_21 [(signed char)12] = ((((/* implicit */_Bool) -1881526296)) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))));
        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) : (17287226616925041257ULL)));
    }
    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((((/* implicit */_Bool) -11451106)) ? (((/* implicit */unsigned long long int) 1847605146)) : (1159517456784510358ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1881526289)) ? (var_9) : (var_2)))))) && (((/* implicit */_Bool) 4294967295U)))))));
        arr_25 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) max((arr_18 [i_6]), (((/* implicit */int) (signed char)19)))))))) < (1125882726973440ULL)));
    }
}
