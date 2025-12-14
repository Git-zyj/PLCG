/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93988
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_0])), ((+(max((9890709723654876772ULL), (((/* implicit */unsigned long long int) (short)-6101))))))));
                    var_13 |= ((/* implicit */short) ((unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (arr_5 [(unsigned short)1] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_6 [i_2])))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6101)) ? (8357091562794764517LL) : (((/* implicit */long long int) -268435456))));
                }
                for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_1 - 1] [i_3 + 1] [4] [i_5] [i_0] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0])) ? (arr_5 [i_1] [i_1] [(unsigned char)9] [(unsigned char)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3]))))) : (((/* implicit */unsigned long long int) ((long long int) 268435461)))))));
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */short) ((arr_11 [i_0] [i_1 - 2] [i_0]) <= (arr_11 [16] [i_1 - 2] [i_3])))), (arr_8 [i_0] [i_0] [i_0] [0ULL])));
                                var_15 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((-362013685), (((/* implicit */int) arr_1 [i_1 - 3]))))) - ((+(((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
                }
                arr_18 [i_0] [i_1] = max((((((/* implicit */_Bool) 3238884784U)) ? (268435455) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_1 + 2] [6ULL])) > (((/* implicit */int) var_1))))));
                var_17 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [(unsigned char)12])), (arr_4 [i_1 - 1] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) -268435456);
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_19 *= max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_12 [i_6])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_1 [i_8]))))) ? ((~(126100789566373888ULL))) : (((/* implicit */unsigned long long int) arr_13 [i_6])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) ((126100789566373888ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9 - 2] [i_9 - 2] [i_9 - 3] [i_9 - 3])) ? (((/* implicit */int) arr_2 [i_9 - 2])) : (((/* implicit */int) arr_31 [i_9 + 1] [i_9] [(unsigned char)8] [i_9] [i_9 - 1]))));
                            arr_32 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            arr_35 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_7] = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-74));
                        }
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) var_4);
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_9 - 3]))));
                            arr_39 [i_6] [i_7] [i_6] [i_9 - 2] [i_12] = ((/* implicit */unsigned char) 12596897774312937913ULL);
                            arr_40 [i_6] [(short)12] [i_6] [i_9] [i_6] [i_7] = ((/* implicit */short) (unsigned char)199);
                        }
                    }
                    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 126100789566373881ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (2665595080466773232ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_6] [i_7] [i_8]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((unsigned int) arr_1 [i_6]))));
                    arr_41 [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1884))) : (7274651384006712963ULL)))) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)63))), (((/* implicit */unsigned char) ((-1225720037912960550LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                }
            } 
        } 
    } 
}
