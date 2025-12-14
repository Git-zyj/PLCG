/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64851
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
    var_14 -= min((var_1), (((/* implicit */unsigned long long int) max((66846720), (((/* implicit */int) (short)-21405))))));
    var_15 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned long long int) var_3);
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [5ULL] [i_1]))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [i_1])));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)19)) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) arr_0 [i_3]);
                    arr_12 [9ULL] [9ULL] [(short)16] [(unsigned short)17] [i_0] = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (arr_10 [i_0] [i_3])))));
                    var_20 = ((/* implicit */unsigned char) ((arr_9 [i_0] [1U] [i_2] [6]) - (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
                var_21 = ((/* implicit */short) (+((+(((/* implicit */int) var_7))))));
                arr_13 [i_0] [i_1] [2LL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19074)) | (((/* implicit */int) (unsigned short)46461))))) ? (((/* implicit */int) var_10)) : (-2147483635)));
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) >= (var_5))) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0])))))));
            }
            for (short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -5738616048337090371LL))));
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)12] [i_0])) : (((/* implicit */int) ((5738616048337090370LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                var_24 = ((/* implicit */short) (unsigned short)46461);
                arr_17 [i_0] [i_1] [i_4] [i_0] = (+((~(((/* implicit */int) arr_2 [16])))));
            }
            for (int i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                arr_20 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)115))));
                var_25 = (unsigned short)64080;
                var_26 = ((/* implicit */unsigned long long int) (unsigned short)46483);
                arr_21 [i_5] [i_5] [i_1] [i_0] = ((((/* implicit */_Bool) arr_4 [i_5] [i_5 + 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_5] [i_5 - 1])));
            }
            var_27 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1]);
        }
        arr_22 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)20))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((arr_9 [8ULL] [i_0] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) var_5)))))))))));
        var_29 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((min((2410668783U), (((/* implicit */unsigned int) var_10)))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)38082)))))))) >= (((((/* implicit */_Bool) var_2)) ? (max((-3687494898699784449LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    }
    for (int i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        var_30 += ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (unsigned short)60)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) >= (((/* implicit */unsigned long long int) (+(max((var_8), (arr_23 [i_6]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (int i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                for (int i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) arr_19 [i_6 + 1] [i_7] [i_8] [i_9 + 2]);
                        arr_32 [i_6] [i_6] [(unsigned short)2] [i_8] [i_6] [17ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((4398045462528ULL), (((/* implicit */unsigned long long int) (unsigned short)1455))))) ? (((/* implicit */int) (short)14641)) : ((+(((/* implicit */int) max(((unsigned short)4), ((unsigned short)57344))))))));
                        var_32 = ((/* implicit */short) arr_25 [i_9 + 1] [(signed char)13]);
                        arr_33 [(short)5] [i_7] [i_7] [(short)5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_6] [i_7] [i_8] [i_9]))));
                        arr_34 [i_9 + 2] [i_6] [8ULL] [i_6] [i_6] = ((/* implicit */long long int) arr_29 [i_9 - 1] [i_8] [i_7] [i_6 + 2]);
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned long long int) (+(max(((-(((/* implicit */int) var_0)))), ((-(var_8)))))));
    var_34 = min((((/* implicit */unsigned int) 917691000)), (2935583112U));
}
