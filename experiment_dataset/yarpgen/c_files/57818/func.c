/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57818
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
    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7)));
    var_13 ^= ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */unsigned int) ((short) ((var_7) * (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_1))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_10);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_0)) - (55761)))))) ? (max((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned short) var_2))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_5) : (((/* implicit */long long int) 830195147))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (var_9))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (arr_3 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */int) var_0))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20180)) ? (((((/* implicit */_Bool) -1718916251527795893LL)) ? (((/* implicit */int) (signed char)-1)) : (-648073763))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)54449)) != (((/* implicit */int) (unsigned short)65535)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((arr_10 [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_18 &= ((/* implicit */unsigned int) var_4);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [11U]))))));
                        var_20 += arr_15 [i_5 - 1] [i_4 - 1];
                        arr_20 [i_5] [i_4] [i_4] [(unsigned short)13] [i_4] [3] = ((/* implicit */unsigned short) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (arr_3 [i_4])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [(unsigned short)9] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_6])) ? (((/* implicit */int) arr_14 [12LL] [i_6])) : (arr_21 [i_2] [i_2])));
            var_21 *= ((/* implicit */_Bool) var_5);
        }
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            arr_27 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2] [(short)12])) ? (arr_26 [i_2] [i_7]) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_16 [(unsigned char)12] [(short)12] [6U] [i_7])))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_9 - 2] [(short)1] [i_9 - 1] [i_2])) | (((/* implicit */int) arr_28 [i_9 - 1] [i_9] [i_9 - 2] [i_2]))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_30 [i_2] [i_2] [i_2] [i_2])) : (var_9)));
                        var_24 = ((/* implicit */int) var_3);
                        arr_34 [13] [(signed char)4] [i_8] [i_9 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [(short)5] [i_7] [8LL] [i_9 - 1])) >= (arr_30 [i_2] [i_2] [(short)16] [i_7])));
                        arr_35 [i_2] [i_7] [i_8] [i_9 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_2] [i_7] [i_7] [i_9] [i_9 + 1])) & (((/* implicit */int) arr_1 [i_8]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 4; i_11 < 17; i_11 += 4) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) var_0);
                        var_26 = ((/* implicit */unsigned short) ((arr_2 [i_11 - 4]) <= (arr_2 [i_11 - 4])));
                    }
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_27 = ((/* implicit */long long int) var_8);
            arr_45 [i_12] [i_2] [(unsigned char)4] = ((/* implicit */short) var_11);
        }
    }
}
