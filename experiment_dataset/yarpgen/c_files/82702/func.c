/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82702
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
    var_16 = ((/* implicit */unsigned int) var_3);
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */int) var_11)) % (((/* implicit */int) (unsigned char)4)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_8 [i_3] [23LL] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_0 + 1] [i_0] [i_0 - 3]) * (((/* implicit */unsigned long long int) arr_2 [(unsigned char)13] [i_1 - 2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_0])) ? (((/* implicit */long long int) arr_2 [i_0 + 1] [i_2] [i_0])) : (var_8)))) : (max((arr_4 [i_0 - 3] [i_0] [i_0 - 2]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1 - 2] [i_0]))))));
                        var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))))));
                        var_19 *= ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [0ULL] [i_3] [0ULL]), (((/* implicit */unsigned long long int) arr_6 [12] [12] [i_2] [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_1] [i_1]))))) : (min((4203443248U), (4203443260U)))))) / ((+(((arr_3 [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        for (short i_5 = 3; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) ((72057594037927936LL) < (var_14))))) * ((+(4203443278U))));
                                var_21 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_4] [i_1 - 2]))));
                                var_22 = ((/* implicit */signed char) ((short) min(((~(arr_4 [i_2 - 1] [i_0] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4203443255U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (4203443272U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            {
                arr_19 [i_7] [i_7] [i_6] = ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_15 [12LL]), (((/* implicit */signed char) arr_6 [i_7] [i_7] [i_7] [i_6] [i_6])))))) / (min((var_1), (((/* implicit */long long int) (signed char)50)))))));
                arr_20 [i_6] [(unsigned short)5] [(unsigned char)5] = ((/* implicit */long long int) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6]);
            }
        } 
    } 
}
