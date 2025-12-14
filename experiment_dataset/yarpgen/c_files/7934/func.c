/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7934
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
    var_14 = ((unsigned char) var_13);
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) | (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) var_13)))))) : (((((/* implicit */_Bool) (signed char)-47)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? ((-(((/* implicit */int) ((unsigned char) (signed char)-47))))) : ((~(var_13))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned short) 9223372036854775807LL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_0 [i_3] [i_2 - 1]))));
                        var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)10] [i_2] [i_3])) ? (2305838611167182848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [5] [(unsigned short)6] [i_2] [i_3])))))));
                        var_19 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 3] [i_3]))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_2 - 2])) : (((/* implicit */int) arr_1 [i_2] [i_2 + 1])))))));
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65526))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned short) var_2);
}
