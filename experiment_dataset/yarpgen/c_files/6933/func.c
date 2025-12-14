/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6933
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
    var_13 = ((/* implicit */int) ((short) (((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-83)), (3916909064U)))))));
    var_14 ^= ((/* implicit */short) ((int) ((((unsigned long long int) var_3)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -3738717282824608147LL))) || (((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))))))));
        var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) | (arr_3 [i_2])));
            arr_7 [i_1] [i_1] [i_1] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_1])) ? (378058231U) : (((/* implicit */unsigned int) var_11))))));
            var_17 = ((long long int) 378058229U);
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] [i_1] [i_1] = ((/* implicit */int) 9223372036854775807LL);
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((81084539780593447LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)83)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6056670817916039212LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)7695))))) : (272496746154294781ULL)));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_14 [0] [i_4] [i_3] [i_1])) ? (((/* implicit */long long int) 1851563091U)) : (81084539780593434LL))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            arr_20 [i_5] [i_3] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (short)-6369)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_21 [i_5] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_5] [i_6]))));
                            arr_22 [(unsigned short)3] [i_3] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-27213)) + (2147483647))) >> (((arr_3 [i_4]) - (3165451818521707375LL)))));
                        }
                        var_19 = ((/* implicit */unsigned int) (-(arr_10 [i_1])));
                    }
                } 
            } 
            var_20 = ((unsigned short) arr_9 [i_3] [i_3] [i_1]);
            arr_23 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3147867806U)) ? (((/* implicit */int) (unsigned short)42812)) : (((/* implicit */int) (unsigned short)24097))));
        }
        var_21 = ((/* implicit */_Bool) var_9);
    }
    var_22 = ((/* implicit */_Bool) ((short) 0U));
}
