/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70144
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
    var_13 = ((/* implicit */unsigned int) var_3);
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((!(var_1))) && ((_Bool)1)))), (max((min((((/* implicit */unsigned long long int) var_8)), (12144757574444102759ULL))), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_11);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_9 [i_0] = ((/* implicit */long long int) max((arr_8 [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) (((-(2080283593))) - ((((_Bool)1) ? (((/* implicit */int) (unsigned short)27393)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_16 *= ((/* implicit */_Bool) var_10);
                }
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) (_Bool)1);
                        var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) 1923957360715488011ULL)) ? (arr_10 [i_4] [i_3] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_17 [i_0] [6] [6ULL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_3]))), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50636))) : (min((min((4294967289U), (((/* implicit */unsigned int) 1084966122)))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        var_19 = ((/* implicit */_Bool) min((arr_2 [i_3] [i_5]), (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_20 &= ((/* implicit */unsigned short) min(((~((-(var_2))))), (((/* implicit */long long int) var_12))));
                    }
                    arr_18 [i_0] [i_0] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)12318))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) : (min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1]))))));
                    arr_19 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((-1331382700), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((12144757574444102759ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                arr_28 [i_8] [i_7] [i_6] [i_1] [i_0] |= ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_1))));
                                arr_29 [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_6] [i_0]);
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((unsigned int) arr_7 [i_7 + 1] [i_8]));
                                arr_31 [i_7] [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_3 [i_7 + 1] [i_7 + 1] [i_7 + 1])) : ((~(((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_0] [i_1] [i_6]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (~(((2721162955U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0])))))));
                    arr_35 [i_0] [i_1] [(unsigned short)9] = ((/* implicit */unsigned short) 3136682620U);
                    var_22 = ((/* implicit */int) min((var_22), (arr_11 [i_0] [i_1] [i_9])));
                    var_23 |= ((/* implicit */int) -4874264779344352490LL);
                    var_24 += ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_9]);
                }
                arr_36 [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_24 [i_1] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_13 [i_0] [i_0] [13U] [i_0] [(unsigned short)5])))))));
            }
        } 
    } 
}
