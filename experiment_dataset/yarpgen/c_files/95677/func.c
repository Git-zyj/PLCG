/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95677
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) 1445906249U)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)30307)) ? (((/* implicit */int) (short)-30305)) : (((/* implicit */int) var_6))));
        var_17 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ^ (((((/* implicit */unsigned long long int) -1LL)) & (arr_0 [i_0] [i_0]))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (var_4)))) ? (min((((/* implicit */unsigned long long int) 2849061048U)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-27078)) + (2147483647))) >> (((-1LL) + (31LL)))))) && (((/* implicit */_Bool) min((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_9)))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((-(arr_1 [i_1]))) / (min((((/* implicit */int) var_0)), (arr_1 [i_1]))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 12; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1819595750)) ? (arr_9 [4] [i_2] [i_5] [i_4 - 2]) : (arr_9 [(unsigned short)12] [i_2] [(unsigned short)12] [i_4 + 2])))) ? (arr_9 [(_Bool)1] [(_Bool)1] [i_3 - 1] [(_Bool)1]) : ((-(arr_9 [(_Bool)1] [i_4 + 2] [i_2] [(_Bool)1]))))))));
                            arr_15 [i_4] [i_2] [i_3] [i_4] [(short)8] [i_2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))) + (((/* implicit */int) var_11))));
                            var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_5]))))), (((/* implicit */long long int) var_9))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-30313))) * (0LL))) < (arr_9 [12] [i_3 - 3] [i_3 - 3] [i_3 - 3]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (int i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned char) ((((arr_5 [i_2] [i_6]) + (2147483647))) >> ((((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_9))))))) + (29)))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) < ((+(-3931118797174055231LL)))));
                            arr_23 [i_1] [i_2] [i_6] [i_7 + 1] [i_2] = min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (4201901841242727132LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3389)) || (((/* implicit */_Bool) -1LL)))))) : (arr_16 [i_7 + 1] [i_2] [i_6] [i_7]))), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1]))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */long long int) arr_21 [i_1] [i_1] [i_1] [i_2] [i_2]);
        }
        for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 3) 
        {
            arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)-30322);
            /* LoopNest 2 */
            for (unsigned short i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (arr_13 [i_9 + 1] [i_9] [i_10] [i_10] [i_10 + 1]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_9 - 1] [i_9] [i_10] [i_11] [i_10 - 2])))));
                        var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_13 [i_11] [i_11] [i_11] [i_11] [(short)6]) * (var_5)))))) : (arr_28 [i_1] [i_1])));
                        arr_34 [i_10] [i_9 - 1] [i_10] [i_11] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_4 [i_1] [i_1])))) ^ (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)25041)) && (((/* implicit */_Bool) var_15)))))))));
                        var_28 = ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_11 [i_1] [i_1] [i_1] [10U])), (arr_25 [i_1] [i_1])))) ? (((/* implicit */int) ((unsigned short) 6104668874921826266ULL))) : ((+(((/* implicit */int) var_3))))));
        arr_35 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
    }
    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 1) 
    {
        var_30 *= ((/* implicit */short) (unsigned short)38718);
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 8388607U)) ? (((arr_37 [i_12 + 2]) * (arr_36 [i_12 + 1]))) : (min((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-6748)), ((unsigned short)61039))))))));
    }
    var_32 = ((/* implicit */_Bool) max((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) var_6))));
}
