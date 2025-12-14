/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68021
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_1 + 4] [i_2 + 3] [i_3] = ((/* implicit */int) (!(((((_Bool) arr_3 [i_0 - 1])) || (((_Bool) 127ULL))))));
                        var_15 = ((((/* implicit */_Bool) 127ULL)) ? (var_3) : (((/* implicit */int) ((123ULL) == (((/* implicit */unsigned long long int) -1584622478))))));
                        var_16 = ((unsigned long long int) ((arr_4 [i_2 + 4] [i_1 - 1] [i_0 + 1]) == (arr_4 [i_2 + 2] [i_1 + 1] [i_0 - 1])));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        arr_15 [20ULL] [10] [i_4] [i_4] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) 1584622500)) || (((/* implicit */_Bool) (short)-8287)))) ? (arr_10 [i_0 - 1] [i_1 + 1] [i_2 + 3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_4)))))))));
                        arr_16 [i_4] [i_1] [i_1] [i_1 + 4] = 18446744073709551492ULL;
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_17 += ((/* implicit */long long int) -1584622478);
                        var_18 = ((/* implicit */unsigned short) (signed char)63);
                        arr_19 [i_0] [i_1] [i_2 - 3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 + 2] [i_1])) ? (arr_2 [i_2 - 1] [i_2 - 3] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    }
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)123))));
                }
            } 
        } 
        var_20 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_9)));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (_Bool)1)) ^ (var_12))) : (((((((/* implicit */_Bool) var_10)) ? (var_3) : (1584622477))) & (((/* implicit */int) max(((unsigned char)59), (((/* implicit */unsigned char) (signed char)127)))))))));
    var_22 = ((/* implicit */unsigned int) ((short) (signed char)72));
    var_23 |= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0))));
    var_24 += ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) ((var_14) ? (((/* implicit */int) (_Bool)0)) : (1584622482))))), ((~((~(2147483645)))))));
}
