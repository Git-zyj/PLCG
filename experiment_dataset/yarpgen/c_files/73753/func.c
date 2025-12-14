/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73753
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] = min((min((667890576), (((/* implicit */int) var_9)))), (min((((/* implicit */int) var_10)), (var_8))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) -667890576))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */int) -1LL);
                        }
                        var_20 = ((/* implicit */int) min((var_20), (667890596)));
                        var_21 = 667890580;
                        var_22 = ((/* implicit */long long int) 1023);
                    }
                    var_23 *= (unsigned char)8;
                }
                var_24 = ((/* implicit */int) max((max((var_6), (((/* implicit */long long int) var_3)))), (min((((/* implicit */long long int) min((((/* implicit */int) var_15)), (var_3)))), (max((var_5), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) -667890576);
                        arr_23 [i_5] [i_6] [i_8 + 1] = 418384310;
                        arr_24 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) 1153834600);
                    }
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((min((-1498543527), (arr_25 [i_5] [i_7] [i_7] [0LL]))), (min((-667890581), (arr_25 [i_5] [i_5] [i_7] [0]))))))));
                        var_27 = ((/* implicit */unsigned char) min((min((var_11), (((/* implicit */long long int) arr_0 [i_5] [i_6])))), (((/* implicit */long long int) max((arr_0 [i_5] [i_7]), (arr_0 [i_5] [i_6]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_32 [i_6] [i_6] [i_5] [i_10] = ((/* implicit */unsigned char) min((min((-8718036438917272815LL), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) min((arr_21 [i_5] [i_6] [i_7] [i_10] [i_5] [i_11]), (var_7))))));
                                var_28 = ((/* implicit */long long int) min((min((-964243181), (1929899232))), (min((((/* implicit */int) arr_26 [i_5] [i_6])), (arr_25 [i_5] [i_6] [i_10] [i_6])))));
                                var_29 = ((/* implicit */int) max((var_29), (max((min((var_8), (arr_18 [i_6] [i_7]))), (min((-9), (667890565)))))));
                            }
                        } 
                    } 
                    arr_33 [i_6] [i_6] [i_6] [i_5] = min((((/* implicit */long long int) max((-688624048), (var_3)))), (min((((/* implicit */long long int) var_4)), (arr_9 [i_7] [i_6] [i_7]))));
                }
            } 
        } 
    } 
}
