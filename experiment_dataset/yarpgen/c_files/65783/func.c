/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65783
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
    var_13 = ((/* implicit */short) (~(var_9)));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (max((var_5), (((/* implicit */unsigned int) var_6))))))) >= ((-((~(var_12)))))));
    var_15 = ((/* implicit */unsigned long long int) (((((-(var_12))) >> (((((/* implicit */int) var_1)) - (142))))) != (((/* implicit */unsigned long long int) var_0))));
    var_16 &= ((/* implicit */int) var_7);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((-9223372036854775807LL - 1LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_5)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_20 *= ((/* implicit */unsigned short) max(((-(((unsigned long long int) arr_5 [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1] [i_1])) * (((/* implicit */int) var_6)))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) (short)-1))))))))));
        var_21 &= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (((/* implicit */int) ((short) ((((/* implicit */int) arr_5 [i_1] [i_1])) < (((/* implicit */int) (unsigned char)148))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_22 -= ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-1))));
                var_24 = ((/* implicit */short) 11278480621193924682ULL);
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_3] [i_4]))));
            }
            var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)96)) << (((9223372036854775807LL) - (9223372036854775805LL)))))))) != ((-(((((/* implicit */_Bool) 1725393286)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27951)))))))));
            arr_13 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) * (((arr_8 [i_2]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)5]))))))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            arr_16 [i_2] [i_2] = arr_5 [i_2] [(unsigned char)0];
            var_27 = ((/* implicit */unsigned char) (+(((long long int) 8191LL))));
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2])) % (((/* implicit */int) arr_14 [i_5] [i_5] [i_5])))))));
            arr_17 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_4 [i_2] [i_5]))));
        }
        arr_18 [i_2] = ((/* implicit */signed char) min((((arr_10 [i_2]) ^ (arr_10 [i_2]))), ((~(arr_10 [i_2])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_6] [i_6]))))) ? (min((var_8), (((/* implicit */long long int) arr_0 [i_6] [i_6])))) : (((arr_0 [i_6] [i_6]) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6] [i_6])))))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) min(((~(((unsigned long long int) arr_6 [i_6])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6]))) : (arr_10 [i_6])))))))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((long long int) arr_20 [i_8 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6] [0U] [i_6])))))) : (((((unsigned int) arr_1 [i_7])) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_14 [i_6] [i_8] [i_9])) : (((/* implicit */int) var_1)))))))));
                        arr_32 [i_9] [i_7] [i_9] [i_7] = ((/* implicit */unsigned short) (~(((arr_4 [i_6] [i_7]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_6] [i_7]))))));
                    }
                } 
            } 
        } 
    }
}
