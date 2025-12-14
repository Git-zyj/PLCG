/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56858
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
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = arr_1 [0ULL] [i_0];
        arr_2 [i_0] [(signed char)0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2685)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (930990283U)));
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(2311736801375828293ULL)))) ? (((/* implicit */int) arr_0 [0ULL] [i_0])) : (((/* implicit */int) arr_0 [(unsigned char)19] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [17]))) : (3004428337282942759ULL)));
        var_20 = ((/* implicit */unsigned int) arr_5 [i_1]);
        var_21 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-30))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_16 [i_2] [i_3] = ((/* implicit */unsigned char) arr_15 [i_3 + 2] [i_2 + 3]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) arr_11 [i_4] [i_5] [i_6]);
                                var_23 = ((/* implicit */int) arr_8 [8LL]);
                                var_24 = ((((/* implicit */_Bool) (-(arr_14 [i_6] [i_6] [i_4] [i_5])))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4]))) : (arr_1 [(_Bool)1] [(_Bool)1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [6] [i_3] [6] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] = ((/* implicit */long long int) arr_10 [i_2] [i_2]);
                    arr_23 [(signed char)3] [(signed char)3] [(signed char)3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [(unsigned short)2])) ? (((/* implicit */int) arr_15 [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_2 + 3] [i_2 + 3] [i_2]))));
                }
            } 
        } 
        arr_24 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_18 [i_2] [i_2 + 1] [i_2] [i_2 + 4] [(_Bool)1])))) ? (((arr_11 [i_2] [(_Bool)1] [i_2]) ? (((/* implicit */int) arr_9 [0LL])) : (((/* implicit */int) arr_0 [i_2] [i_2])))) : ((-(((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [5ULL] [i_2]))))));
        arr_25 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_21 [i_2] [i_2] [(short)15] [i_2] [i_2])) : (((/* implicit */int) arr_17 [(unsigned char)16] [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_1 [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_7] [i_8] [i_8] [i_2])) ? (((/* implicit */unsigned long long int) (-(arr_33 [i_2])))) : (((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_7 + 1])) : (arr_26 [i_2] [i_2] [i_2])))));
                        var_26 -= ((/* implicit */_Bool) (-(arr_33 [i_2])));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            arr_36 [i_10] [i_9] [i_8] [i_8] [16ULL] [i_7] [i_2] = ((/* implicit */short) arr_18 [9LL] [i_9] [i_8] [i_7] [i_2]);
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_20 [i_2]))));
                        }
                        for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_41 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [12] [i_7])) ? ((~(16135007272333723322ULL))) : (((/* implicit */unsigned long long int) ((arr_39 [(signed char)9] [i_7]) ? (arr_8 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_11] [i_8] [i_2] [i_2] [i_8]))))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_8 [15LL]))));
                            var_29 = ((/* implicit */unsigned char) arr_8 [i_8]);
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 1; i_12 < 22; i_12 += 1) 
    {
        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5623349175871626230LL)));
                var_31 = ((/* implicit */signed char) arr_45 [i_12] [i_13] [i_13]);
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5577795433368708214LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)117))))) ? (((((/* implicit */_Bool) arr_43 [10LL])) ? (arr_45 [i_12] [i_12] [i_12]) : (arr_43 [i_12]))) : (((((/* implicit */_Bool) arr_44 [24U] [24U])) ? (arr_43 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [(_Bool)1] [(_Bool)1])))))))) ? ((-(((/* implicit */int) arr_42 [i_12] [i_13])))) : ((-((-(((/* implicit */int) arr_42 [i_12] [i_12])))))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) (-((-((-(11626665093059476760ULL)))))));
}
