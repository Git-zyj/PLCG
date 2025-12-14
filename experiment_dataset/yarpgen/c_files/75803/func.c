/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75803
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
    var_16 |= (~(max((((((/* implicit */_Bool) 1866768863)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)225)))), (-1152416301))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+((-(((/* implicit */int) (unsigned char)216)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_8);
        var_18 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                for (int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)209)) < (max((((/* implicit */int) (unsigned char)46)), (-4)))))))))));
                        arr_15 [12ULL] [i_2] [i_2] [i_2] [i_4 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (short)9520)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3317362738U) < (((/* implicit */unsigned int) max((-223126507), (((/* implicit */int) (unsigned char)221))))))))) : ((~(min((3317362759U), (((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_2] [i_2]))))))));
                        arr_16 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) 10906953041123650889ULL)) && (((/* implicit */_Bool) (unsigned char)39)))) || (((/* implicit */_Bool) var_1)))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1 - 1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1]))), (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 1])))));
    }
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((arr_11 [i_5 + 1]) < (((/* implicit */unsigned long long int) (~(var_4))))))) : (var_6)));
            var_21 = ((/* implicit */short) var_6);
        }
        arr_23 [3ULL] [i_5] = ((/* implicit */int) (unsigned short)0);
    }
    var_22 = ((/* implicit */unsigned int) var_4);
}
