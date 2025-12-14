/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74109
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
    var_11 = ((/* implicit */unsigned long long int) ((signed char) var_6));
    var_12 = ((/* implicit */int) (unsigned char)226);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 += max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (max((arr_2 [i_0]), (((/* implicit */unsigned int) var_9)))))), ((!(((((/* implicit */_Bool) arr_0 [i_0])) && (var_5))))));
        var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned char) var_6)))))))) > ((-(((/* implicit */int) arr_0 [i_0])))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_0))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (var_2) : (((/* implicit */long long int) min((((/* implicit */int) ((1871098524U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (max((2073599544), (((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned int i_1 = 4; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (unsigned char)29)), (var_1)))));
        var_17 = ((/* implicit */_Bool) arr_1 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) ((arr_2 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1 - 4])))));
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_15 [i_2 - 2] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (63U)))) && (((((/* implicit */int) (unsigned char)50)) >= (((/* implicit */int) (unsigned char)36)))))), (((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) >= (max((1871098524U), (((/* implicit */unsigned int) arr_1 [i_4]))))))));
                    var_18 += ((/* implicit */int) arr_10 [i_2]);
                }
            } 
        } 
    } 
}
