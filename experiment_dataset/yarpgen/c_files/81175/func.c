/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81175
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
    var_16 += ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_17 *= ((/* implicit */signed char) (unsigned char)33);
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_13)))))))));
                            arr_13 [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) 2920910434883952909LL)) ? (((/* implicit */int) (unsigned short)42026)) : (var_12)))));
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                            arr_15 [i_0] [i_1] [i_2] [0U] = ((/* implicit */unsigned char) var_12);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_2 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42019))) / (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_5] [i_3] [i_2] [i_1 - 1] [i_0])) + (((/* implicit */int) (unsigned char)245))))) : (((var_2) + (var_2)))));
                            arr_19 [7LL] [i_1] [i_2 - 1] [7LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23529)))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23499)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1586982057U))))));
                        }
                        var_19 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) (-(var_7))))), ((+((-(((/* implicit */int) arr_11 [5LL] [i_3] [i_2] [(unsigned short)3] [i_1 + 1] [(unsigned short)3]))))))));
                    }
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */unsigned char) var_1);
                        arr_23 [i_6] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)67)))) < ((-(((/* implicit */int) arr_17 [i_2 - 1] [i_1]))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [3] [i_2 + 1] [i_2 - 1] [i_2 + 1]) | (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2 - 1]))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2 - 1]))) : (var_13)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        var_22 = (unsigned char)182;
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42034)) ? (((/* implicit */int) arr_12 [i_7] [i_0] [i_0] [i_1] [i_0])) : (-650292604))))));
                    }
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 16633822852841650437ULL);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */long long int) (unsigned char)81)), (min((((/* implicit */long long int) arr_26 [i_8] [i_0] [i_1] [i_0])), (max((arr_24 [(unsigned char)8] [(unsigned char)7] [i_2 + 1] [i_8] [i_0]), (((/* implicit */long long int) arr_12 [i_0] [i_1] [9] [9] [i_8])))))))))));
                    }
                    var_25 = ((/* implicit */signed char) -2920910434883952886LL);
                    arr_31 [i_0] [(short)8] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)5)), (59430656)))) ? (59430661) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), (max((((/* implicit */unsigned int) arr_2 [i_2])), (var_5)))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) ((unsigned char) var_13));
}
