/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79714
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5276)) ? (12734308910023559834ULL) : (16832588770363412520ULL)))) ? ((~(arr_5 [i_1] [(unsigned short)20]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_2]), (arr_9 [4ULL] [4ULL] [i_2] [i_4]))))))) > (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_4]) : (((/* implicit */unsigned int) var_10))))))))))));
                                var_12 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6034292397090742573ULL))))), ((-(arr_6 [16]))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_4] [i_2] [i_0]))))));
                                var_13 ^= ((/* implicit */unsigned long long int) var_9);
                                var_14 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((long long int) (signed char)4)) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)12)))))))), (((((/* implicit */_Bool) 3550136443U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (4294967295U)))) : (919607086649001283ULL)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * ((~(arr_6 [i_2])))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_8))));
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_2)));
    var_18 *= ((/* implicit */unsigned long long int) (((((+(var_1))) <= (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4008015143U)) ? (((/* implicit */long long int) 3212935982U)) : (9223372036854775807LL)))) ? ((~(((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-32)) < (((/* implicit */int) (short)-32749)))))))) : (var_2)));
}
