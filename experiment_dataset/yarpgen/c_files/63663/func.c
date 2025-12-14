/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63663
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18650))) + (18329075669501206017ULL)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (((unsigned long long int) min((var_4), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))));
            arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) var_4));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_11 = ((/* implicit */short) var_6);
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (short i_5 = 3; i_5 < 11; i_5 += 3) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_2] [i_5] [i_5] = ((/* implicit */long long int) var_7);
                        var_12 = ((/* implicit */short) var_0);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                var_13 = (+(((((/* implicit */unsigned long long int) arr_19 [i_2])) & (var_9))));
                var_14 = var_1;
            }
            var_15 = ((/* implicit */int) max((max((min((((/* implicit */unsigned long long int) var_5)), (var_7))), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [11ULL] [i_2])))), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [(short)4] [i_2] [i_3] [(short)4]))));
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18644)) / (((/* implicit */int) var_6))));
            arr_23 [(signed char)11] [i_7] [(signed char)11] = (+((+(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_19 [i_2]))))));
            arr_24 [i_2] = ((/* implicit */_Bool) var_1);
        }
    }
    for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))))) / (max((min((((/* implicit */unsigned long long int) var_1)), (18112483643141979810ULL))), (((/* implicit */unsigned long long int) arr_25 [i_8]))))));
        var_18 = ((/* implicit */long long int) (+(8930486693977762068ULL)));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) (+(8845414676526994694LL)))));
                        arr_34 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_25 [i_8])), (((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_9] [i_8] [i_10] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_8] [i_9])), (arr_28 [i_8] [i_9]))))) : (((((/* implicit */_Bool) arr_33 [i_8] [i_9] [(unsigned short)8] [i_8] [i_10] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [16]))) : (var_9)))))));
                        var_20 *= ((signed char) ((unsigned char) ((((/* implicit */int) var_2)) << (((var_3) - (5366391489999003590ULL))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) (short)-18651)) : (((/* implicit */int) var_0))))), (var_8)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8])))));
                    }
                    var_22 = ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned long long int) min((arr_32 [(_Bool)1] [(unsigned char)20] [i_10]), (((/* implicit */unsigned short) ((short) var_0))))))));
                    arr_35 [i_9] [i_9] [i_10] &= min((var_4), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_31 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_33 [i_10] [i_10] [i_10] [i_10] [i_10] [i_9])))), ((+(((/* implicit */int) var_2))))))));
                }
            } 
        } 
        var_23 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_31 [i_8] [11LL] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_2))))), (max((var_3), (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_27 [i_8]), (var_8)))))))) : (((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(unsigned char)14] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (var_7))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_2);
}
