/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95158
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [11LL] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_1 [7U] [(unsigned char)14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [13LL] [i_0])) ? (arr_0 [i_0]) : (arr_0 [13U])))))) : ((~(((unsigned long long int) var_9)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [0LL])) + (((arr_2 [18U]) - (max((((/* implicit */int) (_Bool)1)), (arr_2 [18U])))))));
        arr_6 [i_0] = ((/* implicit */short) 3691113189U);
        arr_7 [13] = var_8;
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1])) >> (((((/* implicit */int) arr_3 [i_1] [i_1])) - (17)))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) arr_3 [(_Bool)1] [i_1])))));
        arr_11 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)242))))) >= (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_3))))))) ^ (((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_9)))) << (((((arr_8 [(signed char)9] [(signed char)9]) << (((((/* implicit */int) arr_9 [13ULL] [i_1])) + (136))))) - (1744830464U)))))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)242))))) >= (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_3))))))) ^ (((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_9)))) << (((((((arr_8 [(signed char)9] [(signed char)9]) << (((((((/* implicit */int) arr_9 [13ULL] [i_1])) + (136))) - (172))))) - (1744830464U))) - (538906320U))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_14 -= ((/* implicit */int) var_1);
        arr_14 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_2]), (arr_10 [i_2]))))));
    }
}
