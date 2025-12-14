/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/850
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) (_Bool)1);
                            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [(unsigned short)7] [19] [i_3 - 1])) ? (((/* implicit */long long int) var_3)) : (3176597558342606415LL))) % (var_11)));
                        }
                    } 
                } 
                var_15 = -5262357679576884775LL;
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    var_16 = min((((((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) ^ (min((((/* implicit */long long int) (_Bool)1)), (2336031027530883055LL))))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (arr_10 [i_0] [i_0] [i_4])))));
                    var_17 |= ((/* implicit */long long int) arr_10 [i_4] [i_4] [0LL]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) 2648134462205416067LL);
                                var_19 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [(_Bool)1] [i_4] [i_4])) >= (((/* implicit */int) (_Bool)1)))))) == ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (9223372036854775805LL)))));
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                                arr_19 [(_Bool)1] [i_4] [i_4] [i_0] [0LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [5ULL])) ? (((arr_3 [3U] [i_6]) ? (((/* implicit */int) arr_3 [i_0] [(short)11])) : (((/* implicit */int) arr_3 [i_1] [i_6])))) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                }
                arr_20 [i_0] [(unsigned short)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))))) ? (max((arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) min((max(((_Bool)0), (arr_14 [i_0] [(short)14] [i_0] [(short)7]))), (arr_8 [i_0])))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (-5413655338519562814LL));
    /* LoopSeq 2 */
    for (long long int i_7 = 2; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_13 [i_7 - 1] [(short)13] [i_7])) ? (-4868365799114826065LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)9] [i_7 - 1] [i_7 - 2])))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (short i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)104)), (var_2)))) || (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) arr_12 [i_7]))))))) ? ((+(min((-1015387411065166988LL), (((/* implicit */long long int) arr_13 [i_7 - 2] [i_9] [6U])))))) : (((/* implicit */long long int) (~(((arr_8 [(unsigned short)19]) ? (((/* implicit */int) arr_5 [i_9] [i_9])) : (((/* implicit */int) var_8)))))))));
                        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4699202278877645695LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_7 + 1] [i_8] [12LL]))))) : (((arr_8 [(_Bool)1]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_24 [i_7 - 1]), (arr_1 [i_7 + 1]))))));
                        var_25 *= ((564591170615325201LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))));
                    }
                } 
            } 
        } 
        var_26 = (-(1002843608998033470LL));
    }
    for (long long int i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_2))) == (((/* implicit */int) arr_1 [13ULL])))))));
        var_28 = ((/* implicit */short) max(((~(((/* implicit */int) (short)14643)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_11] [i_11 - 1] [i_11])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 2; i_12 < 17; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 2) 
            {
                for (unsigned short i_14 = 3; i_14 < 19; i_14 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((arr_39 [i_13 + 2] [i_12 - 2] [i_11 - 2]) ? (((/* implicit */int) arr_39 [i_13 + 2] [i_12 + 2] [i_11 - 1])) : (((/* implicit */int) arr_39 [i_13 - 1] [i_12 - 2] [i_11 - 1])))))));
                        arr_44 [i_11] [i_11] = ((/* implicit */int) (!((_Bool)0)));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) ^ ((((_Bool)1) ? (-185201076) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [4ULL] [i_12])) ? (arr_41 [i_12 + 3] [i_12 + 4] [i_11 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)1)))))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_11 + 1])) ? (((/* implicit */int) arr_42 [i_12 - 2])) : (((/* implicit */int) arr_8 [i_11 - 2]))));
        }
    }
}
