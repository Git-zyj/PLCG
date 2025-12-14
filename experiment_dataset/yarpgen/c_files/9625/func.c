/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9625
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((unsigned short) ((int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_0)))))))));
    var_12 = ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2876108177U)) ? (((1893548881U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53617))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)92)) ^ (((/* implicit */int) (signed char)108)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)88)) ? (arr_2 [i_0]) : (arr_0 [4U])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((2795894598695233862LL) << (((4224519393U) - (4224519393U))))) : (((/* implicit */long long int) (~(70447889U)))))) : (max((((/* implicit */long long int) arr_2 [i_0])), (var_2)))));
        var_14 ^= ((/* implicit */unsigned int) ((max((max((var_2), (((/* implicit */long long int) (signed char)-105)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53612)) | (((/* implicit */int) var_3))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((24U), (536870911U))) : (arr_1 [i_0] [i_0]))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_6)))))) ? (min((min((((/* implicit */unsigned int) -389052835)), (arr_2 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (1077339782U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (min((arr_2 [i_0]), (max((((/* implicit */unsigned int) var_9)), (arr_1 [11LL] [11LL])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 7; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (((((((/* implicit */_Bool) (unsigned short)10042)) ? (((/* implicit */long long int) arr_2 [i_1])) : (var_1))) ^ ((~(var_2))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 26U)) ? (arr_1 [(unsigned char)6] [i_1 - 2]) : (arr_2 [(unsigned short)5])))))));
        arr_6 [i_1] = ((/* implicit */long long int) (unsigned short)53618);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_17 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)47)) ? (arr_1 [(unsigned char)12] [i_1]) : ((-(4294967295U))))), (max((arr_2 [i_2 + 1]), ((-(arr_1 [(signed char)5] [i_1])))))));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) max((arr_1 [i_1 - 2] [i_2 - 2]), (((/* implicit */unsigned int) (signed char)-39)))))) ? (max((arr_0 [(unsigned short)0]), (((((/* implicit */_Bool) 21U)) ? (arr_5 [i_1 - 2] [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_19 ^= arr_8 [i_1] [(signed char)6] [i_1 + 3];
            var_20 &= ((/* implicit */signed char) arr_4 [(signed char)2]);
        }
        var_21 = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)3]))) > (4224519406U))), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_1 + 3])))))));
        arr_12 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), ((signed char)24))))) : (26U)))), (((long long int) arr_1 [i_1 + 3] [i_1 - 1]))));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_15 [i_4] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 389052858)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)25885))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) 4294967295U)) ? (1268033043U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))))) : (arr_2 [i_4]))));
        arr_16 [i_4] [0U] = ((/* implicit */unsigned int) max((max((max((((/* implicit */long long int) (signed char)-120)), (var_1))), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) max((arr_2 [i_4]), (((/* implicit */unsigned int) var_6)))))));
    }
    var_22 = ((/* implicit */signed char) min((var_1), (min((((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_1))), (((long long int) 5128699668308227636ULL))))));
}
