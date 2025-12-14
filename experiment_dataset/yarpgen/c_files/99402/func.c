/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99402
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) (+((+(1166577012)))))), (3318379813U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [(unsigned short)7] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [5U] [5U] [i_2 + 1])) == (((/* implicit */int) arr_7 [i_2] [i_2 + 1])))))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_5))));
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))))))) * (((/* implicit */int) arr_8 [i_0] [i_4 + 2] [i_2]))));
                                arr_15 [i_2] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0]);
                                var_15 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_2 [i_3]))) * (((/* implicit */int) arr_2 [i_1 + 1]))));
                                var_16 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_1])) ? (3318379804U) : (((/* implicit */unsigned int) -1166577013)))) : (3318379813U)))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
                            {
                                arr_18 [(unsigned short)2] [i_1] [1] [i_2] [10U] = var_2;
                                arr_19 [i_0] [i_0] [i_2 - 2] [i_5] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [0] [i_1])))))));
                                arr_20 [(_Bool)1] [(_Bool)1] [(signed char)3] [i_2] [(unsigned char)10] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 1] [(signed char)9]))))) && (arr_7 [i_2] [i_1])));
                                var_17 = 725947334;
                                arr_21 [i_0] [i_1 - 3] [i_5] [i_1 - 3] [(short)0] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 4] [i_2 + 1])))))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                            {
                                var_18 = ((/* implicit */_Bool) ((976587482U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))));
                                var_19 -= ((/* implicit */long long int) var_8);
                                var_20 = ((((/* implicit */int) ((arr_6 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8435)))))) == (-1166577013));
                                arr_25 [i_0] [i_0] [0LL] [i_3] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1 - 3] [3] [i_3] [i_6] [i_2])) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7403611378350508885ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_6])))))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) arr_9 [i_1] [i_0] [i_0] [i_0] [i_0])) | (arr_0 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (min((((/* implicit */long long int) 3162046927U)), ((-(arr_17 [i_1] [i_1 - 2] [i_1] [i_1] [i_0] [i_0] [i_0])))))));
                arr_26 [i_1] [i_0] = ((/* implicit */short) var_7);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_3))));
}
