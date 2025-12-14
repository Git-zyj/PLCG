/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55403
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7693472765528934977LL))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (15ULL) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3394600497585137504ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((var_3) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17151888645510577214ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (-4894284574329914471LL))))));
                                var_15 |= ((/* implicit */short) arr_3 [i_4]);
                            }
                        } 
                    } 
                } 
                arr_13 [(signed char)2] [i_1 + 2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)2] [(unsigned short)2])) ? (arr_4 [i_1 + 3] [4ULL]) : (18446744073709551596ULL))), (((/* implicit */unsigned long long int) (~(var_8))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) ? (var_8) : (((/* implicit */int) (unsigned short)0)))) >> (((/* implicit */int) ((_Bool) (unsigned short)65524)))))) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) var_6))));
}
