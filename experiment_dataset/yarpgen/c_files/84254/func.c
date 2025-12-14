/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84254
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
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_1] = ((/* implicit */int) min((max(((~(var_8))), (((/* implicit */long long int) (((_Bool)0) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) var_13))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [5] [i_3])) ? (((/* implicit */int) arr_2 [i_3 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_3 - 1])))))));
                        var_20 -= ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned long long int) 1023923434U)) : (9248069451068498580ULL));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_11 [i_4] [i_3] [3ULL] [(unsigned short)13] [i_1] [i_1] [i_0]))));
                            var_22 = ((/* implicit */signed char) var_8);
                        }
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)108)), ((unsigned short)6604)));
                            var_24 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_2 - 2])) ? (((/* implicit */unsigned long long int) var_1)) : (var_5)))) ? (14528445056179262130ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24353))) : (4300425008847843981LL)))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) * (((/* implicit */int) arr_8 [(_Bool)1] [i_2])))))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)1]))))) ? (var_4) : (((/* implicit */int) var_15)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_1])) % (((/* implicit */int) arr_1 [i_0])))) / (-529170263)));
                            var_26 *= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_1])), (9261960920852690654ULL))) << (((-8263431367575376175LL) + (8263431367575376234LL)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) (~(15758862369366768031ULL)));
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_0]))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_8] [i_8] [i_1] [i_1] [i_0] [i_0] [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                {
                    arr_28 [i_1] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_8])) / (-529170263)));
                    var_30 = (+(((((/* implicit */_Bool) arr_20 [i_0])) ? (9198674622641053031ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) arr_17 [i_0] [i_1])) : (((/* implicit */int) var_0))));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17)))) : (var_13)));
                }
            }
            var_33 -= min(((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) (!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)9] [i_0])) >= ((-(((/* implicit */int) var_18))))))));
            var_34 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))))));
            var_35 = var_0;
        }
        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (short i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_36 ^= ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_25 [i_13] [i_12 + 1] [i_11 - 1] [10ULL])) : (arr_37 [i_0] [i_11 - 1] [i_12] [i_13])));
                        var_37 -= ((/* implicit */unsigned long long int) arr_39 [i_0] [i_11] [i_12] [i_11]);
                        arr_40 [i_0] [i_0] [8U] [i_12] [i_0] [i_13] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_12 - 1] [i_12] [i_12 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_27 [i_12 - 1] [3U] [i_12 - 2] [i_11 - 1])) : (((/* implicit */int) (unsigned char)19)))));
                    }
                } 
            } 
            arr_41 [7LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned char)2] [i_0] [i_11] [i_11]))));
            arr_42 [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9261960920852690649ULL)) ? (24U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68)))))) == (var_3)));
            arr_43 [2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) 10794150648335603151ULL))), (634375070)));
            arr_44 [i_11] [i_11] [i_0] |= ((/* implicit */unsigned char) max((arr_14 [i_11 + 1] [(_Bool)0] [1U] [i_11 + 1] [i_11 + 1]), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_12 [i_0] [(unsigned char)2] [i_11] [i_11] [(unsigned char)2] [i_11])))), ((~(((/* implicit */int) (unsigned char)147)))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            arr_47 [i_0] = ((/* implicit */short) var_3);
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [0ULL]))) : (var_9))), (((/* implicit */unsigned long long int) arr_13 [i_14] [i_14] [i_0] [i_0] [(short)11])))), (((/* implicit */unsigned long long int) var_8)))))));
        }
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) arr_10 [i_0] [5ULL] [i_0] [6] [i_0] [i_0]))));
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned short) var_15)), (((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_0] [15] [i_0])) < (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) arr_20 [i_0])) : (max((arr_24 [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */int) var_10)) / (((/* implicit */int) var_10))))))));
    }
}
