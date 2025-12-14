/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86317
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)21004)) || (((/* implicit */_Bool) (short)-256))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(var_17)))))) * (((unsigned long long int) arr_3 [i_0] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_8 [i_1] [11U])), (max((((((/* implicit */int) arr_3 [i_1] [i_1])) / (((/* implicit */int) arr_0 [i_1])))), ((-(((/* implicit */int) (unsigned char)20))))))));
        arr_10 [i_1] = (((~((-(arr_2 [i_1] [5LL]))))) << (((((((/* implicit */_Bool) (short)-28971)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_4))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (var_10)))) ? (((/* implicit */int) max(((unsigned short)12908), (((/* implicit */unsigned short) arr_8 [i_1] [i_1]))))) : (((((/* implicit */int) (unsigned short)57399)) * (((/* implicit */int) arr_8 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) ((short) arr_13 [i_2] [i_2 - 2]));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 2] [i_2 + 1]))) : (11270485697278610326ULL)));
            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_2 + 1])))))))));
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [12LL] [12LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)0] [i_3]))) : (-1LL)))) || (((/* implicit */_Bool) arr_12 [(_Bool)1] [i_2 - 2]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            {
                arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)34377)), (3554029252557664936LL)));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_19 [i_5] [i_4])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_5]))))))), (((/* implicit */int) arr_20 [i_4] [i_4] [i_4])))))));
                /* LoopNest 3 */
                for (short i_6 = 2; i_6 < 24; i_6 += 3) 
                {
                    for (int i_7 = 4; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_24 |= ((/* implicit */long long int) (_Bool)0);
                                var_25 *= ((/* implicit */_Bool) min((8ULL), (((/* implicit */unsigned long long int) arr_23 [i_4]))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7176258376430941289ULL)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))) : ((~(((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) (~(((4467321230077442776ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35682))) : (-3090652238268606445LL))))))));
    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_4))));
}
