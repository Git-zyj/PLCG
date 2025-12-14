/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82438
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [13LL] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        arr_3 [21ULL] = ((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [(_Bool)1] [(_Bool)1] [i_0] |= ((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [22ULL] [22ULL])))))));
                        var_13 ^= ((/* implicit */_Bool) arr_7 [i_2]);
                        var_14 = ((/* implicit */unsigned short) arr_10 [i_1] [i_1]);
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) % ((+(arr_6 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
            arr_18 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_4]);
            var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_16 [i_4]) : (arr_16 [i_4])))));
        }
    }
    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 3; i_9 < 22; i_9 += 4) 
                    {
                        {
                            arr_35 [i_6] [i_6] [i_5] [i_8] [i_5] = ((/* implicit */long long int) arr_34 [i_5] [i_5] [i_5] [i_8] [i_9]);
                            arr_36 [i_7] [i_8] [i_5] = ((/* implicit */unsigned int) arr_6 [i_5] [i_6]);
                            var_17 = ((/* implicit */unsigned char) ((((_Bool) arr_31 [i_9 - 3] [i_5] [i_9] [i_9 + 2])) ? (((((/* implicit */_Bool) arr_34 [i_5] [i_9 + 1] [i_5] [i_9 + 1] [i_9 + 2])) ? (((/* implicit */int) arr_31 [i_9 + 1] [i_5] [(_Bool)1] [i_9 - 1])) : (((/* implicit */int) arr_34 [(_Bool)1] [i_9 + 2] [i_5] [i_9 - 3] [i_9 - 1])))) : ((+(((/* implicit */int) arr_34 [i_9] [i_9 - 1] [i_5] [i_9 - 1] [i_9 - 1]))))));
                        }
                    } 
                } 
            } 
            var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_6] [i_6]))));
        }
        for (int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_10] [i_10])) ? (((/* implicit */int) arr_28 [i_5] [i_10] [(_Bool)1] [i_10])) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_10] [i_10])))) : (((var_4) ? (((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_10] [i_10]))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_31 [18] [i_5] [i_5] [i_10]))))) ? (((/* implicit */int) arr_0 [i_5] [i_10])) : (((/* implicit */int) arr_8 [i_5] [(unsigned short)19] [i_10] [i_10]))))) : (arr_29 [i_5] [i_5] [i_5] [i_5] [i_10])));
            arr_39 [i_5] = ((/* implicit */unsigned long long int) (~(1743142857568734973LL)));
        }
        for (int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
        {
            arr_44 [i_5] [i_5] [i_11] = var_4;
            var_21 = ((/* implicit */int) arr_38 [i_5]);
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                arr_48 [i_5] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_12 [i_5] [i_12])), (((((/* implicit */_Bool) arr_26 [i_5] [i_11] [i_12])) ? (((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_12])) : (((/* implicit */int) arr_25 [(_Bool)1] [i_11] [i_11]))))))));
                arr_49 [i_5] [i_5] [i_12] = (-((-(arr_6 [i_5] [i_5]))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -160867346)) & (18446744073709551615ULL)));
            }
            for (signed char i_13 = 1; i_13 < 23; i_13 += 1) 
            {
                arr_52 [i_5] [i_5] [i_11] [i_5] = ((/* implicit */long long int) max((min((arr_1 [i_13 - 1] [i_11]), (((/* implicit */unsigned short) arr_51 [i_13 - 1])))), (((/* implicit */unsigned short) ((_Bool) (_Bool)1)))));
                var_23 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_13] [i_13 + 1])) ? (((/* implicit */int) arr_26 [2] [2] [i_13 - 1])) : (((/* implicit */int) ((unsigned char) arr_8 [i_5] [i_11] [i_5] [i_5])))))));
                var_24 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_33 [i_5] [i_5] [i_13 + 1] [i_13] [i_13])))), (((((/* implicit */int) var_10)) | ((-(((/* implicit */int) arr_26 [i_5] [i_11] [i_5]))))))));
            }
            arr_53 [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_29 [i_5] [i_11] [i_5] [i_5] [i_5]))));
            arr_54 [i_5] [i_11] = ((/* implicit */unsigned short) ((min((arr_9 [i_5] [i_5] [i_5] [i_11]), (((/* implicit */unsigned long long int) var_3)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) : (1193622639U))))));
        }
        var_25 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_27 [i_5] [(short)10] [i_5])) ? (((/* implicit */int) arr_27 [i_5] [14U] [i_5])) : (((/* implicit */int) arr_27 [i_5] [(signed char)16] [(unsigned short)8])))), (((/* implicit */int) arr_27 [i_5] [(unsigned char)20] [i_5]))));
        arr_55 [i_5] [i_5] = ((/* implicit */signed char) arr_31 [i_5] [i_5] [i_5] [i_5]);
        var_26 += ((/* implicit */_Bool) (~(arr_50 [i_5] [18U])));
    }
}
