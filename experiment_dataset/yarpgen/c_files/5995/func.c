/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5995
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) -899881273);
        arr_3 [i_0] = max((arr_1 [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1]))))));
    }
    for (int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL)))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) -1045047843)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_2 + 1] [i_3 - 1]) : (arr_0 [i_2 + 1] [i_3 + 1])))) : (max((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1 - 2]) : (((/* implicit */unsigned long long int) arr_1 [i_3])))), (((((/* implicit */_Bool) var_2)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) -1945393870))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_1] [i_1 + 1])))));
        arr_17 [i_1] = ((/* implicit */unsigned short) var_13);
    }
}
