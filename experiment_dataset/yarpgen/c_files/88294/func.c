/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88294
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
    var_18 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((unsigned long long int) ((unsigned short) 2147483647));
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2] [10LL] [i_1] [i_2]))))) & (((long long int) arr_2 [i_0])))) % (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (signed char)7))));
                    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) ? (2073561716154505571LL) : (2097151LL)))) ? (((/* implicit */int) max((arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_6 [i_0] [i_1 - 3] [i_1] [i_1 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)202)))))));
                var_24 ^= ((/* implicit */unsigned short) ((arr_10 [i_3]) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (-2147483647) : (((/* implicit */int) var_12)))) == (((/* implicit */int) arr_10 [i_3]))))) : ((+(((/* implicit */int) arr_7 [(signed char)7]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        for (short i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_25 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2147483634)))) | (arr_9 [i_6 + 1])));
                    var_26 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7005743082591365852LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-32377))))) || ((!(((/* implicit */_Bool) (unsigned short)52138)))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_9 [i_6])))))) : (((/* implicit */int) ((short) arr_15 [i_7] [i_6 + 4] [i_5]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) (+(var_5)));
}
