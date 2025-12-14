/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58182
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
    var_14 = ((((/* implicit */_Bool) (short)-11302)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (short)-11302)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_2 [i_0]);
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) ? (((/* implicit */long long int) arr_3 [i_0 - 2] [2U] [i_1 - 1])) : (arr_5 [8ULL])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_5 [(signed char)4])) : (arr_2 [(_Bool)1]))) : (((/* implicit */unsigned long long int) var_11))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */unsigned int) var_8)) : (arr_3 [i_0] [4U] [4U])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_0)) ? (arr_4 [5ULL]) : (arr_4 [i_0])))));
    }
    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        arr_10 [i_3] [i_3 - 1] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 432660977)) ? (((/* implicit */unsigned long long int) min((arr_9 [i_3 - 2]), (((/* implicit */unsigned int) (_Bool)1))))) : (2746343318233130773ULL))) : (((/* implicit */unsigned long long int) ((arr_8 [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) || (((/* implicit */_Bool) arr_8 [i_3 - 1]))))))))));
        var_18 *= ((/* implicit */unsigned long long int) max((arr_9 [i_3]), (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_8 [i_3]) : (((arr_8 [i_3 - 2]) % (((/* implicit */unsigned int) var_1))))))));
        arr_11 [i_3] = ((/* implicit */unsigned long long int) arr_9 [i_3 + 1]);
    }
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    var_21 &= ((/* implicit */unsigned int) ((min(((+(var_7))), (var_12))) - (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
}
