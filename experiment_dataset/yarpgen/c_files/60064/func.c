/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60064
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
    var_18 = var_16;
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-19)) ? ((~(((((/* implicit */_Bool) (unsigned short)13926)) ? (359031637) : (((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) (signed char)18))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)21264);
                    arr_8 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */int) arr_0 [i_0])))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_0])), (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1])))))) : (arr_3 [i_0]))))));
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(signed char)2]))))) ? ((~(((/* implicit */int) (unsigned short)34091)))) : (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)255)))))), ((~((~(((/* implicit */int) var_16))))))));
                }
                var_20 = var_1;
                arr_13 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [2LL] [6ULL] [i_0]);
            }
        } 
    } 
    var_21 |= (~((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)51609)) : (((/* implicit */int) (unsigned short)53575)))))));
}
