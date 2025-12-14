/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76842
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
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (((((/* implicit */_Bool) ((unsigned char) 3572226844U))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (min((var_6), (((/* implicit */unsigned int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_2 [i_0]))))) <= ((-(((/* implicit */int) (unsigned char)122))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_15 = ((/* implicit */short) ((_Bool) 18ULL));
                    var_16 *= ((((/* implicit */_Bool) (~(1204864339U)))) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (1204864339U));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [13LL] [13LL])) >= (((((/* implicit */_Bool) arr_2 [(signed char)1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) var_5);
                    var_18 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_19 = ((/* implicit */unsigned short) (~(((int) arr_7 [(signed char)7] [i_0] [i_0] [(signed char)7]))));
                    var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1 + 1]))));
                }
                /* vectorizable */
                for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    var_21 ^= ((/* implicit */unsigned char) ((((var_5) ? (((/* implicit */int) arr_11 [i_4] [12U] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [i_0])))) - (((/* implicit */int) ((signed char) arr_0 [i_4] [i_1])))));
                    var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_1])) < (arr_2 [19ULL]))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4 - 2] [i_0])) ? (((((/* implicit */_Bool) 1204864336U)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)24)))) : (((((/* implicit */int) arr_9 [i_0] [i_0])) ^ (arr_2 [i_0])))));
                }
                var_24 = ((/* implicit */signed char) max(((~((~(((/* implicit */int) arr_10 [i_0] [i_0])))))), (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) & ((~(arr_2 [i_0])))))));
                arr_12 [i_0] = ((/* implicit */_Bool) ((long long int) min(((signed char)-59), (((/* implicit */signed char) (_Bool)1)))));
                var_25 = min((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0]))))) / (((((/* implicit */_Bool) arr_5 [2] [i_1] [10LL] [i_1])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) (!(arr_0 [i_0] [i_1 + 1])))));
            }
        } 
    } 
    var_26 = ((var_5) ? (var_9) : (((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) 0U)))))));
}
