/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62801
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
    var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_3))))))))) ^ (((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((var_15) <= (((/* implicit */unsigned long long int) var_16))));
                    var_19 += ((/* implicit */unsigned int) arr_0 [i_0] [i_2]);
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) (short)(-32767 - 1));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((min((((/* implicit */unsigned int) (short)(-32767 - 1))), (0U))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_7)))) * (((/* implicit */int) (short)32743)))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_10 [0] [i_1] [i_4] = max((((arr_4 [i_1] [i_1]) ^ (arr_4 [i_1] [i_0]))), (((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [13ULL])))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (var_0)))))));
                    arr_11 [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (unsigned char)244))))) ? (((arr_9 [3LL] [(short)3] [i_4]) % (arr_9 [i_0] [i_0] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    arr_12 [i_4] = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0]));
                }
                for (long long int i_5 = 3; i_5 < 13; i_5 += 1) 
                {
                    var_22 &= ((arr_4 [i_0] [11U]) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5 - 2]))) != (856985556U)))));
                    var_23 |= ((_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) arr_5 [i_5 + 1]))));
                }
                var_24 ^= ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_12))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_5);
    var_26 = ((/* implicit */_Bool) var_16);
}
