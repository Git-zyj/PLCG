/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64116
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) min((var_8), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */int) (signed char)2))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (min((var_10), (((/* implicit */unsigned int) (short)18003))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55744))) : (2649153835U));
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned char)71)))) - (((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned long long int) (-(2294448545U)));
            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned short)9602))));
            var_20 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (signed char)-17))))));
        }
        for (int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_21 += ((/* implicit */long long int) arr_11 [(unsigned short)7] [i_3]);
            arr_12 [i_3] = ((/* implicit */unsigned short) var_15);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)-36))));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                var_23 += ((/* implicit */short) arr_9 [i_5] [(unsigned short)10] [i_5]);
                arr_19 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_5] [i_4])) ? (((/* implicit */int) ((unsigned short) 4611686018427387904LL))) : (((/* implicit */int) (unsigned char)19))));
            }
            for (long long int i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                arr_22 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_18 [i_6 - 2] [i_6 - 3] [i_6] [i_6])));
                arr_23 [i_0] [i_6] [i_4] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_6])) ? (arr_7 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))));
            }
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            arr_28 [i_0] [i_7] [i_7] |= ((/* implicit */short) min((((/* implicit */int) arr_4 [i_0])), (var_1)));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) (short)10219)) % (((/* implicit */int) (unsigned short)64402)))))));
        }
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (unsigned char)251))));
            var_26 = ((/* implicit */signed char) (-(43216763U)));
        }
        var_27 += ((/* implicit */short) arr_6 [i_0]);
        arr_32 [i_0] |= ((/* implicit */unsigned int) ((short) max((((((/* implicit */_Bool) arr_31 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))) : (0U))), (((/* implicit */unsigned int) max(((short)0), (((/* implicit */short) (signed char)-31))))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3079)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_9] [10U] [i_9])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)-14731))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1411735198)) ? (((/* implicit */int) arr_14 [i_10 + 1] [i_10 - 1] [i_10 + 1])) : (((/* implicit */int) (signed char)-18))));
            arr_37 [i_9] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(0U))))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 241825631))))))));
        }
        var_31 = ((/* implicit */unsigned long long int) arr_4 [i_9]);
        arr_38 [i_9] = ((/* implicit */unsigned short) (signed char)8);
    }
}
