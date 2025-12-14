/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7199
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~((~(26ULL)))));
            var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)3243))))) ? (((unsigned int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_16)))))))) != (((((((/* implicit */_Bool) (short)3243)) ? (arr_5 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) | (max((arr_0 [i_1]), (((/* implicit */long long int) var_7))))))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)97))));
                    arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) ((signed char) var_14))) : (((/* implicit */int) (short)-3261))));
                }
                arr_15 [i_0] [9LL] [9LL] = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) min((arr_12 [i_0] [i_0] [(unsigned char)4] [i_0] [i_0]), (((/* implicit */long long int) var_17)))))), (((((6896469924026281701LL) >> (((((/* implicit */int) var_1)) - (21328))))) ^ (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_2]))) : (arr_9 [i_2] [i_1] [i_0])))))));
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-3243)), (1440409770252921118LL)));
            }
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_22 = ((/* implicit */long long int) arr_3 [i_4] [i_4]);
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)68))) - ((~(4435501275109650738LL)))));
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            var_23 = var_9;
            var_24 ^= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) % (-1440409770252921107LL))) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [6LL] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) ((long long int) (-(9223372036854775795LL))));
            var_26 = ((/* implicit */short) (!((_Bool)1)));
        }
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_26 [i_7] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((signed char) (unsigned short)36231))), (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (short)28633))) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_3 [i_7] [i_7])))))));
        arr_27 [i_7] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_16 [i_7] [i_7] [i_7] [2ULL])), (arr_23 [4U]))))));
    }
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        var_27 -= ((/* implicit */_Bool) (~((-(min((var_0), (((/* implicit */unsigned int) arr_17 [i_8] [i_8]))))))));
        var_28 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((short) arr_20 [17U] [17U] [i_8]))), (((arr_18 [i_8] [i_8] [i_8]) & (((/* implicit */unsigned long long int) 4294967295U))))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-14915)) && (((/* implicit */_Bool) (signed char)-1))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)41311)))))));
        var_31 = ((/* implicit */signed char) min((((((/* implicit */int) arr_4 [(unsigned short)0] [i_9 + 1])) / (((/* implicit */int) arr_4 [(signed char)10] [i_9 + 1])))), (max((((/* implicit */int) ((((/* implicit */int) (signed char)71)) <= (((/* implicit */int) (signed char)-76))))), ((~(((/* implicit */int) arr_1 [i_9]))))))));
        arr_33 [i_9] [i_9] = min((((unsigned long long int) max((arr_21 [i_9 + 4] [i_9 + 4] [i_9 + 4]), (((/* implicit */long long int) (signed char)-74))))), (((/* implicit */unsigned long long int) ((((long long int) 6896469924026281701LL)) & (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22937))) : (arr_9 [i_9] [i_9 - 1] [i_9])))))));
    }
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2543001332U))))) - (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)4))))))))))));
}
