/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59993
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [13U] [i_0] = ((/* implicit */unsigned char) (-(arr_0 [i_0])));
        var_13 = ((/* implicit */_Bool) ((long long int) arr_1 [6]));
        var_14 -= ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    var_15 = ((/* implicit */short) (~(582300120U)));
    var_16 ^= ((/* implicit */short) 446926684U);
    /* LoopSeq 2 */
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_17 += ((/* implicit */long long int) var_2);
        var_18 = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (_Bool)1)), (var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_2 + 2])))) : (((((/* implicit */long long int) 3848040611U)) & (arr_5 [(_Bool)1])))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_7 [i_1] [i_1]))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((2786526217U) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 446926674U)), (8229996769711008954ULL)))) ? (3848040628U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        }
        var_21 = ((/* implicit */int) (~(max((arr_3 [i_1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_6 [i_1 - 1]))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)1])) ? (max((var_7), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)20])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (signed char)-111)))))));
        arr_12 [7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_3]))));
        arr_13 [(unsigned char)0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) : (446926692U)))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (8229996769711008966ULL)))));
        var_24 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((arr_8 [i_3] [i_3]) - (905783023)))))))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_6 [i_3])), (2154202333893428678ULL))) + ((~(18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3]))))))))) : (10216747303998542634ULL)));
    }
    var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */int) (_Bool)1))))) : (var_7))), (((/* implicit */unsigned long long int) ((int) var_12)))));
}
