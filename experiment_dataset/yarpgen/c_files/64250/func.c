/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64250
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 |= ((/* implicit */short) ((unsigned char) arr_0 [i_0]));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (arr_3 [i_0])));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6822)) << (((/* implicit */int) arr_1 [i_1 + 1]))));
            var_23 -= arr_4 [10LL] [10LL];
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
            {
                var_24 = ((unsigned short) arr_0 [i_1 - 1]);
                var_25 = ((/* implicit */unsigned int) var_2);
            }
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_26 = (!(((/* implicit */_Bool) ((short) (unsigned char)179))));
                        var_27 = ((/* implicit */unsigned long long int) (unsigned short)6822);
                        var_28 = ((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_1 + 1]) * (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) <= (arr_6 [i_0] [i_1] [(_Bool)0])));
                        var_29 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_3] [i_4] [(unsigned char)4]))) >> (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1 - 1])) + (122)))))) : (((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_3] [i_4] [(unsigned char)4]))) >> (((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1 - 1])) + (122))) - (116))))));
                    }
                    var_30 = ((/* implicit */unsigned int) var_19);
                    var_31 += ((/* implicit */signed char) ((arr_11 [i_3] [i_3] [i_3] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_32 = ((unsigned int) arr_14 [i_0] [i_0] [i_0] [14U] [i_0] [i_0] [i_0]);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_3] [i_3]))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (-(arr_6 [i_0] [i_0] [i_0]))))));
                    }
                    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) (_Bool)0);
                        var_36 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)4] [i_4] [i_7]))))));
                    }
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((signed char) arr_5 [i_1 - 1] [i_3] [i_1 + 1] [i_1 + 1])))));
                }
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 - 2] [i_1 - 1]))));
                    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_3] [i_0]))) * (arr_11 [i_3] [(unsigned char)8] [i_1 + 1] [i_1 - 1]))))));
                    var_40 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1]))) - (1597993639U)))));
                    var_41 = ((/* implicit */unsigned short) ((signed char) 3680947645U));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (~(arr_10 [i_3] [i_3]))))));
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) arr_1 [i_0]))));
                        var_44 -= ((/* implicit */_Bool) arr_2 [0] [i_3]);
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) 2696973657U))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                {
                    var_46 *= ((/* implicit */short) (_Bool)0);
                    var_47 = ((/* implicit */long long int) 1020329009771129834ULL);
                    var_48 = ((/* implicit */_Bool) var_5);
                    var_49 = ((/* implicit */unsigned char) ((short) arr_10 [i_0] [i_1 - 1]));
                }
                var_50 = ((/* implicit */unsigned char) var_11);
                var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58713)) || (((/* implicit */_Bool) var_4))));
                var_52 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((var_16) == (((/* implicit */long long int) var_3)))))) / ((+(793069204U))));
            }
        }
        var_53 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [4ULL] [4ULL] [i_0] [i_0] [i_0] [i_0]))));
        var_54 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_25 [4ULL] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))));
    }
    var_55 |= ((/* implicit */int) var_16);
}
