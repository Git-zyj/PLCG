/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56584
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) var_6);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */_Bool) max((var_8), (((((var_8) * (((/* implicit */unsigned long long int) 140600049401856LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))));
                var_17 &= ((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((arr_1 [i_0]) - (1520810579180800338LL))))))));
            }
            for (short i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_4] [i_1] [i_3] [i_3] [i_1] [19U] = min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_5])) * (((/* implicit */int) arr_11 [(short)14] [(short)14] [i_3] [i_3] [i_3] [i_4]))))) >= (-5363796872109372392LL)))));
                            arr_17 [i_5] [i_4] [i_3] [i_1] [i_1] [i_4] [i_0] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 3] [i_5 + 1] [i_4]))) - (var_8))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) var_6)), ((unsigned short)8192))), (var_4))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_2 [i_3] [i_6])))) ^ (((((/* implicit */_Bool) 3623801450U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_13))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_12 [i_0] [i_1])));
                    arr_22 [i_0] [i_1] [i_1] [i_3] [i_3] = ((unsigned char) arr_0 [i_0]);
                    arr_23 [i_0] [i_0] [i_0] [i_3] [i_6] [i_6] = ((/* implicit */int) var_8);
                }
            }
        }
        var_20 = ((arr_12 [i_0] [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : ((-2147483647 - 1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) : (arr_15 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((_Bool) (+(min((((/* implicit */long long int) 127342780U)), (-7022632293482923904LL))))));
                        var_22 *= ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
        var_24 = ((/* implicit */int) arr_27 [i_10] [i_10] [i_10]);
        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((14763923688756031LL) - (((/* implicit */long long int) arr_3 [i_10] [i_10] [i_10])))), (((/* implicit */long long int) min((var_9), (((/* implicit */int) (short)14677)))))))) ? (min((((/* implicit */long long int) ((var_0) + (((/* implicit */int) arr_0 [i_10]))))), (var_10))) : (((/* implicit */long long int) (+(2147483647))))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            var_26 = ((/* implicit */long long int) (+(2147483647)));
            var_27 = ((/* implicit */unsigned char) (short)-14677);
        }
        arr_39 [i_11] = ((((/* implicit */_Bool) arr_20 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)57339)) : (((/* implicit */int) arr_20 [i_11] [i_11] [i_11] [i_11])));
        var_28 += ((/* implicit */short) ((((/* implicit */int) arr_31 [i_11])) + (((/* implicit */int) (unsigned char)0))));
    }
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) << (((((/* implicit */int) min(((unsigned short)57344), (((/* implicit */unsigned short) (short)-13946))))) - (51582))))))));
}
