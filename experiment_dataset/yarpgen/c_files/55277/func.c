/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55277
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((long long int) ((((unsigned long long int) arr_6 [i_1] [i_1] [i_0])) == (((unsigned long long int) 0ULL)))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 562092402)) - (var_7)));
                    arr_10 [i_1] = ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (3)))), (14984418898131862897ULL)));
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    arr_14 [i_1] [(unsigned char)0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)29985)) : (((/* implicit */int) ((11ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (arr_8 [i_1] [i_1]) : (2909538955U)))) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))));
                }
                var_14 ^= (short)11300;
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_15 = ((/* implicit */long long int) 10821029614706695359ULL);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) var_8);
                                var_17 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_1]);
                                arr_21 [i_6] [(_Bool)0] [0] [0] [(_Bool)0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) -3372860615205720934LL)) || (((/* implicit */_Bool) 9223372036854775807LL))));
                                arr_22 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)15878)) | (-114855705)));
                            }
                        } 
                    } 
                    var_18 = (i_1 % 2 == 0) ? (((/* implicit */short) (((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (17037002264821286970ULL))))) >> (((arr_11 [i_0] [i_0] [i_0] [i_1]) - (15921968808524846745ULL)))))) : (((/* implicit */short) (((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (17037002264821286970ULL))))) >> (((((arr_11 [i_0] [i_0] [i_0] [i_1]) - (15921968808524846745ULL))) - (15819107486305851129ULL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [(short)12] &= ((/* implicit */short) 5680317936721533233ULL);
                            arr_29 [i_0] [i_1] [i_4] [i_4] [i_7] [i_7] [i_1] = ((/* implicit */unsigned int) var_9);
                            arr_30 [i_4] [(_Bool)1] [i_1] [(short)3] [i_1] [i_1] = ((/* implicit */int) ((signed char) ((unsigned long long int) -4878039851181618040LL)));
                            var_19 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
                        }
                        for (long long int i_9 = 3; i_9 < 22; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [20ULL] [20ULL] [i_9 - 2] [i_7] [i_9] [(short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) : (var_9))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_9))));
                        }
                        var_22 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_4] [i_1] [i_4] [i_7] [i_0])) + (((/* implicit */int) var_4))));
                        var_23 = ((/* implicit */unsigned long long int) 3453578745332174705LL);
                    }
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_36 [i_0] [(short)19] [i_1] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4012147914U)))))));
                        var_24 ^= ((/* implicit */long long int) var_11);
                        var_25 = ((/* implicit */short) 10338489285693582416ULL);
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 1) 
                    {
                        arr_39 [i_1] [21ULL] [12ULL] [i_11] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        var_26 = ((/* implicit */long long int) arr_37 [i_0] [i_1]);
                    }
                }
                var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1640103800U)) ? (((/* implicit */unsigned long long int) max((-8616783120385144106LL), (((/* implicit */long long int) (signed char)7))))) : (5113836720972053894ULL))) * (arr_35 [i_0] [i_0] [i_1] [(short)2])));
            }
        } 
    } 
    var_28 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (short)-26291))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 3) 
    {
        for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            {
                arr_44 [i_13] [i_12 + 1] [i_12] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12 + 1] [i_13] [18LL] [i_12 + 1] [i_13] [i_13]))) + (var_7))) + (((unsigned long long int) ((unsigned long long int) 4238486635949684042LL))));
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (_Bool)1)))))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) min((3184619321752616046ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)27)) ? (var_6) : (((/* implicit */unsigned long long int) -6359637191773912206LL))))))))));
    /* LoopSeq 1 */
    for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (-(7753075256565430589LL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [8ULL] [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8))))))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)235)) - (205)))));
        arr_48 [i_14] [i_14] = ((/* implicit */_Bool) arr_26 [i_14] [i_14] [i_14] [i_14] [i_14]);
    }
}
