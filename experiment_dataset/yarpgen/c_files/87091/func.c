/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87091
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_7))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) (signed char)14)))) & ((~(((/* implicit */int) (signed char)-118))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (var_1))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (signed char)15)) ? (var_2) : (var_1))), (max((var_2), (((/* implicit */unsigned int) var_9)))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_14 *= ((/* implicit */short) (signed char)-3);
            arr_7 [i_0] [i_1] [i_1] &= 3756075613U;
        }
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_15 ^= min(((+(((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (signed char)-122)) + (135))))))), ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_3 + 1] [i_2] [i_3 + 1])))));
                var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-105)) >= ((+(((/* implicit */int) (short)691))))));
            }
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)-1)))) <= (min((((/* implicit */int) (signed char)39)), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)-24))))))));
            arr_16 [i_0] [i_2] [i_2 - 1] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (min((var_1), (arr_12 [i_2 - 2] [i_0] [i_2] [i_2])))));
        }
        arr_17 [i_0] = ((/* implicit */_Bool) var_7);
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) var_2);
        var_18 = ((/* implicit */unsigned char) (unsigned short)51945);
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32377)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)203)), (2147483648U)))) ? (((unsigned long long int) (unsigned char)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1007371057) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)138)) > (((/* implicit */int) var_11)))))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) != (arr_20 [i_5]))))))));
        var_20 |= ((/* implicit */signed char) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) var_11)))))))));
        arr_25 [i_5] = ((/* implicit */signed char) (-(((unsigned int) 486169509U))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-7)))))) > (((unsigned int) (signed char)-34))));
}
