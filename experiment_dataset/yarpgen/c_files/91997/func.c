/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91997
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((((9223372036854775786LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63434)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((unsigned short)34866), (((/* implicit */unsigned short) arr_1 [i_1 + 1])))))));
                        arr_14 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = min((536870912), (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))));
                        var_20 = min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)187));
                        arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) ((_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3]))))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (signed char)0);
    var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((short) var_13))), ((((!(((/* implicit */_Bool) (signed char)-1)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    var_23 = min((((((((/* implicit */int) ((signed char) (signed char)-6))) + (2147483647))) << (((((/* implicit */int) var_12)) - (1))))), (((((/* implicit */int) min(((signed char)6), (((/* implicit */signed char) var_12))))) | (((/* implicit */int) min((var_10), ((unsigned char)197)))))));
}
