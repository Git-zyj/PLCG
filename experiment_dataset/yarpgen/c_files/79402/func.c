/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79402
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
    var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) ((unsigned char) ((_Bool) var_0)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
    var_12 = ((/* implicit */short) 2317143395076369317LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_13 ^= ((unsigned char) (-(((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)-3211)))) | ((-(((/* implicit */int) arr_11 [i_4 - 3] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0]))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (unsigned char)1)))));
                    }
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_1] [i_5 + 1] |= ((/* implicit */long long int) var_7);
                        var_14 -= var_9;
                        arr_19 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) * ((+(((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_5 + 1]), (((/* implicit */unsigned short) arr_4 [i_3 + 4] [i_2 + 1] [(short)11])))))) >= (max((arr_14 [i_3]), (((/* implicit */unsigned int) (unsigned short)32309))))))) : ((+(((/* implicit */int) var_9))))));
                    }
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_16 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3] [(unsigned short)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2 - 2]))) : (var_6)))), (((((/* implicit */_Bool) arr_0 [i_1] [i_6])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 2] [i_6 - 1]))))));
                        arr_22 [i_6] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_6 + 1] [i_0])))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) var_4))))))) : ((-(((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_3] [i_6]))) : (arr_21 [i_3] [i_1] [i_2 - 2])))))));
                        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) & (arr_6 [i_0] [i_0]))) | (((/* implicit */long long int) arr_14 [i_3]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_1 [i_2 - 2]), (((/* implicit */unsigned short) arr_11 [i_3 + 2] [i_1] [i_1] [i_0] [i_0] [i_2] [i_2 - 1])))))));
                        arr_26 [i_0] [i_3] [i_2] [(unsigned char)2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_2]))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)124)))))));
                    }
                    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 1) /* same iter space */
                    {
                        arr_29 [(unsigned short)2] [i_3] [(unsigned short)2] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) ((int) (((!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_8])))) ? (max((arr_10 [i_2] [(unsigned char)4] [i_2]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_0] [i_0]))))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_3] [i_8] [i_3] [i_3 + 2] [(unsigned char)6] [i_3])) > (((/* implicit */int) arr_7 [i_0] [(unsigned short)16] [i_3] [i_3] [i_8 - 2] [i_8 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((long long int) arr_8 [i_0] [i_1] [i_2 - 1] [i_3 + 1] [i_0]))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_20 [i_0])) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_1] [i_3] [i_8])) ? (arr_28 [i_0] [i_1] [i_2 - 2] [i_2] [i_3 + 2] [i_8 + 4] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)132)))))))) : (((/* implicit */long long int) var_6))));
                        arr_31 [i_0] [i_3] [i_3] [(short)17] [i_3 + 3] [i_3] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8] [i_8 + 4] [i_2 + 1])) ? (arr_10 [i_8] [i_8 + 4] [i_2 + 1]) : (arr_10 [i_2 + 1] [i_8 + 4] [i_2 + 1])))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_5))));
                    }
                    for (unsigned int i_9 = 2; i_9 < 14; i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_1] [i_3] [i_3 + 3] [14U] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_3] [i_1]))) : (var_6)))) || (((/* implicit */_Bool) arr_2 [i_9])))));
                        var_19 = ((/* implicit */long long int) ((unsigned short) arr_3 [i_1] [i_1] [i_1]));
                        arr_37 [i_3] [i_3] [i_3] [i_3] [i_9] = arr_24 [i_0] [i_2 + 1] [i_0] [i_3] [i_9];
                    }
                    arr_38 [i_3 - 1] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((long long int) (short)-29274))))) ? (((unsigned int) ((arr_32 [i_0] [15U] [i_2] [i_2 - 1] [i_3] [i_3 + 3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_2] [i_3])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 8308930132456698704LL)) && (((/* implicit */_Bool) -8308930132456698705LL))))))));
                }
                var_20 = ((/* implicit */long long int) max((var_20), (arr_6 [i_0] [15LL])));
            }
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
        {
            arr_42 [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_10]))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                arr_45 [i_0] [i_10] [i_11] [i_11] = ((/* implicit */int) arr_20 [i_11]);
                arr_46 [i_0] [i_10] [i_0] = ((/* implicit */short) ((unsigned int) arr_27 [i_10] [i_10]));
                var_21 = ((/* implicit */unsigned short) (signed char)-112);
                arr_47 [i_0] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_10] [(unsigned short)6] [i_10] [i_10] [i_10])) == (((/* implicit */int) arr_16 [i_0] [i_0] [i_10] [i_10] [i_11]))));
            }
        }
        for (long long int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max(((unsigned short)27901), (((/* implicit */unsigned short) (signed char)-90)))))));
            arr_50 [i_0] [i_12] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_12] [i_12] [i_12] [i_0] [i_0]))));
            arr_51 [i_0] [12ULL] [i_0] |= ((/* implicit */unsigned int) ((signed char) arr_0 [i_0] [i_12]));
        }
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) arr_5 [i_0] [i_0])))) : (-1954785694))))));
    }
}
