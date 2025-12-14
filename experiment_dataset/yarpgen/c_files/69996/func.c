/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69996
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) 1658753517U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_0)))))) * (((/* implicit */unsigned long long int) 1658753517U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_10 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [2LL])) + (((/* implicit */int) ((unsigned short) arr_5 [i_0])))));
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(arr_0 [i_0])))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 1]))) : ((+(var_6)))));
            var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */_Bool) var_1);
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (8347569958776490796ULL))), (10099174114933060819ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (2636213805U)))) ? ((~(3500949241U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) : (((((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_0]) | (var_7)))) / (((((/* implicit */_Bool) 10005638212612212696ULL)) ? (((/* implicit */long long int) 3500949262U)) : (var_8)))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 |= ((/* implicit */signed char) ((max((arr_12 [i_3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) >= (max((((((/* implicit */_Bool) (short)1775)) ? (7208138933059338768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((arr_11 [i_3] [i_3]) | (arr_12 [i_3])))))));
        arr_13 [i_3] |= min((((/* implicit */unsigned long long int) 1658753502U)), (min((((((/* implicit */_Bool) 10099174114933060820ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (10099174114933060811ULL))), (max((arr_11 [10U] [i_3]), (((/* implicit */unsigned long long int) (short)-17694)))))));
        var_16 = ((/* implicit */unsigned int) ((((7208138933059338768ULL) | (((/* implicit */unsigned long long int) (+(2071751145U)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-94259584457875633LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))))))));
        var_17 = ((/* implicit */unsigned char) 11238605140650212848ULL);
    }
    var_18 = ((/* implicit */long long int) (!(((var_3) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1658753524U)), (var_8))))))));
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))))));
}
