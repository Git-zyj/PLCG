/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61762
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
    var_12 = ((/* implicit */unsigned int) var_2);
    var_13 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)5)) ? (-100810828) : (((/* implicit */int) (signed char)4))))) : (var_10)))));
    var_14 = (!(((/* implicit */_Bool) (-(var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_2);
        var_15 |= ((/* implicit */unsigned short) var_2);
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_16 += ((/* implicit */unsigned char) ((arr_1 [i_0 - 2]) - (arr_1 [i_0 - 2])));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_6 [4ULL] &= ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned char)7)));
        arr_7 [i_1] = ((/* implicit */_Bool) var_3);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_10 [(unsigned char)10] &= ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (unsigned char)134))))) + (614731467U));
        var_17 = ((/* implicit */unsigned short) -1LL);
        var_18 = ((/* implicit */unsigned short) -3115968234799133625LL);
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14480122543857724218ULL)) ? (2305843009213693952ULL) : (((/* implicit */unsigned long long int) 7658742397273898577LL)))))));
    }
}
