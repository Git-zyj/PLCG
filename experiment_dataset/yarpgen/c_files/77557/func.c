/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77557
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) arr_0 [i_0 - 2]);
        var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6)))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])) ^ (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9220224122486780224LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_2 [i_1])));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_18 = (+(arr_2 [i_2]));
            var_19 = var_2;
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_20 -= ((/* implicit */unsigned char) -2526966932633332115LL);
                arr_9 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_3]))));
            }
        }
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) var_11);
            var_22 = ((/* implicit */unsigned short) (~(var_9)));
        }
    }
    var_23 = ((/* implicit */int) min((((/* implicit */long long int) var_2)), (var_8)));
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_15 [11LL] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (arr_10 [(unsigned short)12] [i_5] [i_5]) : (var_3)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_18 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49477)) + (((/* implicit */int) (unsigned char)192))));
            arr_19 [(unsigned short)7] [i_5] [8ULL] = (~(((((/* implicit */_Bool) 140737486258176LL)) ? (524307371U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))))));
            var_24 += ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (unsigned char)22)), (arr_11 [i_6] [i_5]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)192))))));
            arr_20 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) max((18278594412512128554ULL), (((/* implicit */unsigned long long int) -8654620203448529393LL))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            arr_30 [3U] [i_9] [i_9] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) var_0)) - (arr_29 [i_5] [i_7] [i_8 + 3] [i_9] [7ULL]))), (((/* implicit */long long int) ((unsigned char) var_1)))));
                            arr_31 [i_5] [i_5] [i_5] [i_9] [10LL] = ((/* implicit */unsigned char) var_12);
                            var_25 = ((/* implicit */long long int) (!(((((/* implicit */long long int) var_12)) >= (arr_4 [i_8 + 3] [i_8 + 4])))));
                            var_26 -= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) 403444189U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) > (((/* implicit */long long int) ((/* implicit */int) ((((int) var_12)) > (((/* implicit */int) (unsigned char)22))))))));
                        }
                        var_27 = ((/* implicit */unsigned short) arr_24 [2LL]);
                        arr_32 [i_9] [i_5] [i_8 + 3] [0] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_6))) ? (((/* implicit */int) ((unsigned short) (~(4876295398668012478LL))))) : (((/* implicit */int) ((unsigned char) max((5059190683823102856LL), (-2526966932633332121LL)))))));
                    }
                } 
            } 
            arr_33 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) max((var_8), (((/* implicit */long long int) (unsigned char)191))))))));
            var_28 = ((/* implicit */unsigned int) 4218241440019879237LL);
            arr_34 [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) arr_29 [i_5] [i_5] [i_5] [5ULL] [i_7]);
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        var_29 = ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) arr_35 [i_11])) : (((/* implicit */int) arr_35 [i_11])));
        arr_37 [i_11] = ((/* implicit */unsigned char) (~(var_10)));
    }
    for (int i_12 = 2; i_12 < 12; i_12 += 3) 
    {
        var_30 = ((/* implicit */long long int) var_10);
        arr_41 [i_12] = ((/* implicit */unsigned int) (+((+((-(((/* implicit */int) (unsigned char)74))))))));
    }
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
    {
        for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            for (unsigned int i_15 = 1; i_15 < 11; i_15 += 1) 
            {
                {
                    arr_51 [i_13] [i_13] [i_14] [i_15 - 1] = ((/* implicit */unsigned short) 2526966932633332092LL);
                    arr_52 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1402877360035083397ULL)) ? (((/* implicit */long long int) (+((-(((/* implicit */int) arr_45 [i_13] [i_13]))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_28 [i_15 + 1] [i_15 + 2])) : (arr_36 [i_15 + 1] [i_13])))));
                }
            } 
        } 
    } 
}
