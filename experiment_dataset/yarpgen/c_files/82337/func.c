/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82337
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
    var_16 = ((/* implicit */unsigned char) var_1);
    var_17 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [8ULL] [(unsigned short)10] [i_4] [i_3] [i_3] [8ULL] = ((/* implicit */unsigned short) var_10);
                                var_18 -= ((/* implicit */unsigned long long int) (!(arr_9 [i_0] [i_0] [14ULL] [i_4])));
                                arr_16 [i_0 + 1] [i_1] [i_1] [12] [(unsigned short)18] |= ((/* implicit */int) (!(((/* implicit */_Bool) 16306559597844313916ULL))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) 5154921158074183813LL);
                            var_20 = ((/* implicit */unsigned long long int) (+(var_11)));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_21 *= ((/* implicit */unsigned short) arr_11 [i_0 - 3] [i_0 - 3] [i_5 - 1] [i_5 - 2]);
                            var_22 = ((/* implicit */_Bool) var_12);
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 2; i_8 < 21; i_8 += 2) 
                        {
                            arr_27 [(short)0] [i_1] [(_Bool)1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            var_23 = (unsigned char)15;
                        }
                        var_24 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)46506)) == (var_14)));
                    }
                }
            } 
        } 
        arr_28 [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)240)) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1]))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 4; i_9 < 23; i_9 += 2) /* same iter space */
    {
        arr_31 [i_9] [(_Bool)1] = ((/* implicit */long long int) arr_13 [i_9] [(signed char)12] [i_9 - 1] [(_Bool)1] [i_9]);
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_25 -= ((/* implicit */unsigned int) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */short) ((18446744073709551592ULL) & (18446744073709551574ULL)));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (_Bool)0))));
                            arr_41 [21] [(short)7] [i_11] [18] [i_13] [(short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (440345555953245809ULL)));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_46 [(_Bool)1] [(unsigned short)19] [i_11] [(_Bool)1] [i_14] = (_Bool)0;
                            arr_47 [i_9 + 1] = arr_6 [i_9 - 2] [i_9 - 2] [i_9 - 2];
                        }
                    }
                    arr_48 [13ULL] [(signed char)11] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_9 + 1] [i_9 + 1] [i_9 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [6LL] [i_10] [6LL] [i_9]))) : (((((/* implicit */_Bool) var_14)) ? (5154921158074183817LL) : (((/* implicit */long long int) 1708087507))))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (9248925328164710759ULL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            arr_56 [i_9 - 3] [i_9 - 3] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) | (((/* implicit */int) (unsigned char)222))));
                            var_29 = (-(((/* implicit */int) (unsigned char)37)));
                            var_30 -= ((/* implicit */_Bool) arr_42 [i_9] [i_9] [(_Bool)1] [i_9] [i_9 - 1] [(short)7]);
                            var_31 = ((/* implicit */short) arr_24 [i_15] [14ULL] [i_15] [14]);
                        }
                    }
                }
            } 
        } 
    }
    var_32 -= ((((/* implicit */_Bool) 3829816220U)) ? ((-(((((/* implicit */_Bool) -1369103039)) ? (3312376292U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-79)) : ((~(((/* implicit */int) (unsigned short)18633))))))));
}
