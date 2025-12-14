/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63235
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((arr_2 [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (signed char)-127)))))));
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_0 [i_0 - 1] [i_0 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21448))) < (0ULL))))));
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_11);
        }
        arr_10 [i_0] &= min((((((/* implicit */_Bool) arr_5 [i_0 - 1] [0ULL] [i_0])) ? (((long long int) var_17)) : (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (unsigned short)64578))))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16))))))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) var_11))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_8))));
    var_22 = var_0;
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (signed char i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_3 - 3] [i_3 - 2]))))), (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_12 [i_3 - 3] [i_3 - 3])) : (var_3))))))));
                arr_17 [i_3 - 2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_14 [i_3] [i_3 - 2])))) ^ ((-(((/* implicit */int) var_9))))));
                var_24 |= min(((unsigned short)64586), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1536)) ? (arr_12 [i_2] [12LL]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
            }
        } 
    } 
}
