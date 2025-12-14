/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82621
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
    var_14 = ((/* implicit */unsigned int) -173719213054575077LL);
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0])))) / (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) / (max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        var_16 = min((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (arr_3 [(signed char)4]))), (((/* implicit */unsigned int) arr_1 [i_0])));
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_5)))));
        arr_9 [i_1] = ((unsigned char) ((arr_7 [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_3))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 += max((var_6), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43147))) <= (var_4))));
            arr_13 [i_2] = ((/* implicit */unsigned short) var_5);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_19 [(_Bool)1] [i_3] [i_3] [(_Bool)0] = ((/* implicit */int) ((long long int) arr_14 [i_1 - 1] [i_1 - 1]));
                arr_20 [i_4] [i_3] [i_3] [i_1 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_1 - 2] [i_1 + 1]))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_1))) ? (arr_7 [i_1] [i_1 - 2]) : (((/* implicit */long long int) (+(0U))))));
            }
            for (int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                arr_24 [i_1] [(signed char)9] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) arr_6 [i_1 + 1])) : ((+(((/* implicit */int) (signed char)80))))));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    arr_27 [i_6] [i_1 - 2] [i_6] = ((/* implicit */unsigned long long int) ((arr_3 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_6])))));
                    var_20 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                }
                for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)23593))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1 - 2] [i_1 + 1] [i_1 + 1] [(unsigned short)3]))) & (var_10)));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 2])) ? (var_12) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 + 1]))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_5] [i_1 + 1] [i_1])) <= (((/* implicit */int) arr_29 [i_8] [i_1 - 1] [i_1]))));
                    }
                    var_25 = ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned int) arr_32 [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_3] [i_1 - 2])));
                }
            }
            arr_34 [13] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_3] [i_1])) & (arr_32 [i_3] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1])));
        }
    }
    /* vectorizable */
    for (unsigned short i_9 = 3; i_9 < 13; i_9 += 2) 
    {
        arr_38 [i_9] = arr_35 [i_9 - 3];
        var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
    }
    for (signed char i_10 = 3; i_10 < 24; i_10 += 1) 
    {
        arr_43 [i_10] [i_10] = ((/* implicit */short) max((min(((+(var_1))), (((/* implicit */unsigned long long int) (unsigned short)23580)))), (((/* implicit */unsigned long long int) (unsigned short)41942))));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_0))));
        var_28 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23593))) | (-6516226719442978668LL)));
    }
    var_29 |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (647827483)))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
}
