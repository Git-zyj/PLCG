/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75581
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0 - 2] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) (unsigned short)17722))))), (arr_0 [(short)5])))) ? ((+(((long long int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967290U))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) /* same iter space */
                        {
                            var_12 |= ((/* implicit */long long int) var_4);
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-138))) : (min((((/* implicit */long long int) arr_3 [(_Bool)1] [i_1] [i_0])), (var_1)))))))));
                            var_14 |= ((/* implicit */_Bool) (+(var_4)));
                            var_15 |= 5U;
                            var_16 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) && (arr_11 [i_4] [i_4 + 1] [i_2 - 1] [i_2 - 1])))), ((-(max((var_4), (((/* implicit */unsigned int) (_Bool)1))))))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_2 + 2] [i_3] [i_5] |= ((/* implicit */int) (+(((unsigned int) (short)8841))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) (unsigned short)58584))));
                        }
                        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_6 + 3] [i_6 + 3] [i_6] [i_6 + 3] [i_6 + 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)138))));
                            arr_23 [i_0] [i_1] [i_2 + 2] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)66)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_14 [i_6 + 1] [i_6] [i_6] [i_6 + 3] [i_3] [i_1] [i_1]))))));
                            var_18 = ((/* implicit */unsigned short) (~((((-(arr_18 [i_0] [i_1] [i_0] [(_Bool)1] [i_1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            arr_24 [i_2 + 1] [i_3] [i_2 - 1] [i_2 + 1] [2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -392565550125916035LL)))))) - (max((-1LL), (((/* implicit */long long int) (_Bool)1))))));
                        }
                        arr_25 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 3] = (+(((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))));
                        arr_26 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned char) arr_20 [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_0]);
                        arr_27 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)69)))) | (((/* implicit */int) (signed char)-97)))))));
                        arr_28 [i_2] [i_1] |= ((/* implicit */signed char) 1757919382);
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (min((min((((/* implicit */unsigned int) var_9)), (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (382489937U))))), (((/* implicit */unsigned int) arr_11 [i_1] [i_2 + 1] [i_1] [i_1]))))));
                            var_20 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) arr_20 [i_2] [i_2] [i_2 + 3] [i_2] [i_2])) < (arr_0 [i_0 - 1]))));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((signed char) (((_Bool)1) ? (2358470036U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))))))), (arr_12 [i_0 - 2] [i_8] [i_0] [i_2 - 1] [i_8] [i_7])));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1])) ? (((((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_2 + 3])) ^ (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 3] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1])))) : ((~(((/* implicit */int) arr_14 [i_2 + 3] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1]))))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (-1750366353)));
                            arr_36 [i_0 + 1] [6] [6] [i_7] [i_9 + 1] = ((/* implicit */_Bool) min((min((3611665937U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_9 + 2])))))));
                            var_24 = ((/* implicit */unsigned int) (+(min((((var_11) ? (6319790470207246003LL) : (var_6))), (((/* implicit */long long int) arr_29 [i_0 - 1] [i_0 - 2] [i_0] [i_0]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            arr_39 [i_2 + 3] [i_2] [i_2 + 3] [(unsigned char)10] [i_2 + 1] [i_2 + 2] |= ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_2 + 1] [i_1] [i_10 - 1] [i_0 - 3])) - (((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */int) var_2)) : (-1757919383)))));
                            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_0 + 3])) - (((/* implicit */int) arr_37 [i_0 - 2]))));
                        }
                        var_26 = ((/* implicit */unsigned char) min((var_26), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) arr_16 [i_1] [i_0 - 2] [i_2] [i_2] [i_2 - 1]);
                        var_28 |= ((/* implicit */unsigned short) max((min((var_6), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (((arr_31 [i_0 + 3] [i_0 + 3] [(short)5] [i_0] [i_0 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                    arr_44 [1U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2 + 3] [i_0 - 2] [i_0 + 3]))) ? (((((/* implicit */long long int) ((unsigned int) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2]))) - (-1LL))) : (var_6)));
                    arr_45 [i_0] [i_0] [i_2 + 3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_1 [i_0 + 3]))))))), (((arr_32 [i_2 + 2] [i_2 + 2] [i_1] [i_0 + 3]) ? (arr_18 [i_0] [i_0 - 3] [i_0 + 1] [i_2 + 2] [(short)14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))));
                    arr_46 [i_0 + 1] [i_1] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(-2LL))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50175)) / (((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_2])))))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)8))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)247)))))) != (1416349322U))))) < (min((((/* implicit */unsigned int) ((unsigned char) var_11))), (var_4)))));
}
