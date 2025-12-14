/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55216
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_12)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) 1774690982U)), (7486678661310946243ULL))) - (arr_1 [i_0]))) + (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : ((-(arr_1 [i_0])))))));
            var_14 = ((unsigned short) arr_4 [i_1] [(short)7] [i_1]);
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((var_1) ^ (7486678661310946243ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((var_8), (max((10960065412398605368ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))))))));
        }
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_16 = ((long long int) ((long long int) arr_0 [i_2]));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */unsigned long long int) 3216718656U)) | (10960065412398605373ULL))) < (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) / (9223372036854775807LL)))))))));
                            var_18 = ((/* implicit */long long int) arr_6 [i_2 + 1] [i_3 - 3]);
                        }
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (arr_6 [i_2 + 1] [i_3 - 3]))))));
                        var_20 = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [6LL]))) | (((((/* implicit */_Bool) arr_13 [8ULL] [i_3])) ? (arr_0 [i_5]) : (var_0))));
                        arr_20 [i_2 - 1] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (10960065412398605373ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_3])))))));
                        var_21 = (i_3 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_0 [i_2]) >> (((arr_5 [i_3]) + (5927816782584649149LL)))))) : (((/* implicit */unsigned int) ((arr_0 [i_2]) >> (((((arr_5 [i_3]) + (5927816782584649149LL))) - (3009804443315742328LL))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) (_Bool)1);
                                var_23 *= ((10960065412398605372ULL) >= (arr_11 [i_4] [i_3 + 1] [i_4]));
                                arr_25 [i_2] [i_2] [i_4] [i_2] [i_3] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3]))))) ? ((~(7486678661310946239ULL))) : (((/* implicit */unsigned long long int) (~(-8832337506865988367LL))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) 7486678661310946234ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((((/* implicit */_Bool) arr_1 [i_2 - 3])) ? (arr_1 [i_2 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
        var_26 += ((/* implicit */unsigned int) ((unsigned long long int) var_8));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                {
                    arr_31 [i_2 - 2] [i_2] [i_9] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                    var_27 = ((/* implicit */long long int) ((signed char) arr_11 [i_9] [i_9] [i_9]));
                    var_28 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_2 + 1] [i_10]))));
                }
            } 
        } 
    }
    var_29 -= ((/* implicit */unsigned short) ((max((var_3), (((((/* implicit */_Bool) var_8)) ? (15527696020031057577ULL) : (var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            for (long long int i_13 = 1; i_13 < 11; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 2; i_14 < 10; i_14 += 3) 
                    {
                        for (long long int i_15 = 4; i_15 < 11; i_15 += 2) 
                        {
                            {
                                arr_47 [i_11] [i_12] [i_11] [i_13] [i_14] [i_15 + 2] [i_15 - 4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 2ULL))) || (((/* implicit */_Bool) 7414977054574815648ULL))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_15]))) ? (arr_16 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_4 [i_12] [i_13] [i_14]))))))))));
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        arr_51 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) arr_42 [i_13]);
                        var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39492)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1023))));
                    }
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((((/* implicit */_Bool) -2466551499078075485LL)) ? (7486678661310946239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))))))))));
                        var_33 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_42 [i_13 + 2])))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */short) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (7486678661310946239ULL))), (((unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (((-(var_2))) / (min((((/* implicit */long long int) var_10)), (var_2))))))));
}
