/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72277
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_12 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */int) var_11)) % (((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))), (((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [1U]), (arr_1 [i_0]))))) / (min((-9223372036854775803LL), (((/* implicit */long long int) (short)-23357))))))));
        var_13 = ((/* implicit */unsigned char) (-(max((((((/* implicit */int) (short)-23359)) | (((/* implicit */int) (short)23356)))), (max((((/* implicit */int) (unsigned char)110)), (-1496868840)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            var_14 = ((/* implicit */unsigned long long int) min((var_14), ((((+(7867710685069268648ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((1519626949) - (1519626945))))))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_2))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (-4024473737523373547LL))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (-4024473737523373546LL))))))));
            }
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0])))))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-((-(max((((/* implicit */unsigned int) arr_11 [i_3])), (arr_3 [i_3] [i_3] [i_3]))))))))));
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-64)) < (((/* implicit */int) var_3)))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)10]))) | (arr_6 [i_3] [i_3] [(_Bool)1]))), (((/* implicit */unsigned int) ((var_7) < (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [20U])))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (min((((max((((/* implicit */unsigned int) var_0)), (arr_10 [(_Bool)1] [i_3]))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_12 [(signed char)12] [i_3]))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) && (((/* implicit */_Bool) arr_12 [i_3] [i_3]))))))))))));
        arr_13 [i_3] [(short)23] = (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-23374))))))));
    }
    var_19 = ((/* implicit */short) (-((+(min((((/* implicit */long long int) var_5)), (-3697269317601475053LL)))))));
    var_20 ^= ((/* implicit */unsigned char) (~((~(min((((/* implicit */long long int) (unsigned char)255)), (var_6)))))));
    var_21 |= ((/* implicit */signed char) (((((-(963181273))) + (2147483647))) >> (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned char)22)), (16633413672970575654ULL))) <= (((/* implicit */unsigned long long int) ((1496868844) >> (((4133115952848528428LL) - (4133115952848528402LL)))))))))));
}
