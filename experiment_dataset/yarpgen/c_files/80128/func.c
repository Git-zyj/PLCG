/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80128
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
    var_17 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)13984))));
        var_19 = ((/* implicit */short) (~(((arr_1 [i_0 - 2] [i_0 - 2]) & (arr_0 [i_0 + 1] [i_0 + 1])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 &= ((/* implicit */short) arr_1 [i_0] [i_0]);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23756)) ? ((~(((/* implicit */int) (short)-19353)))) : (arr_0 [i_0] [i_0])));
                    var_22 = ((/* implicit */int) ((short) arr_5 [i_0 - 3] [i_0 - 2] [i_0 + 1]));
                }
            } 
        } 
        var_23 = ((/* implicit */short) arr_0 [i_0 - 3] [i_0 - 3]);
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            var_24 = ((max((-3624643419876088698LL), (((/* implicit */long long int) -1)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_3] [i_4])) < (arr_2 [i_3]))))));
            var_25 = ((/* implicit */unsigned short) 12LL);
            var_26 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (-1797615452865931618LL) : (((/* implicit */long long int) arr_10 [i_4]))))) ? (((((/* implicit */int) (unsigned short)23756)) / (((/* implicit */int) (unsigned short)23756)))) : (((/* implicit */int) (unsigned short)65472))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40949)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [i_3]))))) ? (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41804))) : (1797615452865931618LL))) : (max((arr_3 [i_3] [i_3] [i_3]), (((/* implicit */long long int) 2))))))));
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                for (int i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) (unsigned short)23756)))))), (((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_12 [i_3] [i_3]) : (((/* implicit */int) arr_6 [i_5])))) : (((/* implicit */int) arr_18 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3]))))));
                            var_28 = ((/* implicit */unsigned short) -14);
                            var_29 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_8 [i_4]))))));
                        }
                    } 
                } 
            } 
        }
        var_30 &= ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4876)) ? (((/* implicit */int) (unsigned short)23756)) : (((/* implicit */int) (unsigned short)61717))))) & (min((((/* implicit */long long int) 2)), (arr_3 [i_3] [i_3] [i_3]))))) ^ (((arr_5 [i_3] [i_3] [i_3]) ^ (((/* implicit */long long int) arr_1 [i_3] [i_3]))))));
        var_31 = (unsigned short)20119;
    }
    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_32 &= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -656402007)) || (((/* implicit */_Bool) arr_3 [i_8] [i_8] [i_8])))) && (((/* implicit */_Bool) -3)))) && (((/* implicit */_Bool) max((min((arr_1 [i_8] [i_8]), (((/* implicit */int) arr_21 [i_8])))), (((((/* implicit */int) (short)10998)) * (((/* implicit */int) (unsigned short)41776)))))))));
        var_33 = ((/* implicit */unsigned short) ((max((arr_3 [i_8] [i_8] [i_8]), (arr_3 [i_8] [i_8] [i_8]))) - (((/* implicit */long long int) ((int) -27)))));
    }
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            {
                var_34 *= ((/* implicit */unsigned short) arr_1 [i_9] [i_9]);
                /* LoopSeq 1 */
                for (long long int i_11 = 2; i_11 < 19; i_11 += 2) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_24 [i_11 - 1]))) | (((/* implicit */int) min(((short)-28911), (arr_24 [i_11 + 1]))))));
                    var_36 = ((/* implicit */long long int) arr_24 [i_9]);
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_11 + 1]))))) ? (max((((/* implicit */long long int) -1940291435)), (-1797615452865931603LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */int) (unsigned short)46559)) : (((/* implicit */int) arr_4 [i_9] [i_10] [i_11 - 1])))))))) ? (((((/* implicit */int) min(((unsigned short)23758), ((unsigned short)41774)))) >> (((arr_5 [i_11 - 1] [i_11 - 2] [i_11 + 1]) - (57118425767962704LL))))) : (((((/* implicit */int) ((unsigned short) (unsigned short)3))) & ((+(14)))))));
                }
                var_38 = ((/* implicit */short) ((((((14) / (((/* implicit */int) (unsigned short)26593)))) - (((/* implicit */int) max(((unsigned short)6), ((unsigned short)23760)))))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9] [i_9] [i_9]))) / (1797615452865931603LL)))) ? (0) : (-8)))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) 2860387021890739134LL)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_6))))));
    var_40 = var_7;
}
