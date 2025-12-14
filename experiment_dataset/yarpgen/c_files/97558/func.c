/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97558
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
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) < (var_0));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) arr_2 [13U])))) : (((/* implicit */int) (signed char)-115)))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (_Bool)1);
                    arr_9 [0] [i_1] [i_2] = var_12;
                }
            } 
        } 
        var_19 |= ((/* implicit */_Bool) var_9);
    }
    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 3) 
    {
        arr_12 [i_3] &= arr_0 [i_3 - 1];
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) arr_6 [11U] [i_3 + 1] [15ULL] [i_3 + 2])), (6332164177320534759LL))) : (((/* implicit */long long int) arr_1 [i_3 + 2])))));
        arr_14 [13LL] = ((((/* implicit */unsigned int) ((/* implicit */int) ((8696100449240842694LL) < (((/* implicit */long long int) max((355221090U), (3259554135U)))))))) ^ (1072711468U));
    }
    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (~(arr_5 [i_8] [3ULL] [i_6])));
                                var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8 - 2] [i_5 - 1] [(signed char)15] [i_4 + 1] [(signed char)15])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_15))))) : (max((((/* implicit */long long int) arr_7 [10U] [i_5] [i_6])), (var_7)))))));
                            }
                        } 
                    } 
                    arr_28 [i_4] [(short)9] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_7 [i_6] [i_4] [i_4])))))) ? (max((arr_24 [12ULL] [i_4 + 1] [i_5 - 2] [i_5 + 1] [11LL]), (arr_24 [i_4] [i_4 + 1] [i_5 - 2] [i_5 + 1] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_4])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 4; i_9 < 19; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) arr_15 [i_4]);
                        arr_38 [(short)10] [i_4] [i_4] [(unsigned short)11] [(unsigned short)11] [9ULL] = ((/* implicit */long long int) arr_2 [22U]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        for (short i_13 = 1; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((((((/* implicit */int) arr_35 [i_13 - 1] [i_9 - 1] [i_10] [i_9] [i_4 - 1])) * (((/* implicit */int) arr_35 [i_13 + 1] [i_9 - 3] [i_9 - 3] [i_12] [i_4 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                                arr_43 [i_4] [i_4] [i_4] [i_4] [i_13 + 1] = ((/* implicit */unsigned short) arr_3 [1LL] [i_10] [i_4]);
                                var_25 *= (+(arr_5 [i_10] [(signed char)20] [i_13]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((short) (~(var_6))));
                                arr_49 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9061450633647765684LL)) ? (((/* implicit */int) var_8)) : (1208618541))) + (((/* implicit */int) arr_40 [(signed char)5] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_15))))) > ((-(arr_1 [i_4 + 1])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_40 [(signed char)0] [i_9] [(signed char)0] [15ULL])), (var_6)))) == (min((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_10] [i_9 - 2]))))))));
                                var_27 = ((/* implicit */signed char) max((4294967272U), (2289328063U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
