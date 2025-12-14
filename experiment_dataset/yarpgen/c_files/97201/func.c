/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97201
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967270U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)119)) ? (var_11) : (((/* implicit */int) (signed char)-59))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2061891001U)) ? (var_9) : (((/* implicit */unsigned int) var_5)))))))))));
    var_16 = ((/* implicit */unsigned int) 931847158);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1)))) : ((~(((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 2]))) : (arr_8 [i_1] [i_1 + 1] [i_1]))) * (((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2] [(unsigned char)18])) ? (arr_8 [i_1] [i_1 - 1] [17ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))));
                            var_19 = ((/* implicit */_Bool) 8334221578187818263LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((arr_11 [(signed char)2] [i_0] [i_1 - 2] [(short)16]) > (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0])))))) ? (((((/* implicit */_Bool) var_2)) ? ((~(arr_8 [i_0] [i_1] [5ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1]))))))));
            }
        } 
    } 
}
