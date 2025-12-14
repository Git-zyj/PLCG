/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77064
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
    var_11 = ((((/* implicit */int) var_5)) != (((/* implicit */int) ((((/* implicit */int) (short)15789)) > (((/* implicit */int) (short)-15790))))));
    var_12 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15802))))) ? (((((/* implicit */_Bool) 1974464883U)) ? (1974464883U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))) : (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32758))))))) + (((min((((/* implicit */unsigned int) var_8)), (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (var_5))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((short) arr_10 [i_1] [i_1] [i_2]))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)13]))) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_1]))))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_1] [i_2 - 1] [i_2 + 1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) arr_14 [i_3] [i_3] [14U] [i_3 - 1]);
                        arr_15 [i_3] [i_1] [(unsigned char)0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_1]))) >= (var_10)));
                        arr_16 [i_1] [i_1] [(signed char)0] = (_Bool)1;
                        var_15 = ((/* implicit */_Bool) (-(arr_6 [i_1] [i_1] [i_2 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 4; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
                        {
                            arr_23 [i_4] [i_4] [i_1] = ((/* implicit */short) ((unsigned int) (short)-15788));
                            var_16 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (signed char)-84)))));
                        }
                        arr_24 [i_1] [i_1] [(signed char)7] [i_1] [(signed char)7] [i_4] = ((/* implicit */unsigned short) (signed char)-84);
                        var_17 = ((/* implicit */unsigned char) arr_22 [(signed char)8] [(signed char)14] [i_2] [(unsigned short)10] [(signed char)8]);
                        var_18 = ((/* implicit */long long int) arr_10 [i_0] [i_2] [i_4]);
                        arr_25 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) arr_6 [i_1] [i_1] [4U]);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_6 = 3; i_6 < 15; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_2 - 1] [i_2 - 1] [i_6 - 3] [i_2 - 1] [i_6])) ? (((/* implicit */int) (unsigned short)5414)) : (((/* implicit */int) arr_22 [i_2 + 1] [i_2] [i_6 - 2] [i_6 + 3] [i_6 + 1]))));
                        arr_29 [i_1] [(signed char)15] [i_1] = arr_9 [i_0] [i_0] [i_0] [(unsigned short)6];
                        arr_30 [i_0] [i_0] [(unsigned char)15] [i_1] = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_13 [(_Bool)1] [i_2 + 1] [5LL] [i_2 + 3] [i_1])));
                        var_20 = ((var_6) * (4294967293U));
                    }
                    for (unsigned short i_7 = 4; i_7 < 17; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_27 [i_1] [i_1]))))));
                        arr_33 [i_0] [i_1] [i_1] [i_2] [(short)17] [i_1] = ((/* implicit */long long int) arr_28 [i_2] [12LL] [12LL] [i_0] [12LL] [i_2]);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [(_Bool)1] [i_2]))) ? (((/* implicit */long long int) var_7)) : (arr_21 [15LL] [i_1] [i_1] [(_Bool)0] [i_1] [(_Bool)1] [i_1])));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 20; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((unsigned int) arr_34 [i_8 + 1] [i_8 + 1]));
        arr_36 [(short)14] = ((/* implicit */long long int) ((unsigned short) 4294967295U));
    }
    /* vectorizable */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_39 [i_9] = ((/* implicit */unsigned int) (-(((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_40 [i_9 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_3 [i_9] [(_Bool)0])) : (((/* implicit */int) arr_3 [(short)5] [(short)5]))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_10] [i_10]))));
        arr_43 [i_10] = arr_41 [i_10] [i_10];
        arr_44 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_10] [i_10])) ? ((-(((/* implicit */int) arr_42 [i_10])))) : (((/* implicit */int) arr_41 [i_10] [i_10]))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) * (((/* implicit */int) (short)-15778)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)253)) && (((/* implicit */_Bool) var_0))))))));
}
