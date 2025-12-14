/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71206
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
    var_16 = ((/* implicit */signed char) (-(max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) > (var_12)))), (((((/* implicit */int) (unsigned char)2)) >> (((((/* implicit */int) (signed char)71)) - (63)))))))));
    var_17 = ((/* implicit */unsigned char) max((3957626432U), (((/* implicit */unsigned int) (unsigned short)1022))));
    var_18 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (max((var_11), (((/* implicit */unsigned int) (signed char)98))))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) -163991502))), (var_13))))));
    var_19 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = (i_0 % 2 == 0) ? (((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)252))))) ? (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_2 [15] [i_1] [i_0])) - (53))))) : (arr_0 [i_0])))))) : (((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)252))))) ? (((((((arr_0 [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_2 [15] [i_1] [i_0])) - (53))) + (58))))) : (arr_0 [i_0]))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) (signed char)-123);
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (signed char)-123);
                                arr_14 [i_0] [(_Bool)1] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) min((arr_1 [i_1]), (arr_8 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */int) arr_1 [i_0]))));
                                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [1LL]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) % ((-(((((/* implicit */_Bool) (unsigned short)26712)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))) : (var_8)))))));
                }
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [(unsigned short)3] = ((/* implicit */short) (!(((/* implicit */_Bool) max(((unsigned short)38839), (((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_1])))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) % (((/* implicit */int) max((arr_3 [i_0] [i_1] [i_5]), (arr_3 [i_0] [i_1] [i_5]))))));
                }
            }
        } 
    } 
}
