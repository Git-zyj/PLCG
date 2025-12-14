/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68570
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
    var_15 = ((/* implicit */signed char) 5850445912308719143ULL);
    var_16 = ((/* implicit */unsigned char) min((var_16), (var_6)));
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_0)));
    var_18 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_6)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) arr_7 [i_0]);
                            arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 2] [(unsigned char)16] [i_0])) ? (arr_10 [(unsigned char)6] [i_1] [i_1 - 1] [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_0] [i_1 - 1])))));
                        }
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_5] [i_1 - 1] [i_5 - 1] [i_3] [i_0])))))));
                            var_21 = ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)56), (arr_14 [i_5] [i_3] [(signed char)8] [(unsigned char)9] [(signed char)9] [(signed char)6]))))) ^ (var_9)));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 3; i_6 < 18; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6] [i_6 + 1] [1ULL] [i_6] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6 - 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_6 + 1]))) : (arr_11 [i_6 - 3] [i_6] [i_6 - 2] [(unsigned char)9] [4LL] [i_6 - 2] [i_6 - 2])));
                            arr_18 [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_0])) & (((/* implicit */int) arr_16 [i_3]))));
                            arr_19 [i_0] [i_0] [i_0] [i_2 + 2] [i_0] [i_0] = (signed char)45;
                        }
                        var_23 = var_11;
                    }
                    for (long long int i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        var_24 = 7640471183720576662LL;
                        arr_22 [i_0] = ((/* implicit */unsigned long long int) var_9);
                        arr_23 [i_7] [i_0] [i_2] [i_2] [i_0] [i_0] = arr_12 [i_0] [12ULL] [i_1] [i_7] [i_0];
                    }
                    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : ((-(var_8))))) * (arr_10 [i_0] [i_1] [i_1 + 2] [i_0] [i_1 + 2])));
                }
                var_26 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_11)))), (((((/* implicit */int) (unsigned char)205)) * ((+(((/* implicit */int) (unsigned char)255))))))));
                arr_24 [i_0] [i_0] = arr_4 [i_0];
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((signed char) var_10)))));
                var_28 = ((/* implicit */long long int) var_12);
            }
        } 
    } 
}
