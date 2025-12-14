/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62376
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_10 = ((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
        var_11 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) 8184299929881415664LL)) ? (-8184299929881415664LL) : (((/* implicit */long long int) 168635137)))), (((/* implicit */long long int) max((arr_2 [i_0] [i_0 + 1]), (((/* implicit */unsigned int) var_8)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) var_9);
                        var_13 = ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_1] [i_1 + 2])));
                        var_14 = arr_5 [i_4] [i_3] [i_2];
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_15 *= ((/* implicit */_Bool) var_0);
                            var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) var_9)) <= (arr_6 [i_1 + 2])));
                            var_17 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (arr_6 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_3] [i_4]))))) > (((/* implicit */long long int) arr_10 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1]))));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((-8184299929881415664LL) ^ (-8184299929881415665LL)));
                            var_19 = ((/* implicit */int) var_6);
                            var_20 = ((/* implicit */short) var_2);
                            arr_18 [i_1] [i_2] = ((/* implicit */unsigned int) var_1);
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5404)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    var_22 = ((/* implicit */int) min((((/* implicit */short) var_4)), (var_8)));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((4121194358U), (max((((/* implicit */unsigned int) (short)5396)), (var_9))))))));
}
