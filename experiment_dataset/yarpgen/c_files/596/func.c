/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/596
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = (-((-(18318013103646731639ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 1728845673351539351ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_16 = 4095ULL;
        var_17 = ((unsigned long long int) 7527738134833827871ULL);
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2] = ((((/* implicit */_Bool) arr_6 [i_2])) ? (3690396487387588659ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709547520ULL)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)48))))));
        arr_10 [i_2] [i_2] = min((((unsigned long long int) arr_4 [i_2] [i_2])), (arr_4 [i_2] [i_2]));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(18446744073709547521ULL))))))));
                                var_19 += ((/* implicit */unsigned long long int) (+((~((~(((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5036981071117693490ULL)) ? (((unsigned long long int) 4089ULL)) : ((-(arr_6 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_21 = 17592186043392ULL;
                                arr_32 [i_3] [i_3] [i_7] [i_7] [i_3] = arr_25 [i_3] [(unsigned char)15] [i_3] [i_3] [i_3] [i_4 - 3] [i_7 + 2];
                                var_22 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_7] [i_7 + 1]))))), (((/* implicit */unsigned long long int) arr_31 [i_2] [i_2] [i_2] [i_7] [i_8])))), (arr_18 [i_8] [i_3] [i_3] [i_7 + 1])));
                                arr_33 [i_3] [i_3] [i_4] [i_7 - 2] [i_7] = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_7 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 4; i_10 < 18; i_10 += 3) 
            {
                {
                    var_23 -= ((((/* implicit */_Bool) (unsigned char)139)) ? (10021330152558653901ULL) : (4089ULL));
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_18 [i_2] [i_10 - 4] [i_10 + 1] [i_10 - 3])) ? (arr_18 [i_2] [i_10 - 1] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
                    var_25 -= 18446744073709547526ULL;
                }
            } 
        } 
    }
    var_26 = var_3;
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            {
                arr_44 [i_12] = (unsigned char)255;
                arr_45 [i_12] = ((unsigned char) ((((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_11] [i_11] [i_11])) ? (arr_38 [i_11]) : (arr_17 [i_11] [i_12] [i_11])));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            var_27 = ((3567330518669241687ULL) << (min((arr_25 [i_11] [i_11] [i_12] [i_12] [i_13] [i_14] [i_14]), (((/* implicit */unsigned long long int) (unsigned char)5)))));
                            arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((unsigned char) arr_40 [i_14]);
                            var_28 = ((/* implicit */unsigned long long int) var_11);
                            arr_53 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (unsigned char)55);
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            {
                arr_60 [i_16] = (-(1696986562132637504ULL));
                arr_61 [11ULL] = max((((unsigned char) 16043995733994589832ULL)), ((unsigned char)127));
                arr_62 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_16])) && (((/* implicit */_Bool) arr_38 [i_15]))))), (((((/* implicit */_Bool) arr_38 [i_16])) ? (arr_38 [i_15]) : (arr_38 [i_15])))));
            }
        } 
    } 
}
