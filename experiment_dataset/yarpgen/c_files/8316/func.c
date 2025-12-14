/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8316
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (((((-(32767))) + (2147483647))) >> (((-1289170454) + (1289170454)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) min((((unsigned char) 32767)), (((/* implicit */unsigned char) var_10))))) / (((/* implicit */int) arr_10 [i_4] [10ULL] [20U] [i_2] [i_1] [10ULL] [i_0])))))));
                                var_15 = arr_6 [i_0] [i_1] [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_9 [16LL] [(unsigned char)18] [i_0] [16LL]) + (((/* implicit */unsigned int) -1289170454))))), ((-(arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) -1289170454)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_8 [i_0] [i_0] [i_0] [i_0] [4] [i_0])))))));
    }
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min((min((((/* implicit */unsigned long long int) -32751)), (15726424513272603692ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : ((+(((/* implicit */int) (signed char)-3))))))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_4))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)-19941)) || (((/* implicit */_Bool) arr_8 [i_5 + 2] [i_6 - 2] [i_7] [i_6 - 2] [i_7] [i_7])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                arr_26 [i_9] [i_9] [i_7] [i_6 + 1] [i_8] &= ((/* implicit */unsigned int) ((unsigned long long int) min((min((((/* implicit */unsigned int) (unsigned char)221)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_7])) >> (((var_8) + (575122843)))))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_11 [4] [4] [i_8] [13U]))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_6])))) * ((-(((/* implicit */int) var_9)))))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_6] [i_7] [i_6])) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_20 [i_8])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)8]))) * (arr_5 [i_5] [i_5] [i_5] [i_5 - 1]))) / (((arr_5 [i_5] [(unsigned short)14] [i_5] [i_5 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 1364980749))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))));
}
