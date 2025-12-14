/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88323
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)1774)) - (var_6)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (_Bool)0))));
                        arr_15 [i_3] [i_1] [i_1] = ((((arr_0 [i_1] [i_1]) % (((/* implicit */unsigned long long int) -8547138883596817174LL)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (15373338944967298101ULL)));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_4] [i_4] = ((((/* implicit */_Bool) (-(3507823982303803041LL)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((short) (unsigned short)6162))));
            arr_19 [i_0] [i_4] [(unsigned char)12] = ((/* implicit */int) 12082389364813023085ULL);
            var_21 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_4] [i_0])) / (((/* implicit */int) (short)9824)))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(short)2])) : (arr_0 [i_0] [i_4])));
        }
    }
    var_23 = ((/* implicit */short) 2025237326);
    var_24 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_13)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    arr_30 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */long long int) (-(arr_12 [i_7] [i_6] [i_6] [i_5] [i_5] [i_5])));
                    arr_31 [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((1490136405U), (((/* implicit */unsigned int) (_Bool)1)))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_7])) << (((((/* implicit */int) arr_22 [i_6])) - (64456))))))))) && (((/* implicit */_Bool) ((unsigned short) ((int) 15373338944967298101ULL))))));
                    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (10429852496467831778ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_21 [i_5])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44183)))))))), (((((/* implicit */unsigned long long int) 8386560)) - (max((((/* implicit */unsigned long long int) arr_11 [(short)8] [i_6] [i_6] [(unsigned char)20] [i_5] [i_6])), (arr_0 [i_5] [i_5])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || ((!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_6])))))));
                        arr_34 [i_8] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (260046848U)))) ? (arr_12 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8] [i_5]) : (((int) var_0))))), (((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */unsigned long long int) min((3507823982303803041LL), (((/* implicit */long long int) (unsigned char)242))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (12082389364813023058ULL)))))));
                        arr_35 [i_8] [i_7] [(short)9] = ((/* implicit */unsigned int) arr_3 [i_8]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            arr_38 [i_8] = ((/* implicit */unsigned int) (+((~(((((/* implicit */int) arr_13 [(short)21] [i_6] [(unsigned short)15])) & (arr_3 [i_5])))))));
                            arr_39 [i_5] [i_8] [i_8] [i_8] [i_8] [i_5] [i_7] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (~(var_6)))), ((+(12821092416707068759ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_8] [i_5])))));
                            arr_40 [i_8] [i_9] = ((/* implicit */unsigned char) max(((~((+(((/* implicit */int) (unsigned char)55)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1150941732U)) ? (arr_0 [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_45 [i_8 + 1] [i_10] [i_7] [i_7] [i_10] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_10] [i_8] [i_8 - 1]) : (arr_4 [11ULL] [i_10] [i_8 - 1]))))));
                            arr_46 [i_8] [i_8] [i_7] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)14)), (8386560)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [i_7]))) : (var_17)));
                            arr_47 [i_8] [i_8] [i_8] [i_6] [4U] = ((/* implicit */short) arr_25 [(short)9] [i_7]);
                            var_27 = ((/* implicit */unsigned int) 16368);
                        }
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        arr_50 [i_5] [i_6] [i_6] [i_11] &= ((/* implicit */_Bool) (unsigned short)17660);
                        var_28 = ((/* implicit */int) (+(min((arr_33 [i_11] [i_11] [i_7]), (arr_33 [i_11] [i_7] [i_11])))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8386560)), (arr_21 [i_7])))))) ? ((-(((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned short)43167)))))) : (((/* implicit */int) arr_49 [i_5] [(short)11] [i_7] [i_12])))))));
                        var_30 = ((/* implicit */short) (-((~(((-1403946263) | (((/* implicit */int) (unsigned char)141))))))));
                        var_31 = (+((~(((/* implicit */int) (_Bool)1)))));
                        arr_54 [i_5] [i_6] [i_7] [i_12] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)222));
                    }
                    for (short i_13 = 1; i_13 < 11; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 4160438985U)) ? (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) : (4160438996U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) -1445482029)) == (7411954172387940747ULL))))))));
                        arr_57 [i_5] [i_13] [i_7] [i_13] = ((/* implicit */int) var_17);
                    }
                }
            } 
        } 
    } 
}
