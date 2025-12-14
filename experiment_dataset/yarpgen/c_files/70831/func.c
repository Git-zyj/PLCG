/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70831
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (((var_6) - (var_0)))))) || (((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) ((6030878416812361494ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
    var_16 = ((/* implicit */signed char) ((((((((/* implicit */int) var_10)) > (((/* implicit */int) var_5)))) ? (((/* implicit */int) (unsigned short)62253)) : (((((/* implicit */int) (unsigned short)62253)) % (((/* implicit */int) (signed char)-1)))))) == (((/* implicit */int) (short)24288))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [(short)13] [(unsigned short)5] = ((/* implicit */_Bool) 19U);
                    arr_7 [(unsigned char)10] &= ((/* implicit */long long int) arr_3 [0U] [3U] [(unsigned char)6]);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((max((321010852U), (1890209775U))) % (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551601ULL)) || (((/* implicit */_Bool) (-2147483647 - 1))))))))))))));
                    var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)4] [(signed char)4]))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_4)) : (var_11)))))));
                }
            } 
        } 
    } 
}
