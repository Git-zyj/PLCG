/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56744
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_17)) << (((((/* implicit */int) var_18)) - (60777))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_1 [i_0])))) ? (min((var_9), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (arr_1 [i_0])));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = min((((/* implicit */int) var_3)), (((((((/* implicit */int) var_2)) < (arr_12 [i_1] [i_2] [i_3] [i_4]))) ? (((((/* implicit */_Bool) 17592186044415ULL)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_17)) > (arr_7 [i_0] [i_1] [i_2])))))));
                            var_20 = ((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_2]);
                            var_21 = arr_12 [i_0] [i_1] [i_2] [i_3];
                            arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_3]);
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? ((+(arr_9 [i_0] [i_0]))) : ((+(var_9))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) min((arr_5 [i_4] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_3])))) : (((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_1] [i_2])), (var_11)))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                var_23 *= ((/* implicit */long long int) ((((/* implicit */int) var_17)) * (((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) arr_2 [i_5])))))));
                var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_5]))) : (arr_1 [i_0]))) == (((/* implicit */unsigned long long int) (~(arr_2 [i_5]))))));
            }
            for (short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                arr_20 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 2 */
                for (int i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_6 [i_7 - 1] [i_6] [i_0])) - (((/* implicit */int) arr_15 [i_0] [i_1] [i_7 + 1] [i_7])))));
                    arr_24 [i_7 + 2] [i_7 + 2] [i_6] [i_7] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_6] [i_7]))))) ? (max((var_9), (((/* implicit */unsigned long long int) var_14)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_8)))))) < (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_19 [i_0] [i_0])))) ? (((/* implicit */int) arr_19 [i_6] [i_1])) : (((/* implicit */int) var_14)))))));
                    arr_25 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_12 [i_0] [i_1] [i_6] [i_7 + 2]))) ? (((int) var_13)) : (((/* implicit */int) arr_5 [i_6] [i_1] [i_0]))))), (var_19)));
                }
                for (int i_8 = 1; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [i_6] [i_1] [i_6] [i_8 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [i_8 + 2] [i_8] [i_8 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (arr_22 [i_8] [i_6] [i_1] [i_0])));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_0] [i_1])) + (((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_8 + 1] [i_8 + 1] [i_8] [i_1])) < (((((/* implicit */_Bool) arr_11 [i_8] [i_6] [i_1] [i_0])) ? (var_10) : (((/* implicit */long long int) var_7))))))))))));
                }
                arr_29 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_18 [i_1] [i_1] [i_6] [i_1])))) >= (((unsigned long long int) arr_18 [i_6] [i_6] [i_6] [i_0]))));
                arr_30 [i_0] [i_6] = ((/* implicit */long long int) max((((unsigned char) arr_12 [i_0] [i_1] [i_6] [i_1])), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_0)))) <= (((/* implicit */int) var_0)))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_33 [i_0] [i_1] [i_9] = ((/* implicit */unsigned int) var_18);
                var_26 = ((/* implicit */int) arr_19 [i_0] [i_9]);
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 127U))));
                arr_34 [i_0] [i_1] [i_9] [i_1] = (-(3524440470580227925LL));
            }
        }
        for (unsigned char i_10 = 1; i_10 < 17; i_10 += 4) 
        {
            arr_38 [i_10] = ((/* implicit */signed char) ((unsigned char) var_12));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                for (unsigned int i_12 = 2; i_12 < 17; i_12 += 1) 
                {
                    for (unsigned char i_13 = 4; i_13 < 17; i_13 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_13 - 3] [i_13 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_12 - 1] [i_13 + 2])) : (var_1)))) ? (((arr_9 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_0] [i_13 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_43 [i_0] [i_10] [i_11] [i_11] [i_12] [i_13]))) ? (arr_18 [i_0] [i_10] [i_12] [i_12 + 2]) : (((/* implicit */long long int) (-(var_8)))))))));
                            var_29 = ((/* implicit */unsigned int) var_9);
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((arr_31 [i_12] [i_11]), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0])) ? (((/* implicit */int) arr_27 [i_0] [i_10 + 2])) : (((/* implicit */int) arr_5 [i_0] [i_12] [i_13])))))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            arr_49 [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) (+(4294967168U)));
            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_17 [i_0] [i_0] [i_0] [i_0])))) ? (arr_18 [i_0] [i_0] [(signed char)4] [(signed char)4]) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_39 [i_0] [i_14] [i_14] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0])) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_14] [i_14] [i_0])) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_41 [i_0] [i_14] [i_14]))))) : (((arr_45 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
            arr_50 [i_14] [i_0] [i_14] = ((/* implicit */unsigned char) ((signed char) ((signed char) ((((/* implicit */int) arr_46 [i_0])) + (((/* implicit */int) var_6))))));
        }
    }
    var_32 = ((/* implicit */unsigned long long int) var_10);
    var_33 = var_1;
    var_34 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) var_11)) < (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (var_9))));
}
