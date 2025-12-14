/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55392
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1 - 1] = ((/* implicit */long long int) (~(arr_0 [i_1 - 1])));
            arr_5 [i_0] [10U] = ((/* implicit */signed char) 8515069892078780176LL);
            arr_6 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned short)25305))));
            arr_7 [i_0] [9LL] = ((/* implicit */long long int) arr_0 [8LL]);
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [12LL] [12LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) / ((-(1851866740U)))));
            arr_13 [i_2] = (+(((/* implicit */int) arr_2 [i_0] [i_2])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            var_14 ^= ((/* implicit */unsigned long long int) 1851866752U);
            arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)158))))) / (2443100555U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0])));
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61443)) ? (((/* implicit */int) (short)-10445)) : (((/* implicit */int) (unsigned short)25305))));
            arr_20 [i_0] [i_0] = ((/* implicit */signed char) (~(((9223372036854775807LL) << (((min((arr_19 [i_0]), (((/* implicit */long long int) (signed char)2)))) - (2LL)))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4]))));
            arr_21 [(unsigned short)16] [(unsigned short)16] = max((((/* implicit */long long int) ((1485279407U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0])))))), (max((((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (-6157944861434807229LL))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) / (arr_19 [i_4]))))));
        }
        arr_22 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_0])))))))));
    }
    var_17 = ((/* implicit */int) (unsigned short)4084);
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)0)), (7154310658966865589LL)));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5624458643191068791ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((6610962772796942970LL) < (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3318))))))))) ? (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((6610962772796942976LL) - (((/* implicit */long long int) 88416051))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_8))))))));
}
