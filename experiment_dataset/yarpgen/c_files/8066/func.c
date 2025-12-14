/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8066
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
    var_18 = ((/* implicit */short) var_17);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(signed char)12]))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [(_Bool)1] [11] [(short)12] [i_0] [(_Bool)1] = ((/* implicit */signed char) (_Bool)1);
                                var_20 = ((/* implicit */unsigned int) (+(((var_11) - (((/* implicit */int) arr_5 [i_1 - 3] [i_2 - 1] [i_4 - 1] [i_4]))))));
                                var_21 = ((/* implicit */long long int) ((signed char) ((((var_13) - (4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1]))))));
                                var_22 = min(((((_Bool)1) ? (((/* implicit */int) (short)11568)) : (-666012269))), (min((((/* implicit */int) (signed char)57)), (1900963322))));
                                var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_6 [i_1 + 1] [i_2 - 1] [i_4 - 1] [i_1 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 666012271)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) (_Bool)1)))))))) ? (((((var_1) < (((/* implicit */int) arr_8 [i_0])))) ? (((/* implicit */int) ((-666012269) >= (((/* implicit */int) arr_2 [(signed char)0]))))) : ((+(((/* implicit */int) arr_5 [i_1] [i_3] [i_2] [i_1])))))) : (((/* implicit */int) arr_10 [2] [i_0] [i_0] [i_2] [i_0] [2]))))));
                            }
                        } 
                    } 
                    var_24 *= arr_4 [i_0];
                    var_25 = 1650363389;
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_0 + 1]), (arr_9 [i_0 - 4] [i_0])))) ? (634353779) : (min((((/* implicit */int) arr_4 [i_0])), ((~(((/* implicit */int) (signed char)-40)))))))))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_27 ^= ((/* implicit */short) (signed char)127);
                    var_28 = ((/* implicit */int) ((signed char) arr_9 [i_1 - 2] [i_1]));
                    arr_16 [12U] [i_0] [i_0] = arr_0 [i_0];
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_8))));
                    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)105))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (signed char)-114))));
    var_32 &= ((/* implicit */_Bool) var_17);
    var_33 += ((((var_5) * (((/* implicit */int) var_4)))) == (((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) var_1))))));
}
