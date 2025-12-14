/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99408
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_14 = (unsigned short)35735;
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) > (arr_0 [i_0] [i_0])));
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-21313)) ? (((/* implicit */int) (short)-21313)) : (((/* implicit */int) (unsigned short)21664)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1)))));
                    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_5 [i_0 + 1])) * ((-(((/* implicit */int) (unsigned short)43871))))))));
                }
                for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    arr_15 [i_3] [i_0] [i_0] = ((/* implicit */short) max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)21339)))))));
                    arr_16 [i_0 - 1] [i_2] [i_3] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_13 [i_0] [i_5 - 2] [i_3])), (var_13)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2]))))))) : ((~(((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43871))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 6ULL)))));
                        var_19 = ((/* implicit */unsigned short) arr_0 [i_0 - 3] [i_0]);
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0 - 2]))))), (max((((/* implicit */unsigned short) var_2)), (arr_5 [i_0 + 1])))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_2] [i_5] [i_5] [i_2])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [(unsigned short)16] [i_7])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) - (6917529027641081856ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0 - 1] [i_7] [i_0])) <= (((/* implicit */int) max((arr_5 [i_0]), (var_12))))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)21643))))) & (((((/* implicit */_Bool) (unsigned short)4441)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [(unsigned short)3] [i_0]), (arr_0 [i_0] [i_0])))) && (((((/* implicit */_Bool) arr_0 [(unsigned short)12] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
                            var_26 -= ((/* implicit */short) (+(((((/* implicit */int) (unsigned short)9656)) + (((/* implicit */int) arr_25 [i_0 - 2]))))));
                            arr_27 [(unsigned short)2] [i_2] [i_0] [i_8] [i_9] = ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)55889)) ? (((/* implicit */int) (short)-23848)) : (((/* implicit */int) (short)-22397))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5)))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)42781), (((/* implicit */unsigned short) (short)-8514)))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65509))) : (10ULL))) < (9ULL)));
                            arr_36 [i_12] [i_12] [i_12] [i_12] [i_12] |= ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 - 3] [i_2] [i_10] [i_11 + 2] [i_11 - 1] [i_11]))) + (14916208848706525133ULL)))));
                        }
                    } 
                } 
                arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2] [i_10])), (var_9)))) ? (((/* implicit */int) (unsigned short)57781)) : ((~(((/* implicit */int) var_10))))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_9)));
            }
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) (short)-21313);
                arr_40 [i_0] [i_2] = ((/* implicit */unsigned short) (~(((((((/* implicit */int) (short)-4109)) > (((/* implicit */int) var_11)))) ? (((/* implicit */int) (unsigned short)2054)) : (((/* implicit */int) max(((short)-21314), (var_11))))))));
            }
            var_30 = var_7;
            var_31 = ((/* implicit */unsigned long long int) ((short) (~(max((((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_2])), (arr_24 [i_0] [i_0] [i_2] [i_0] [4ULL] [i_2]))))));
            arr_41 [7ULL] [i_0] = ((/* implicit */short) (unsigned short)43887);
            var_32 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-5523))))));
        }
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)6084))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? ((+(((/* implicit */int) (unsigned short)38025)))) : (((/* implicit */int) arr_25 [i_0 - 1])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)21329)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [(unsigned short)2])))))))));
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (var_5))), (((((unsigned long long int) var_12)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
}
