/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72969
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [(unsigned short)4] = ((/* implicit */unsigned int) var_8);
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 6; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */long long int) arr_1 [i_2]);
                        arr_11 [i_0] [i_0] [i_1 - 2] [i_2] [(short)6] [i_0] = ((/* implicit */unsigned int) -1LL);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 2])) ? (((arr_14 [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) 1351347208U))))) && (((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 2]))))));
        var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_15 [i_4])) ? ((~(11205635320304943248ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (arr_13 [i_4 + 2]) : (arr_13 [i_4 - 1]))))));
        var_15 = ((/* implicit */long long int) (((!(((_Bool) arr_15 [i_4])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_15 [i_4])), (var_6)))) ? (((arr_14 [i_4 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 + 1])) ? (arr_13 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 - 1]))))))));
    }
    var_16 = ((/* implicit */_Bool) var_1);
    var_17 |= ((/* implicit */unsigned char) var_6);
}
