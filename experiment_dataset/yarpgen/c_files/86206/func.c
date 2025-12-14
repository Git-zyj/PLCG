/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86206
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
    var_14 = ((/* implicit */unsigned char) ((min((((var_7) - (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) * (var_11)))))) <= (max((max((((/* implicit */long long int) 1576672095U)), (var_7))), (((/* implicit */long long int) ((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            arr_4 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) arr_0 [i_1 + 1]))))));
            arr_5 [i_0] = ((/* implicit */unsigned int) var_9);
            var_15 = ((/* implicit */_Bool) var_12);
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_16 = var_8;
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */short) 2989836350U);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((_Bool) ((2718295200U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) ^ (arr_9 [i_4] [i_4])));
                    }
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        arr_16 [i_3] [(_Bool)1] [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (arr_2 [i_2] [i_2] [18U])));
                        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3 + 3] [i_0 - 1] [i_3] [i_4]))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (((0U) & (var_10)))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [18U])) && (((/* implicit */_Bool) (short)-1))))))))));
                    }
                    var_23 = var_0;
                }
            }
            for (unsigned char i_7 = 2; i_7 < 16; i_7 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) ((int) arr_1 [i_2]));
                arr_19 [i_2] = ((/* implicit */int) (+(131071U)));
            }
            for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                var_25 ^= ((/* implicit */short) (((-(2288357402U))) % (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_8 - 1]), (arr_6 [i_8 - 1])))))));
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    arr_25 [i_0] [i_0] [i_0] [(signed char)11] [i_0] = ((/* implicit */signed char) var_11);
                    arr_26 [i_9] [i_8] [(unsigned char)10] [i_9] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (((/* implicit */long long int) var_12)))))) * (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6715))) : (1576672095U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3181837319U)) && (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_8] [i_9])))))))));
                    arr_27 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1290056212U)) ? (1431338469U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                    var_26 += ((/* implicit */_Bool) var_6);
                }
                for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
                {
                    arr_31 [11U] [11U] [11U] [11U] [11U] = ((((/* implicit */int) ((signed char) arr_18 [i_10] [i_10 + 1] [2ULL] [i_10 + 1]))) <= (((((/* implicit */int) arr_0 [i_10 + 1])) >> (((((/* implicit */int) arr_6 [i_8 - 1])) + (29))))));
                    var_27 += ((/* implicit */unsigned int) (((!(((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8] [(_Bool)1] [i_8] [i_8]))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_10 + 1])))))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11595552928082309235ULL)) && (((/* implicit */_Bool) (short)0)))))) / (max((((-1LL) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)4] [i_8]))))), (((/* implicit */long long int) arr_8 [i_8 + 1]))))));
                    arr_32 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((6473298579054067357LL) / (((/* implicit */long long int) 4076376346U))));
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_37 [i_0] [i_11] [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_0 + 2] [i_0 - 1] [i_11]) / (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0] [i_11] [i_11])) : (arr_36 [i_11])))));
            var_29 = ((/* implicit */signed char) ((((172938931460524676ULL) | (((/* implicit */unsigned long long int) var_9)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11)))));
        }
        arr_38 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) max((((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [(signed char)19] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) && (((/* implicit */_Bool) arr_17 [i_0])))))))), (max((((/* implicit */unsigned int) arr_24 [i_0])), ((-(arr_18 [i_0] [0U] [i_0] [i_0])))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((var_9), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_39 [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (54024686U)))))))));
        arr_41 [i_12] [i_12] = ((/* implicit */long long int) (+(((2006609878U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-12)))))))));
    }
    var_31 = ((/* implicit */long long int) ((((unsigned int) (-2147483647 - 1))) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
