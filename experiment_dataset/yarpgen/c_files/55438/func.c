/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55438
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 3] [i_1]))))), (arr_3 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((-4888601037000308745LL), (4888601037000308744LL)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((arr_11 [i_0] [i_1] [6U] [(short)11] [i_4] [i_4 + 3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4888601037000308733LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_0 + 2])))))))))));
                                arr_13 [i_0 + 1] [(signed char)8] [i_2] [i_3 - 1] [i_4 + 3] [i_0] = ((/* implicit */unsigned short) max((arr_7 [i_0] [i_2] [(unsigned short)7] [i_3] [i_3] [i_1]), ((~(((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) arr_1 [i_4]))))))));
                                var_12 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) (unsigned short)65523)), (arr_5 [i_0] [i_1] [i_3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [4LL] [i_3] [i_2] [i_1] [i_0 + 4]))) / (arr_6 [i_3] [i_2])))))) < ((+(arr_11 [i_3] [i_0 + 1] [i_3 - 2] [i_3] [i_4 + 3] [i_4 + 2])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((((/* implicit */int) (unsigned short)56499)) + (((/* implicit */int) (unsigned short)12)));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (long long int i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned short) ((4888601037000308741LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))));
        var_15 = ((/* implicit */int) min(((~(-4888601037000308727LL))), (((/* implicit */long long int) (-(max((arr_9 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 3]), (((/* implicit */unsigned int) var_9)))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            for (unsigned short i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_7 + 2] = max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_2)))) >> (((arr_19 [i_6]) - (4220929675943531251LL)))))), (max((min((((/* implicit */unsigned long long int) -4888601037000308735LL)), (arr_3 [i_5] [i_6 - 1] [i_7 - 2]))), (((/* implicit */unsigned long long int) arr_16 [i_5])))));
                    arr_25 [i_5] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    }
}
