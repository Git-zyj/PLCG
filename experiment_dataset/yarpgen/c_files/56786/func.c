/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56786
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
    var_14 = ((/* implicit */int) min((var_4), (var_12)));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned char) arr_3 [(unsigned char)14] [i_0] [(unsigned char)14]);
            arr_6 [i_0] = max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_0] [i_0]))));
        }
        var_17 = ((/* implicit */int) var_1);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */long long int) arr_5 [i_2] [i_2])), ((~(max((((/* implicit */long long int) arr_7 [i_2])), (arr_4 [i_2] [i_2] [i_2]))))))))));
        var_19 = ((/* implicit */short) var_10);
    }
    var_20 = ((/* implicit */short) min(((~(max((4950231627012653899LL), (var_7))))), (((/* implicit */long long int) (short)-32748))));
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), ((-(-3230986648295541686LL)))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_24 [i_3] [i_3] [i_6 - 3] [i_3] [(short)18] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) -3230986648295541677LL)), (var_0)))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (var_4)));
                            arr_25 [14] [i_4] |= ((/* implicit */short) arr_15 [i_3] [i_3] [i_3]);
                            var_23 = ((/* implicit */long long int) arr_17 [i_3] [i_5 + 1] [i_6 - 1] [i_3]);
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_24 += ((/* implicit */unsigned short) min((arr_20 [21LL] [i_4 + 1] [i_4] [i_4]), (((/* implicit */long long int) arr_26 [i_8] [i_6] [i_5] [i_4 + 1] [11ULL]))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 3230986648295541666LL)) || (((/* implicit */_Bool) 3230986648295541677LL))));
                            var_26 ^= ((/* implicit */short) arr_13 [(_Bool)1]);
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) min((min((max((var_2), (((/* implicit */unsigned int) arr_18 [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [1] [i_3]))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_13)), (arr_17 [i_3] [i_3] [i_3 - 2] [i_3]))))));
        arr_30 [i_3] = ((/* implicit */long long int) arr_28 [i_3]);
        arr_31 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_26 [i_3] [i_3] [(short)16] [i_3 - 2] [i_3 - 2]);
    }
}
