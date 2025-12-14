/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99490
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)104))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) 63)) : (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [(unsigned char)4] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1052097593) ^ (((/* implicit */int) (signed char)47))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)47)), ((~(((/* implicit */int) (signed char)47))))))) : (((((/* implicit */_Bool) -4349734708837789796LL)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-122))))) : (1073127515U)))));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) 14697782386888596717ULL))));
            arr_8 [i_2] = ((/* implicit */unsigned char) arr_5 [(signed char)1]);
        }
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) < (arr_1 [i_1])))) < ((+(((/* implicit */int) (signed char)114))))));
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((arr_13 [i_4 + 1] [i_4 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_2))));
            var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)15))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) -2)) < (arr_17 [i_3])))));
            var_21 = ((/* implicit */_Bool) arr_11 [i_3] [i_3]);
        }
        arr_19 [i_3] = ((/* implicit */unsigned int) arr_12 [i_3] [12ULL] [12ULL]);
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (unsigned short)33853))));
    var_23 &= ((/* implicit */long long int) min((2643122312586108637ULL), (((/* implicit */unsigned long long int) (unsigned short)33853))));
    var_24 = var_8;
}
