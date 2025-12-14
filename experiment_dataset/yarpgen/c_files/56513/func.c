/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56513
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
    var_17 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_0) * (((/* implicit */int) var_15))))) <= (((long long int) -9223372036854775782LL)))))) : (max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (1649328866944913009ULL)))), (var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (((var_5) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14))))))));
                var_19 = ((/* implicit */int) var_14);
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (16797415206764638619ULL)))))))));
                    arr_10 [i_0] [5ULL] = (~(min((((/* implicit */unsigned long long int) 676164474U)), (var_4))));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_1] [i_1])))) : (1649328866944912997ULL))))));
                    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) var_1)) : ((~(-2147483647)))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1953090488))));
                    arr_17 [i_4] [i_4] [i_4] [i_0] = (~(((/* implicit */int) arr_8 [i_4] [i_4] [i_1] [i_0])));
                    var_23 = (signed char)75;
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [(signed char)6] [i_6 - 1] [6] [i_6])) && (((/* implicit */_Bool) arr_19 [i_5] [i_0] [i_6 + 4] [i_5] [i_6])))))));
                                var_25 = ((/* implicit */unsigned char) ((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_9))));
                                var_27 = ((/* implicit */long long int) (+(((unsigned int) arr_19 [i_4] [i_4] [i_6] [8ULL] [i_4]))));
                            }
                        } 
                    } 
                    arr_25 [i_4] [i_4] [i_0] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)2))));
                }
            }
        } 
    } 
}
