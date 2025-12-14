/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65485
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8618)) != (((/* implicit */int) (unsigned char)104))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? ((+(((/* implicit */int) (short)10907)))) : (((/* implicit */int) arr_1 [i_0]))));
            arr_6 [i_1] = ((/* implicit */_Bool) ((short) arr_2 [i_1] [i_0]));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) /* same iter space */
            {
                var_19 = (-(2147483647));
                var_20 = ((/* implicit */int) ((unsigned long long int) (signed char)0));
                var_21 -= ((/* implicit */long long int) (unsigned char)215);
            }
            for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_12 [(unsigned char)0] [(unsigned char)0] [(unsigned char)23] [i_4] [i_4] [i_4]) != (((/* implicit */int) var_8)))))));
                    arr_14 [(_Bool)1] [i_1] [i_3] [i_4] [i_1] [i_4] = ((arr_12 [i_0] [i_1] [i_3 - 1] [i_0] [(unsigned char)7] [i_0]) < (((/* implicit */int) (unsigned char)157)));
                }
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1] [i_3] [i_5]))));
                    var_24 -= ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)65535)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_0] [i_3] [i_1] [i_0] [i_0])))))));
                    var_25 *= ((/* implicit */short) (_Bool)0);
                    arr_17 [i_5] [i_1] [19ULL] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_9 [i_1]);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1] [i_0] [i_0])) ? (arr_10 [i_3 + 1] [i_3 + 1] [i_3] [i_1]) : (arr_10 [i_3 + 1] [i_1] [i_1] [i_1])));
                }
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) + (arr_11 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) arr_16 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])) : (arr_10 [i_0] [i_1] [i_3] [(signed char)21])));
            }
        }
        arr_18 [i_0] = ((/* implicit */unsigned long long int) (~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-885515743)))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (arr_15 [i_0])));
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_19 [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_6])))) : (min((((/* implicit */long long int) (_Bool)1)), (var_13)))))) ? (((/* implicit */int) var_10)) : ((((!(((/* implicit */_Bool) arr_13 [i_6] [i_6] [12U] [12U])))) ? (((/* implicit */int) arr_8 [(unsigned char)2] [(unsigned char)2] [i_6] [i_6])) : ((~(((/* implicit */int) (_Bool)1))))))));
        var_30 -= ((/* implicit */long long int) -1994614348);
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        arr_25 [i_7] = var_7;
        arr_26 [i_7] [19LL] &= ((/* implicit */signed char) (-(arr_15 [i_7])));
        arr_27 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (((/* implicit */long long int) arr_3 [i_7] [i_7])) : (arr_11 [(signed char)6] [(signed char)6] [i_7] [(signed char)6])));
        arr_28 [i_7] = ((/* implicit */unsigned char) (-(arr_9 [i_7])));
    }
    for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 1) 
    {
        arr_31 [i_8] [8LL] |= ((((/* implicit */_Bool) ((unsigned short) 2147483647))) ? ((+(((/* implicit */int) arr_4 [i_8 + 1] [0U])))) : (min((arr_3 [i_8 + 1] [22ULL]), (arr_3 [i_8 - 1] [(signed char)22]))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */int) (unsigned char)87)) : (((arr_3 [i_8 + 3] [i_8]) / (arr_3 [i_8 + 3] [i_8])))));
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) == (6106285471011747188LL)));
}
