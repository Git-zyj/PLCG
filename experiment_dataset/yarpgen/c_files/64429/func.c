/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64429
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 3723975473094959554ULL)))), (((((/* implicit */int) ((unsigned char) (signed char)0))) < ((+(206802440)))))));
        var_17 = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) (-(((/* implicit */int) min(((unsigned char)144), (((/* implicit */unsigned char) (_Bool)0)))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (_Bool)0))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (arr_0 [9]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_20 &= ((/* implicit */unsigned long long int) (signed char)-1);
                    var_21 = ((/* implicit */int) (signed char)4);
                }
                for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_22 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [(unsigned char)2]);
                    var_23 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1])) || (((/* implicit */_Bool) 1583992392796829276LL))))));
                }
                arr_13 [11] [i_1] [i_1] [2LL] = ((/* implicit */signed char) ((int) arr_2 [i_0]));
            }
            var_24 = ((/* implicit */unsigned char) min((((10206433665307259486ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((unsigned char) 1583992392796829277LL)))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            arr_23 [i_6] = ((/* implicit */signed char) max((((/* implicit */int) var_10)), (-206802440)));
                            var_25 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 119195162)), (((unsigned int) var_2))));
                            var_26 += min((((/* implicit */unsigned long long int) min((arr_8 [i_0] [(short)8] [i_6] [i_7]), (((/* implicit */short) arr_11 [i_0] [i_0] [i_0]))))), (min((((((/* implicit */unsigned long long int) 1373494131U)) / (arr_0 [0LL]))), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_6] [i_7])))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((max((arr_21 [i_0] [i_1] [i_5] [(unsigned char)4] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_7])))) >> (((((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned char)112)))) + (172))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)60))))))));
                        }
                        var_28 = ((/* implicit */int) 12321872988143050302ULL);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_6])) << (((((/* implicit */int) (unsigned short)34250)) - (34233)))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) 1373494132U))));
                            var_31 = ((/* implicit */short) arr_9 [(unsigned short)13] [i_1] [i_5] [i_6]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)144))));
                            arr_28 [i_0] [i_5] [i_5] [(signed char)10] [i_6] = ((/* implicit */int) 0LL);
                            var_33 = arr_4 [(unsigned char)9] [(unsigned char)9];
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [11LL] [i_1] [(unsigned short)0] [(unsigned short)4] [(signed char)10] [i_6] = ((/* implicit */unsigned char) (_Bool)0);
                            arr_34 [i_10] [8] [i_6] [i_1] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) (short)3968);
                            var_34 = ((/* implicit */unsigned short) 9107238394245945225LL);
                        }
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */short) min((((/* implicit */int) var_12)), (((((min((((/* implicit */int) var_15)), (-206802438))) + (2147483647))) << (((((/* implicit */int) var_10)) - (1)))))));
                            var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) arr_24 [6] [6] [i_1]))))) - (min((arr_12 [(signed char)12] [(signed char)12]), (((/* implicit */unsigned long long int) 206802448))))))) || (((arr_12 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_5] [i_6] [i_11])))))));
                            var_37 = ((/* implicit */long long int) ((unsigned short) 16811572502038893712ULL));
                        }
                        var_38 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)12]))))));
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */unsigned short) (unsigned char)97);
    }
    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        arr_39 [i_12] [(_Bool)1] = arr_38 [i_12];
        var_40 = ((/* implicit */unsigned int) arr_38 [i_12]);
    }
    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) var_3))));
}
