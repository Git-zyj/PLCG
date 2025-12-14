/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88024
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [7] [i_0] = (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = max((arr_1 [(_Bool)0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) (signed char)-15)))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_8 [i_1]))));
        var_12 = ((/* implicit */int) arr_8 [i_1]);
    }
    for (int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_13 *= ((/* implicit */short) (_Bool)0);
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_3 + 2] [i_5])) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_3 + 2] [i_2]))))) ? (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_3 - 1] [i_3]))) : (arr_15 [i_2] [i_2] [i_2 - 1]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_2] [i_2] [i_3 + 2] [i_2])))))));
                        var_15 = ((/* implicit */signed char) var_7);
                        arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_14 [i_2 - 1])));
                    }
                } 
            } 
        } 
        var_16 -= ((/* implicit */int) ((min((arr_15 [(short)15] [i_2 - 1] [i_2 + 1]), (arr_15 [i_2] [i_2 + 2] [i_2 + 2]))) >> (((((/* implicit */_Bool) arr_15 [17U] [i_2 + 3] [i_2 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
        arr_21 [i_2] [i_2] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)1)))));
        arr_22 [i_2] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1525971047)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_1))))) ? (var_4) : (((/* implicit */long long int) ((int) var_4))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) arr_13 [i_2 + 1] [i_2 + 1])))));
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((min((8128250863532291511ULL), (((/* implicit */unsigned long long int) (unsigned char)122)))) - (122ULL)))))) ? (min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) min((var_4), (var_4)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_9)))))))));
    var_19 = ((/* implicit */signed char) var_5);
    var_20 = ((/* implicit */unsigned long long int) var_6);
}
