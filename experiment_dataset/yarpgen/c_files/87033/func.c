/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87033
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
    var_11 += ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_8 [i_0 - 1] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)73)) < (((/* implicit */int) var_1))));
                        arr_9 [i_3] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_3]))) : (844424930131968LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 191153274448427036ULL)) || (((/* implicit */_Bool) -2576328386760625559LL))))) : (((/* implicit */int) var_1))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (arr_3 [(signed char)7] [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1]))));
    }
    var_13 += ((/* implicit */int) var_8);
    var_14 = ((/* implicit */unsigned short) var_8);
}
