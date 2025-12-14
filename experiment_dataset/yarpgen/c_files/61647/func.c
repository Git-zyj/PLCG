/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61647
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
    var_14 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0 - 1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_3] [10ULL] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */int) var_4)) > ((+(((/* implicit */int) var_1))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [i_2]))) / (((unsigned int) (unsigned short)4015)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)76)) * (((/* implicit */int) (unsigned char)76))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_3)) - (209)))))))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_13)))));
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((int) 4279245418U));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (signed char i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((var_11) + (2147483647))) >> (((/* implicit */int) var_4)))))));
                            arr_24 [i_0] [i_5] [i_6] = ((/* implicit */short) var_2);
                            var_19 *= ((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */int) var_5))));
                            arr_25 [i_0] [i_5] [i_6] [i_0] [i_5] [i_6] = ((/* implicit */short) (~((~(((/* implicit */int) var_8))))));
                            arr_26 [7U] [i_0 - 1] [i_5] [i_5] [i_6] [i_7] [i_0 - 1] &= ((/* implicit */int) ((unsigned long long int) var_1));
                        }
                    } 
                } 
            } 
            arr_27 [i_5] [i_5] = ((/* implicit */signed char) max((max((arr_19 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) var_8)))), (((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1])) ? (arr_19 [i_0 - 1] [i_0 - 1]) : (arr_19 [i_0 - 1] [i_0 - 1])))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */int) var_0)), (((((/* implicit */int) arr_15 [i_5] [i_0 - 1])) % (((/* implicit */int) var_7)))))))));
            var_21 -= ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), (9223372036854775807LL)));
        }
        for (long long int i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            var_22 = ((/* implicit */short) 4279245411U);
            arr_30 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_18 [5] [i_0 - 1] [i_9])) - (((/* implicit */int) var_4))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_16 [i_9 - 1] [i_9] [i_0 - 1])), ((short)-19341))))) : (max((var_6), (((/* implicit */unsigned int) var_2)))))))));
            var_23 += ((/* implicit */unsigned int) arr_0 [i_0]);
            var_24 += ((/* implicit */unsigned char) var_13);
        }
        arr_31 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        var_25 = ((/* implicit */short) (-(max(((+(((/* implicit */int) (unsigned char)135)))), (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) var_5))))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_10] [i_10] [i_10] [i_10]), (arr_5 [i_10] [i_10] [i_10] [i_10]))))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))))) ? (((/* implicit */int) ((short) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : ((-(arr_4 [i_10])))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_7))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) / (var_11))))) : (((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_6))))));
}
