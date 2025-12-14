/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68624
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((arr_3 [i_0 - 2]) > (arr_3 [i_1]))) ? (((((min((arr_3 [i_0]), (((/* implicit */int) arr_0 [19])))) + (2147483647))) << (((arr_1 [i_0 - 1] [i_0 - 2]) - (13613568567863412205ULL))))) : (max((((int) arr_4 [i_0] [i_0] [i_1])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [(short)1]) : (arr_2 [(signed char)18]))))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 134217727)) || (((/* implicit */_Bool) -134217716))));
            var_19 = ((/* implicit */unsigned char) ((max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) max((134217739), (((/* implicit */int) (short)-22217))))))) ^ (((/* implicit */unsigned long long int) max((134217727), (-134217728))))));
        }
        for (int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-22237))))) ? (((134217727) & (((/* implicit */int) (short)-22194)))) : (((-134217702) % (((/* implicit */int) (short)-22217)))))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)13] [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_4 + 1])) : (arr_2 [i_0])))) || (((((/* implicit */unsigned int) arr_12 [5] [i_2 - 1])) != (arr_6 [i_3] [i_3])))))))));
                    }
                } 
            } 
            arr_13 [i_0 - 1] [i_2] = ((/* implicit */short) ((int) ((((/* implicit */int) (short)-22199)) % (4194303))));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    var_22 *= ((/* implicit */short) ((((long long int) (~(((/* implicit */int) (short)22216))))) - (((/* implicit */long long int) ((((((/* implicit */int) (short)-22208)) + (2147483647))) << (((((/* implicit */int) (unsigned char)158)) - (158))))))));
                    arr_20 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_0 - 2])) || (((/* implicit */_Bool) ((unsigned int) arr_11 [i_6] [i_6] [i_0] [i_6])))))), (arr_19 [i_6])));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_2 [i_0 + 1]) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 26U)) && (((/* implicit */_Bool) 1028031749))))) - (1)))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)1)), ((short)-22217)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)81))))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((/* implicit */int) (unsigned char)70)), (((int) 134217727)))))));
        var_25 = ((/* implicit */int) max((var_25), (((((int) arr_14 [i_0 + 1])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 - 2])) || (((/* implicit */_Bool) arr_14 [i_0 - 2])))))))));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_8 = 1; i_8 < 13; i_8 += 4) 
        {
            arr_27 [i_7] [i_8] [1U] |= ((/* implicit */int) arr_21 [0LL]);
            arr_28 [i_8 + 1] [i_7] [i_7] = ((/* implicit */int) ((unsigned int) min((min((arr_22 [1]), (((/* implicit */unsigned int) arr_11 [i_7] [8] [i_8] [8])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32766)) && (((/* implicit */_Bool) -600404628))))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
        {
            arr_32 [i_9] [0U] = ((/* implicit */short) (+(384179609)));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    {
                        var_26 -= ((/* implicit */_Bool) ((short) arr_37 [i_7] [i_7] [i_7] [i_7] [(unsigned short)1]));
                        var_27 = ((/* implicit */short) arr_25 [i_11] [i_11] [i_11]);
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
        {
            arr_43 [i_7] [i_12] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)-18532)) ? (((/* implicit */int) (unsigned char)37)) : (((((/* implicit */int) (unsigned short)65052)) / (((/* implicit */int) (unsigned short)13)))))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 2; i_13 < 13; i_13 += 4) 
            {
                arr_48 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [7] [i_13] [i_13 + 1]))) | (min((arr_18 [i_7] [3] [i_7]), (((/* implicit */long long int) arr_47 [i_7] [i_12] [(short)7] [i_7]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_7 [i_7] [11] [(unsigned short)11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_12])))))))) : (((((arr_31 [i_7] [i_7] [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [5U]))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0)))))))));
                arr_49 [i_12] [i_12] = ((short) ((arr_31 [i_13 - 1] [i_13 - 2] [i_13 - 1]) == (arr_31 [i_13 - 2] [i_13 - 2] [i_13 + 1])));
                var_28 = ((/* implicit */unsigned short) ((((_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)65062))) : (arr_1 [i_7] [i_12])));
            }
            arr_50 [i_7] = ((/* implicit */short) arr_31 [i_12] [i_12] [i_12]);
        }
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
        {
            var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_40 [i_7] [i_7]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_7] [i_14] [i_7]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_47 [i_7] [i_7] [i_7] [i_7])), (arr_14 [18U]))))));
            var_30 = ((((/* implicit */int) (unsigned short)483)) & (((/* implicit */int) (_Bool)1)));
        }
        var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-43758400)))) || (((/* implicit */_Bool) ((((arr_21 [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7] [i_7]))))))));
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        arr_56 [i_15] = ((/* implicit */unsigned char) ((int) ((((((/* implicit */int) arr_54 [i_15])) + (arr_55 [i_15]))) << (((((((/* implicit */int) arr_54 [i_15])) + (27077))) - (3))))));
        arr_57 [i_15] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)81)) != (-1682862019)));
    }
    var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
