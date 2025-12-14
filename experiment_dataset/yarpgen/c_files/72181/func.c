/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72181
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_8 [i_0] [(unsigned short)2] [i_0] [i_0] = ((/* implicit */long long int) (signed char)124);
                var_10 = ((/* implicit */short) ((((arr_0 [i_2]) + (9223372036854775807LL))) << (((3562742896004189382LL) - (3562742896004189382LL)))));
            }
            arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)11)) == (((/* implicit */int) var_0))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */int) arr_10 [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_3])) : (((/* implicit */int) arr_2 [i_0]))));
            arr_14 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_0] [i_0]))));
            arr_15 [i_0] [i_3] = ((/* implicit */signed char) (unsigned short)24207);
            var_11 = ((/* implicit */_Bool) ((unsigned char) var_4));
        }
        var_12 = ((/* implicit */unsigned short) var_8);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_8);
        arr_20 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30720))) == (15255088711587068531ULL)));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-5062680559254459079LL)))) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (short)-13417)))) / ((~(max((var_4), (((/* implicit */int) arr_21 [i_5] [11]))))))));
        var_15 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_8)))));
    }
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (short i_6 = 1; i_6 < 11; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    arr_29 [i_6] = ((/* implicit */unsigned short) ((signed char) var_1));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_2)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_25 [i_6 + 3])))))))) / (min((min((((/* implicit */unsigned long long int) arr_26 [i_8] [i_7] [i_8])), (arr_17 [i_8]))), (((/* implicit */unsigned long long int) min(((unsigned char)163), (((/* implicit */unsigned char) var_7)))))))));
                    var_18 = ((/* implicit */unsigned int) var_6);
                    arr_30 [i_6 + 4] [i_6 + 4] [i_6] [i_8] = ((int) ((arr_17 [i_6 + 3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_22 [i_6 - 1])), (max((((/* implicit */int) (!(var_9)))), ((-(((/* implicit */int) arr_22 [i_8]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
}
