/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64093
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
    for (signed char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)27293)) != (((/* implicit */int) (unsigned char)52)))));
        var_16 *= ((/* implicit */long long int) ((((((unsigned long long int) (unsigned char)190)) / (((/* implicit */unsigned long long int) min((arr_2 [(unsigned char)9]), (((/* implicit */long long int) var_2))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))))));
        var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))) != (1383856817U)))), (arr_2 [i_0])));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_10 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)12))));
            var_18 = ((/* implicit */_Bool) ((signed char) arr_6 [4U] [i_1 - 2]));
        }
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned long long int) arr_11 [i_3]);
            var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned short)29674)) : (((/* implicit */int) (unsigned char)156))))) ? ((-(min((arr_5 [i_1] [i_3]), (((/* implicit */long long int) arr_7 [i_3])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */long long int) var_8)) : (arr_5 [i_1] [i_3])))) ? (arr_11 [i_1 + 1]) : (max((((/* implicit */long long int) arr_6 [i_1] [i_1 - 1])), (arr_5 [i_1 + 1] [i_3])))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_1] [i_3]))));
                    var_22 *= 8534835024711008073ULL;
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)29804)) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1 - 1])))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((12978080787258390215ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35861)))))));
                    arr_19 [i_1] [i_1] [i_4] = ((/* implicit */long long int) arr_6 [i_5] [i_1 - 2]);
                }
                arr_20 [i_1] [i_1 + 2] [i_1] [i_1] = ((/* implicit */int) arr_9 [i_1 + 2]);
                var_25 = ((/* implicit */int) arr_15 [i_3] [i_3] [(unsigned char)10] [i_4] [i_3]);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9911909048998543525ULL)) ? (var_11) : (((/* implicit */long long int) 254305743U))))) ? (((/* implicit */long long int) (-(-2013661669)))) : (arr_11 [i_1 - 2])));
                    arr_26 [19LL] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) -2013661651);
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_4 [i_1] [i_1]))));
                    var_28 = arr_23 [i_7] [i_6 + 1] [i_7] [i_6 + 1];
                }
                var_29 = ((arr_17 [i_3] [i_3] [i_3] [i_3]) >> (((12150802911848877752ULL) - (12150802911848877750ULL))));
            }
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            arr_30 [i_1] [i_1] = ((/* implicit */long long int) ((2553914649076115013LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))));
            var_30 = ((/* implicit */long long int) (-(11050656850218383305ULL)));
        }
        var_31 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (~(arr_8 [(signed char)11] [i_1])))))));
    }
    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
    {
        var_32 = ((/* implicit */_Bool) arr_16 [i_9] [i_9]);
        var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_9])))))))), (max((((((/* implicit */_Bool) 17396310518981923819ULL)) ? (((/* implicit */unsigned long long int) arr_11 [i_9])) : (9911909048998543525ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_9])) * (((/* implicit */int) arr_15 [i_9] [i_9] [(short)20] [i_9] [i_9])))))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 19; i_10 += 4) 
    {
        arr_37 [2ULL] = ((/* implicit */unsigned long long int) (-(arr_24 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) ((arr_15 [i_10] [i_10] [i_12] [i_10] [i_12]) ? (926736446) : (((/* implicit */int) arr_15 [i_10] [i_10 - 1] [i_10 - 2] [i_10] [i_10]))));
                    arr_43 [(unsigned short)2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_12] [i_11]))) & (5160397001906594854ULL)))) ? (((((/* implicit */_Bool) 5160397001906594854ULL)) ? (13286347071802956750ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2553914649076115013LL))))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */short) var_8);
    var_36 += ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_53 [i_16] [i_13] [i_14] [i_13] [i_13] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) : (-4888011338168024228LL))) == (((/* implicit */long long int) -247303349))));
                            arr_54 [i_13] [i_14] [i_13] = ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13] [(unsigned short)16] [i_13]))) >= (11457740974292756155ULL))) ? (((/* implicit */unsigned long long int) -2553914649076115013LL)) : (min((((/* implicit */unsigned long long int) arr_46 [i_14] [i_14])), (arr_9 [i_16]))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 13286347071802956750ULL)) ? (arr_50 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (arr_8 [18LL] [(unsigned short)0]))))));
                        }
                    } 
                } 
                var_37 = max((13286347071802956761ULL), (((/* implicit */unsigned long long int) 2952819000U)));
            }
        } 
    } 
}
