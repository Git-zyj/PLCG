/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74039
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
    var_16 = ((/* implicit */int) var_7);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? ((-(288212783965667328ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (var_2)))))) : (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2972367225U)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)32755))))) : (max((-1025332698), (1025332697)))))));
    var_18 = max((((short) var_12)), (((/* implicit */short) (((+(var_6))) > (((/* implicit */unsigned long long int) ((int) 1025332668)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_4 [i_0] [1ULL])), (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)0] [i_0] [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) 1025332724)) : (min((var_7), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_2]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_0] [i_0])) == (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) ? ((~(2147483640))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1025332723)))))))) ? (((unsigned long long int) (_Bool)1)) : ((((-(18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) arr_2 [i_2])))))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) var_11)), (arr_1 [i_1])))), (-1044179844)))) ^ ((~((+(arr_3 [i_0] [(signed char)12] [i_2]))))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_4] [4] [i_4] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [(short)14] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_4] [i_0] [i_4])))) > (arr_13 [i_1])))), (max((((/* implicit */unsigned int) (short)23993)), (((unsigned int) (short)22828)))))))));
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) (signed char)113);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (-1500089098)))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) (signed char)-100))));
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */int) (short)23993)), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_4])) ? (var_0) : (var_0))))) > (((/* implicit */int) (((~(var_6))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_4]))))))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_11))));
                    }
                }
            } 
        } 
    } 
    var_23 = var_0;
}
