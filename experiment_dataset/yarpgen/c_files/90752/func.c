/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90752
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
    var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) & (((/* implicit */int) (signed char)7))))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (unsigned char)77)) << (((((/* implicit */int) var_12)) - (588))))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_1))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_10))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) -486044621))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0 + 3] [i_2 + 1] [i_2 - 2])) / (((/* implicit */int) (unsigned char)200))));
                        arr_13 [(signed char)4] [i_1] [i_2] [i_2] [i_2] [(signed char)1] |= ((/* implicit */signed char) ((((486044621) > (((/* implicit */int) (signed char)-37)))) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) arr_6 [i_0 + 4] [i_2 + 1]))));
                        var_23 = ((/* implicit */unsigned int) arr_10 [i_3] [(unsigned char)16] [i_1] [(unsigned char)16] [i_0]);
                        var_24 = arr_9 [i_0 + 2];
                    }
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_25 *= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)77)), ((short)22858)))) * ((~(((/* implicit */int) arr_4 [i_4 - 2] [i_4 - 2]))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (155215834U)));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)6765)))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_2 + 1] [i_5])) ^ (-113372499))))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_12 [i_1 + 2] [i_6 + 2] [i_2 - 2])))), ((-(8176))))))));
                        var_30 *= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_4 [i_0] [i_1])) >> (((((/* implicit */_Bool) arr_2 [(short)6])) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2 + 1] [i_6])))))), (((/* implicit */int) arr_6 [i_2] [i_6]))));
                        var_31 -= (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)217)) & (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_17 [i_0])) : (arr_16 [i_0] [i_1] [i_2] [(unsigned short)19]))));
                        arr_21 [i_1] [i_1 - 1] [i_2] [i_0] |= ((/* implicit */short) min((((/* implicit */int) max((arr_1 [i_1 + 2]), (var_8)))), (((((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1])) * (((/* implicit */int) arr_1 [i_1 + 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_25 [i_0 - 3] [i_1] [i_7] [i_6] [(unsigned char)1] [i_6] [11U] &= ((/* implicit */unsigned char) (unsigned short)7128);
                            var_32 = arr_12 [i_2 + 1] [(unsigned char)14] [i_7];
                            var_33 -= ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_2] [i_7 + 2]);
                        }
                    }
                    var_34 = ((/* implicit */unsigned char) arr_16 [i_0] [(short)17] [i_0] [i_0]);
                    var_35 = ((/* implicit */unsigned char) (short)1407);
                }
            } 
        } 
    } 
}
