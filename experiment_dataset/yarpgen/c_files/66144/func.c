/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66144
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
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((var_7), (arr_1 [i_0] [i_0])));
        var_18 = ((/* implicit */long long int) var_13);
        var_19 = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] [8ULL] = ((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_1]);
            var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_21 = ((/* implicit */signed char) arr_2 [(signed char)2]);
            var_22 |= arr_2 [i_1];
        }
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_23 ^= ((/* implicit */unsigned short) arr_8 [(unsigned short)3]);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) arr_11 [i_4]);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) arr_14 [i_4] [i_4]);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_4))));
                        var_27 = ((/* implicit */long long int) arr_11 [i_4]);
                    }
                    var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])), (min((10417521895786215329ULL), (((/* implicit */unsigned long long int) arr_11 [i_2]))))));
                    var_29 = min((arr_13 [8ULL] [i_2] [i_4] [8LL]), (arr_13 [7] [i_3] [i_4] [i_4]));
                }
            } 
        } 
        var_30 = var_15;
    }
    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_31 ^= arr_15 [i_6];
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((arr_15 [i_6]), (min((arr_15 [i_6]), (499283020))))))));
        arr_17 [i_6] [i_6] = arr_15 [i_6];
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) max((arr_16 [i_6]), (arr_16 [i_6]))))));
    }
    var_34 = ((/* implicit */unsigned long long int) var_1);
}
