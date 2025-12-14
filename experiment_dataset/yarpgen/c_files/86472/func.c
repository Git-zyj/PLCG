/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86472
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [4U] [4U] |= ((/* implicit */unsigned int) ((_Bool) -486503537));
        arr_3 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 8; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_17 -= ((((/* implicit */_Bool) (short)9596)) ? ((((~(arr_12 [i_1] [i_1]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(signed char)24])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [6U] [i_3] [i_3]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)13105)) ? (((/* implicit */int) (short)9596)) : (((/* implicit */int) (unsigned short)52434))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_12 [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((/* implicit */unsigned long long int) (-(486503540)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (7592011056457590874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [10] [10] [i_3]))))) : (((/* implicit */unsigned long long int) var_11))))))));
                }
                arr_16 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) * (((486503536) / (-486503537)))));
                arr_17 [i_1] = ((/* implicit */signed char) (-(((unsigned int) arr_0 [(short)12]))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -564780551)) * (1784970106U)))) ? (((((/* implicit */int) (unsigned char)14)) * (((/* implicit */int) var_0)))) : (((2069692351) / (((/* implicit */int) (short)9596)))))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                {
                    arr_25 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (((arr_23 [i_6] [i_7] [i_6] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) * (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 847051074)) ? (((/* implicit */int) (unsigned short)42981)) : (arr_21 [i_6] [i_6] [i_8])))) * (min((arr_20 [i_6] [i_6]), (arr_20 [i_8] [i_6])))))));
                    arr_26 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2069692351)) ? (max((486503549), (-486503549))) : (((/* implicit */int) (unsigned short)22548))))));
                    var_21 = ((/* implicit */short) ((unsigned int) -1500576394));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_18 [i_6] [i_7])))) ? (arr_23 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_8])) ? (-486503540) : (32767))))))) ? (((/* implicit */unsigned long long int) arr_29 [i_6] [i_7] [i_6] [i_6] [i_6] [i_7])) : (((arr_18 [i_6] [i_6]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */int) var_7)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            arr_33 [i_10] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_6] [i_7] [i_7])), (((unsigned long long int) arr_27 [i_6] [i_8] [i_8]))))) ? ((~(1681776309))) : (((/* implicit */int) arr_19 [i_7 + 2])));
                            arr_34 [i_10] [i_10] = ((/* implicit */short) ((int) (~(((arr_20 [i_7] [i_7]) * (arr_23 [i_10] [i_9] [i_8] [i_7]))))));
                            var_22 = ((/* implicit */signed char) ((_Bool) -1345395554469840714LL));
                            var_23 = ((/* implicit */unsigned int) ((_Bool) min((((((/* implicit */int) (unsigned short)22584)) / (486503540))), (((/* implicit */int) ((unsigned short) arr_24 [i_6] [i_6] [i_6] [i_6]))))));
                        }
                    }
                }
            } 
        } 
    } 
}
