/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8513
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
    var_14 = ((/* implicit */short) var_13);
    var_15 = ((/* implicit */int) var_2);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (1689096216U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) arr_9 [i_0 + 4] [i_0 - 3] [i_0] [i_0]))))) ? (((unsigned int) arr_1 [i_2 - 1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0 + 2]))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_5 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_2 + 1] [i_0]))))) : (arr_6 [i_0 + 4] [i_0])));
                    var_19 = (i_0 % 2 == 0) ? ((+(((arr_6 [i_1 + 3] [i_0 - 2]) << (((((/* implicit */int) arr_8 [i_0])) + (24676))))))) : ((+(((arr_6 [i_1 + 3] [i_0 - 2]) << (((((((/* implicit */int) arr_8 [i_0])) + (24676))) - (48796)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((unsigned int) ((((/* implicit */int) arr_12 [i_3])) >= (((/* implicit */int) arr_10 [i_3]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_3] [11U])))) : (((/* implicit */int) arr_12 [i_3]))));
    }
    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_22 = (i_4 % 2 == 0) ? (((/* implicit */int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_14 [i_4]))), (((arr_14 [i_4]) << (((arr_14 [i_4]) - (191689362509241592ULL)))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_14 [i_4]))), (((arr_14 [i_4]) << (((((arr_14 [i_4]) - (191689362509241592ULL))) - (9216515954792407389ULL))))))));
                    var_23 ^= (~(var_2));
                }
            } 
        } 
        var_24 *= ((/* implicit */unsigned int) arr_20 [i_4] [i_4 + 4] [i_4] [i_4 + 4]);
        arr_22 [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned short)32233)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) 1576738193)))))) : (206462042252034392ULL)))));
    }
}
