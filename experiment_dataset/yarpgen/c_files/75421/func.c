/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75421
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
    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (((unsigned char) (unsigned char)249)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) (+(((unsigned int) min((((/* implicit */unsigned long long int) var_6)), (var_1))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((-2087374634), (((/* implicit */int) (unsigned short)36363)))), (-2087374634)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (((unsigned short) var_0)))))) : (max((max((((/* implicit */unsigned long long int) 2087374633)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)-27736))))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_4 [i_1] = arr_2 [i_1 + 2] [i_1];
        var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >> ((((-(arr_2 [i_1] [i_1 - 2]))) + (1812833995)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [(unsigned char)16])))))));
                        arr_12 [i_1] [i_2] [i_3 - 1] [i_3] [i_2] = ((/* implicit */unsigned short) var_8);
                        arr_13 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1] [(unsigned short)10] [i_3 - 1] [i_4]))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                    }
                } 
            } 
            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */int) arr_10 [i_2] [i_1 - 2] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) ((arr_2 [i_1] [i_2]) == (((/* implicit */int) var_4)))))));
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) var_11);
            arr_16 [i_1] [i_2] [i_2] = ((/* implicit */int) var_8);
        }
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) 1936831017593768383LL);
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) arr_8 [i_5])) ? (arr_17 [i_1] [i_5] [i_5]) : (((/* implicit */long long int) var_2)))))))));
                arr_21 [i_1] [i_5] [i_6] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_5 - 1])) ? (((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_5 + 1])) : (var_6)));
            }
            for (short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                arr_25 [i_1] [i_5] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_20 [i_1] [i_5] [13]));
                arr_26 [i_7] = ((/* implicit */unsigned char) ((arr_9 [i_7] [12ULL] [i_5 - 1] [i_5] [i_7] [i_7]) - (arr_19 [i_1 - 3])));
                arr_27 [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) ((arr_9 [i_7] [i_1 - 3] [i_7] [i_5 - 1] [i_5] [i_1]) == (arr_9 [i_7] [i_1 - 2] [i_7] [i_5 + 1] [i_7] [i_1])));
            }
            for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                var_19 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) var_7)))));
                var_20 = ((/* implicit */short) ((arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1]) > (arr_20 [i_8 + 1] [i_8] [i_8])));
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    arr_35 [i_5] [i_5] [i_8] [i_8] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) var_11)) - (arr_11 [i_8] [i_8] [i_8 - 1] [i_8])))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), ((~(var_10)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_5 + 1])) ? (arr_2 [i_1 - 3] [i_5 - 1]) : (arr_2 [i_1 + 2] [i_5 + 1])));
                        var_23 = ((/* implicit */long long int) var_4);
                        var_24 = ((/* implicit */unsigned int) ((unsigned char) arr_37 [i_5 - 1] [i_8]));
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_8] [i_5 + 1] [i_8])) * (((/* implicit */int) arr_6 [i_8] [i_5 + 1] [i_8]))));
                    }
                }
                for (unsigned char i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    arr_42 [i_8] [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) % (arr_9 [i_8] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((var_11) / (arr_19 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8] [i_5 - 1] [i_8])))));
                    var_25 = ((/* implicit */unsigned char) arr_8 [i_5 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_45 [i_1] [i_5] [i_8] [i_11] [1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 585481615985375078LL)) - (18446744073709551615ULL)));
                        arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] [5] = ((arr_41 [i_1] [i_5 + 1] [i_1] [i_11] [i_12]) ? ((+(((/* implicit */int) var_3)))) : (2147483647));
                    }
                    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_1 - 1] [i_5 + 1] [i_8 - 1]))));
                }
                var_27 = ((short) (unsigned char)166);
            }
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [16LL] [i_1] [16LL] [16LL]))))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            arr_50 [i_13] [i_1 + 2] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)210)))) ^ (((/* implicit */int) arr_33 [i_1 - 3] [20ULL] [i_1] [i_1 + 1] [i_1 + 1] [20ULL]))));
            var_29 = ((/* implicit */long long int) arr_22 [i_1 - 3]);
            arr_51 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_19 [i_1]) - (((/* implicit */long long int) var_6))))) ? (arr_48 [i_1 + 2] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)40570))))));
        }
        arr_52 [i_1] = ((/* implicit */unsigned int) (-(-3195920671043769084LL)));
    }
    var_30 = ((/* implicit */unsigned short) (((-(var_11))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_11))))))))));
}
