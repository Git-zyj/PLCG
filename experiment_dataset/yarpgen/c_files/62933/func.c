/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62933
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
    var_10 = ((/* implicit */long long int) ((var_6) << ((((-(-4621013937482658348LL))) - (4621013937482658308LL)))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_0))) : ((~(6216879242063809255LL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    var_12 = max((max((((/* implicit */unsigned short) (!((_Bool)1)))), (((unsigned short) var_7)))), (((/* implicit */unsigned short) ((var_1) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)124)) >> (((-6216879242063809251LL) + (6216879242063809268LL))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((var_7) ? (-1356218914988712121LL) : (var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((-6216879242063809256LL) % (((/* implicit */long long int) 3045264007U))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((((/* implicit */long long int) var_8)) - ((+(var_2))))) * (((/* implicit */long long int) ((/* implicit */int) ((((6216879242063809258LL) * (((/* implicit */long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4621013937482658370LL)) || (((/* implicit */_Bool) 701581016U)))))))))))))));
                                var_15 = -6216879242063809252LL;
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (((+(max((var_1), (-6216879242063809270LL))))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (-6216879242063809278LL)))));
                                arr_13 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 6216879242063809280LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_8 [i_3] [(unsigned short)0])))))), (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48990))) : (((((/* implicit */_Bool) -1085427548)) ? (((/* implicit */unsigned long long int) 4455579436422911171LL)) : (1455886954553173214ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */int) (+(((arr_11 [(unsigned char)11] [i_1] [i_1] [i_1] [5LL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6 + 1] [i_0])))))));
                            var_17 -= ((/* implicit */long long int) var_3);
                            var_18 *= ((/* implicit */unsigned int) var_1);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2]))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5])) ? (arr_8 [i_0] [i_0]) : (var_8)))));
                            arr_24 [i_8] [i_5] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned short) -6216879242063809270LL);
                        }
                        var_20 = ((arr_1 [i_0 + 1]) & (((/* implicit */long long int) arr_18 [i_0] [i_1 - 2] [i_5] [i_1 - 1])));
                        var_21 -= (+((-(((/* implicit */int) arr_5 [i_5])))));
                        arr_25 [i_6] [i_5] [i_5] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) -1302002320)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_5]))) | (arr_17 [i_0] [i_0 + 1] [(unsigned short)8] [i_0 - 1] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)17)) ? (-6216879242063809272LL) : (arr_17 [i_1] [7] [2U] [i_5] [i_5])))));
                        arr_26 [i_0] [i_1 - 1] [i_0 - 1] [i_5] [3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_5])))) != (arr_7 [i_0 - 1])));
                    }
                    arr_27 [i_0] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) var_8)), (max((max((-915555747162896387LL), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (+(arr_7 [i_9])));
                                var_23 ^= ((/* implicit */_Bool) (~(((arr_3 [i_1 - 2] [i_1]) & (arr_3 [i_1 + 1] [i_1])))));
                                var_24 = ((/* implicit */unsigned char) max((9007190664806400ULL), (((/* implicit */unsigned long long int) ((1447637453) >> (((((((/* implicit */unsigned long long int) -5425126465761525316LL)) ^ (arr_11 [i_5] [i_1] [i_5] [i_0] [i_0]))) - (17096505994957324516ULL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1731595826541160444LL) != (((/* implicit */long long int) ((/* implicit */int) ((15061826523906001927ULL) < (3442407218442058526ULL)))))))) | ((-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)199))))))));
                        var_25 += ((/* implicit */unsigned long long int) ((((int) arr_11 [i_11 - 1] [i_5] [i_1 + 1] [i_1 - 1] [i_0])) << (((((((/* implicit */_Bool) arr_36 [i_1 + 1] [i_0 - 1] [i_11 - 1] [i_0])) ? (6216879242063809255LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1 - 1] [i_0 + 1] [i_11 - 1] [i_1]))))) - (6216879242063809253LL)))));
                    }
                    for (long long int i_12 = 3; i_12 < 10; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(3384917549803549688ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32766)))))))) >> ((((-(arr_4 [i_0 - 1]))) - (3144828531U)))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_28 [i_1])), (arr_41 [i_0 + 1] [i_1 + 1]))))));
                        var_28 = (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) > (1152886320234758144LL)))));
                    }
                }
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (3384917549803549670ULL) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32073))))), (((((/* implicit */_Bool) 1228368352)) ? (15004336855267493083ULL) : (((/* implicit */unsigned long long int) arr_41 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) var_7);
}
