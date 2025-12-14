/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87871
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = max((((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_1 [8ULL])) : (((/* implicit */int) arr_1 [i_0])))))))), (arr_1 [i_0]));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) 3400660043U))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((3679242996U) == (((/* implicit */unsigned int) arr_0 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (arr_13 [i_2] [i_4]) : (arr_13 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (arr_13 [i_2] [i_3]) : (arr_13 [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0))))) + (((/* implicit */int) ((((-11LL) % (7981188410497697767LL))) >= (-1LL))))));
                        var_20 = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_10 [i_2] [i_2] [12] [i_2]))))))), (((/* implicit */int) min((arr_7 [i_2]), (((/* implicit */unsigned short) var_6)))))));
                        var_21 = ((/* implicit */unsigned short) arr_9 [i_2] [i_3] [i_2]);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) var_6);
    }
    var_23 = ((/* implicit */unsigned short) var_4);
}
