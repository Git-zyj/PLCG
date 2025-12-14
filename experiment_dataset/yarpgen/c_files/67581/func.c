/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67581
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
    var_15 -= var_12;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_0] [i_0 + 2])))) - (max((((/* implicit */unsigned int) (short)-32764)), (869802523U)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_8 [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)24761)), (arr_3 [i_0 - 1] [i_1])))) && (((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) arr_5 [(signed char)16] [i_1] [i_1] [i_1]);
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_2 + 1])) - (((((/* implicit */_Bool) -1899142438)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (short)10868)))))) + (((arr_5 [i_0] [(short)22] [i_0] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [1LL] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_2])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)50096)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_5 - 2] [i_6])) ? (arr_11 [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_3))))))))) >= (((/* implicit */int) min(((unsigned short)60966), (((/* implicit */unsigned short) ((signed char) var_6))))))));
                        arr_22 [i_3] [i_3] [15LL] [i_6 + 2] = ((/* implicit */long long int) max((((arr_16 [i_3] [i_3] [i_4 + 1]) ^ (((/* implicit */int) var_7)))), (max((((/* implicit */int) var_1)), (arr_16 [i_4] [i_4] [i_4 + 1])))));
                        arr_23 [i_3] [(unsigned short)17] [(short)9] [i_5] [i_6] = ((/* implicit */long long int) max((((arr_20 [23] [i_6] [i_6 + 2] [i_5 + 3] [i_4 + 2] [i_3 + 2]) & (arr_15 [i_6 + 4]))), (min((((/* implicit */int) min((((/* implicit */short) var_14)), ((short)-1)))), (min((var_10), (((/* implicit */int) (short)32765))))))));
                        var_18 += ((/* implicit */unsigned short) ((_Bool) var_12));
                        var_19 += ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) var_2)), (var_5)))), ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) max((arr_18 [i_3] [i_4] [3U] [i_7 - 1]), (((/* implicit */long long int) arr_25 [i_4] [i_5 + 2] [i_4] [i_4] [i_3]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))));
                        var_21 = ((/* implicit */long long int) max((((/* implicit */int) var_9)), (((var_3) ? (min((((/* implicit */int) arr_24 [i_7 + 2] [i_4])), (-1084283542))) : (((/* implicit */int) arr_25 [i_7] [13U] [i_5] [i_3] [i_3]))))));
                    }
                    arr_26 [i_3] [(signed char)12] [i_5 + 1] &= ((/* implicit */unsigned short) max((((unsigned int) arr_20 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1])), (max((((/* implicit */unsigned int) arr_20 [i_3 + 1] [i_3 + 1] [i_4] [i_4 - 1] [i_3 + 1] [i_5 - 2])), (max((((/* implicit */unsigned int) arr_16 [i_3] [20LL] [i_5 + 3])), (arr_10 [i_4] [i_5])))))));
                }
                for (signed char i_8 = 1; i_8 < 23; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 3; i_9 < 20; i_9 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-31317)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (unsigned short)34611))));
                        arr_31 [i_3] [i_3] [i_8] [i_9 + 4] = ((/* implicit */signed char) ((arr_18 [i_3] [i_3 + 1] [i_4 + 1] [i_9 + 3]) >= (arr_18 [i_4] [i_4 - 1] [i_4 + 1] [i_9 + 3])));
                    }
                    arr_32 [(short)9] [i_4] [(signed char)11] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_8] [i_4] [i_3 - 1])) && (((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_3 + 1])))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (arr_10 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (arr_10 [i_8 + 1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)1)) > (arr_15 [i_8])))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -288846686)) : (arr_10 [i_3] [i_4 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_3] [i_3])) - (((/* implicit */int) (short)-3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_3 + 1] [i_4 + 1] [i_8 + 1])) >= (((/* implicit */int) min((var_5), (((/* implicit */short) var_6))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_8 + 1])) ? (arr_11 [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4] [i_8 - 1])))))) ? (((long long int) var_3)) : (((/* implicit */long long int) arr_15 [i_3]))))));
                }
                var_24 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) var_0))) ? (min((1019311162514984706LL), (((/* implicit */long long int) arr_14 [i_4])))) : (((/* implicit */long long int) arr_16 [(_Bool)1] [i_4 - 1] [i_3])))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_4] [i_4] [i_3 + 1] [i_3 + 1] [i_3 - 1])) << (((((/* implicit */int) (short)-2406)) + (2413)))))))))));
            }
        } 
    } 
}
