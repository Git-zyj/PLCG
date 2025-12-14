/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99792
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
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (short i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_20 ^= ((((((/* implicit */_Bool) -524288)) ? (((/* implicit */int) (unsigned char)94)) : (var_11))) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)207)))));
                            var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_2 [i_0 - 2]))));
                        }
                    } 
                } 
            } 
            arr_13 [5ULL] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
            arr_14 [i_1 - 2] = ((/* implicit */_Bool) var_15);
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    {
                        arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_5] [i_6 - 1]))) & (arr_6 [i_6 + 2] [i_1 - 1] [i_6])));
                        var_22 -= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)161)) ^ (524292)))) > ((-9223372036854775807LL - 1LL))));
                        arr_20 [i_0] [i_1 + 1] [i_5] [i_6] = (+(-524283));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(-524283)))) % (((((/* implicit */_Bool) (unsigned char)120)) ? (3181574507U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_5] [i_1 - 1] [i_6])))))));
                    }
                } 
            } 
            arr_21 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2])) << (((((unsigned long long int) 399514517275404751ULL)) - (399514517275404723ULL)))));
        }
        for (long long int i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            var_24 = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) arr_22 [i_0 - 2] [i_0] [i_0])), (((arr_1 [i_0] [i_0]) >> (((/* implicit */int) var_10)))))));
            arr_24 [i_0 - 2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) + (17592186043904LL)))) : (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0 + 1] [i_7 - 1] [i_7 + 1]), (arr_4 [i_0 + 1] [i_7 - 1] [i_7 - 1])))))));
        }
    }
    var_25 = (((((((~(((/* implicit */int) (unsigned char)128)))) & (var_11))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((/* implicit */int) var_2))))) ? (var_18) : (((/* implicit */unsigned long long int) ((int) -524286))))) - (18446744073709027330ULL))));
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_17)))))));
}
