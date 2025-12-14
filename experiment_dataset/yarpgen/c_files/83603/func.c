/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83603
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)60659))))));
                arr_7 [i_1] = (-(min((((/* implicit */long long int) arr_2 [i_1] [i_1] [i_1])), (min((((/* implicit */long long int) 2U)), (arr_5 [i_1] [i_1]))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(652696533)))))))));
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((arr_5 [i_1] [6U]), (((/* implicit */long long int) 3659110685U))))))) ? (((unsigned int) 635856601U)) : (((unsigned int) ((long long int) arr_4 [i_0])))));
                arr_9 [i_0] [i_1] [5LL] = ((/* implicit */short) ((signed char) arr_5 [i_1] [i_1]));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_4 [i_2]))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (min((arr_4 [i_2]), (arr_4 [(unsigned short)9]))) : (((/* implicit */long long int) (+(var_5)))))) : (((/* implicit */long long int) var_3))));
        arr_13 [14ULL] &= ((/* implicit */unsigned int) arr_2 [(signed char)4] [i_2] [i_2]);
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!((!(((/* implicit */_Bool) -652696551)))))))));
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_18 [i_3] = ((signed char) (!(((/* implicit */_Bool) arr_14 [i_3]))));
        arr_19 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)32740))) | (arr_14 [i_3])));
        arr_20 [i_3] = (~(arr_14 [i_3]));
    }
    for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? ((-(arr_0 [0U]))) : (((/* implicit */int) (((-(arr_14 [i_4]))) != (((/* implicit */long long int) arr_0 [i_4 + 3])))))));
        arr_23 [i_4] [2] = ((/* implicit */short) ((int) (short)-28931));
        var_18 = ((/* implicit */int) (-((+(4159555129U)))));
        var_19 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_1 [i_4 + 3])));
    }
}
