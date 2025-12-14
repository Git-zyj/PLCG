/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94735
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
    var_11 = ((/* implicit */int) ((short) max((var_3), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_0))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) max((var_12), (((((((/* implicit */_Bool) arr_2 [i_1])) ? (((unsigned int) var_9)) : (((unsigned int) (short)128)))) / (((((/* implicit */unsigned int) ((/* implicit */int) (short)-129))) | (((unsigned int) (unsigned short)65535))))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) min((-1307849615), (((/* implicit */int) (signed char)52))))) : (arr_2 [1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_3 [i_0 - 1] [i_1])))))))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0 + 2] = ((/* implicit */unsigned int) (unsigned short)65517);
            arr_10 [i_2] [(unsigned short)20] |= ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_8 [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_3 [i_2] [i_0 + 2]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0 + 1] [i_2] [i_0])))))))) ? (max((((/* implicit */long long int) arr_2 [(signed char)15])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)6] [2] [i_0]))) : (-5931053862233773528LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) var_5))), (((((/* implicit */_Bool) arr_7 [(short)16] [i_2] [(signed char)3])) ? (16777200U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))))))))));
            arr_11 [i_0 - 2] [i_2] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) (unsigned short)61440))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) arr_2 [15LL])) : (-413619403220075262LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2] [i_2] [(signed char)21]))))))), (((/* implicit */long long int) ((((/* implicit */int) ((var_8) != (413619403220075261LL)))) == (((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_0 - 1])))))));
        }
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+(arr_3 [i_0 - 2] [(short)0]))))));
    }
}
