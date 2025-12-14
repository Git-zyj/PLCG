/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59328
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((short) arr_1 [i_0]));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1094808815)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_14 = ((/* implicit */_Bool) min((var_14), ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [14LL] = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_4 [1U]))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) <= (2147483643)))), ((+(((/* implicit */int) arr_9 [i_2]))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_2] [i_2])) | (((/* implicit */int) arr_10 [(_Bool)1] [i_2])))) >> (((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775789LL))) + (19LL))))))) - (58858)))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_17 |= ((/* implicit */unsigned int) (~((~((-9223372036854775807LL - 1LL))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(17451448556060672LL)))) ? (var_2) : (((/* implicit */int) arr_6 [i_3])))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((short) var_12))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)18]))) | (-4333878256491323901LL))) : (((-1153487544848472298LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_20 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3]))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((arr_9 [i_3]) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_5 [14U] [i_3])))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned short i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 2; i_8 < 8; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) (!(max((arr_15 [i_4] [i_8]), ((_Bool)1)))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (_Bool)1))));
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_24 -= ((/* implicit */long long int) (-((+(((/* implicit */int) min((arr_17 [i_4] [i_4]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            arr_29 [(unsigned short)10] [(signed char)5] [(signed char)5] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_7]))))) - (((1259631527900640589LL) - (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [(unsigned short)3] [i_5] [i_4 - 2]))))))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_19 [i_4 - 1] [11] [i_4]))))));
                            var_25 |= ((/* implicit */_Bool) (+((-(((((/* implicit */int) arr_22 [i_7])) / (((/* implicit */int) (_Bool)1))))))));
                        }
                        var_26 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_27 [i_6] [i_6 - 1] [i_6] [i_4 + 1] [(unsigned short)7] [i_4 - 2])), (arr_23 [i_4] [i_4]))) | (((/* implicit */long long int) ((min((var_2), (((/* implicit */int) arr_15 [i_6 + 1] [i_6])))) | (((/* implicit */int) min((arr_18 [i_4] [i_5]), (((/* implicit */unsigned short) arr_20 [i_7] [(unsigned short)7] [i_5] [i_4 - 2]))))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (0U)));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_38 [i_4] [i_4] [i_10] = arr_7 [19LL];
                        arr_39 [i_4 + 1] [i_10] [i_4 + 1] = ((/* implicit */unsigned int) (signed char)-30);
                    }
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (((/* implicit */int) (!(((/* implicit */_Bool) (short)255))))))))));
                        arr_42 [i_13] [i_10] [i_10] [i_4] = ((/* implicit */long long int) ((signed char) ((_Bool) (signed char)-1)));
                    }
                    arr_43 [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), ((-(var_6)))));
                    var_29 |= ((/* implicit */unsigned int) 2147483647);
                    var_30 = arr_15 [i_4] [i_4];
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((852280963517124620LL) % (2458913195818602150LL))))));
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            var_32 = ((/* implicit */long long int) arr_12 [i_14] [i_15]);
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        var_33 |= ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) var_2)))));
                        arr_53 [i_14] [i_17] [i_14] [i_17] [i_14] = ((/* implicit */int) 2458913195818602150LL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_57 [i_14] [i_14] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_14]))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1)))));
            var_35 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_11))))));
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (~(arr_54 [i_14] [i_18] [i_18]))))));
        }
        arr_58 [i_14] = ((/* implicit */int) (-(4189084691361650863LL)));
    }
}
