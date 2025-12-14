/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90991
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_9 [(signed char)2] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [(short)5])) ? (var_11) : (var_15))) << (((var_1) + (964620946836138816LL)))));
                    arr_10 [(signed char)15] [i_1] &= arr_1 [i_0];
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (arr_7 [i_0])))) - (max((((/* implicit */long long int) arr_5 [(unsigned char)3] [i_1] [i_2])), (var_18))))) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    arr_11 [(signed char)10] [9ULL] = ((/* implicit */_Bool) arr_3 [i_0]);
                }
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 ^= var_3;
                        arr_17 [i_1] [i_1] [i_1] [i_3] = ((int) ((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) arr_4 [(signed char)14]))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_6))) ^ ((~(arr_5 [i_4] [i_3] [i_1]))))))));
                    }
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_8 [i_5] [i_3] [i_1]))))));
                        var_24 -= ((/* implicit */int) arr_8 [i_1] [i_1] [i_5 - 1]);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_6))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_5 - 2]))) ^ (var_18))))));
                    }
                    var_26 ^= ((/* implicit */signed char) arr_8 [(signed char)10] [i_1] [(signed char)16]);
                }
                var_27 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [11ULL] [11LL])) : (((/* implicit */int) arr_18 [i_0] [i_0] [(signed char)14] [i_1] [i_1] [(_Bool)1]))))) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1]))))) > (((((/* implicit */int) ((unsigned char) (unsigned char)6))) ^ (((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1])) % (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_19)))))));
}
