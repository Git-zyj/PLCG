/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71533
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
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_15)), (var_5))) / (((/* implicit */long long int) ((((((/* implicit */int) (short)-8192)) + (2147483647))) >> (((var_12) - (13741764520673514526ULL))))))))), (((unsigned long long int) min((var_0), (((/* implicit */unsigned long long int) (short)8192)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), ((~((-(((var_7) ? (arr_9 [i_0] [i_0] [i_0] [(_Bool)0] [i_0] [i_3]) : (4181537980U)))))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_2] [i_2] [(_Bool)0])) ? (arr_7 [i_2] [i_2] [i_2 - 3]) : (arr_2 [i_2] [i_2 - 3] [4U]))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / ((-(arr_0 [i_0]))))));
    }
    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4 - 2] [i_4 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_3 [(unsigned short)8] [i_4] [(unsigned short)8])))) ? (((var_1) ? (var_3) : (arr_13 [i_4]))) : (((((/* implicit */_Bool) var_3)) ? (1579884451U) : (4294967281U)))))) ? (((((/* implicit */_Bool) (short)-10897)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8192))) : (4294967295U))) : (max((arr_11 [i_4] [i_4 - 3]), (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_4] [i_4] [(unsigned short)4])))))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(7340032U)))) ? ((+(((((/* implicit */unsigned long long int) var_5)) ^ (arr_5 [i_4 - 3] [i_4]))))) : ((-(max((arr_4 [i_4] [8U]), (((/* implicit */unsigned long long int) 4181537980U))))))));
    }
}
