/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94223
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */long long int) ((unsigned short) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))));
        var_20 = ((/* implicit */short) (((!((!((_Bool)0))))) || ((!(var_0)))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) max((arr_3 [i_1 + 1] [i_1 - 2] [i_1]), ((~(((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (arr_3 [i_0] [i_1] [i_1])))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (_Bool)0))) * (((/* implicit */int) arr_1 [i_0]))));
                arr_7 [i_0] [(unsigned short)0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned short)4)) - (4)))))) : (1677673417U)))));
            }
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_23 = ((/* implicit */signed char) (((((_Bool)1) ? (min((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18685))))) % (((((/* implicit */_Bool) max(((signed char)48), (((/* implicit */signed char) (_Bool)0))))) ? ((~(7699417455064548432LL))) : (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6)))))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((18LL), (((/* implicit */long long int) arr_9 [i_0] [(_Bool)1] [(unsigned char)4])))))) ? (((((((/* implicit */int) arr_1 [6])) >= (((/* implicit */int) (unsigned char)161)))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_6 [(unsigned short)8])))) : (((int) (signed char)-49)))) : (((/* implicit */int) (_Bool)1))));
            var_25 = ((/* implicit */short) max((((/* implicit */long long int) ((((var_1) * (((/* implicit */unsigned long long int) 3075345978U)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_8))))))))), (7595337972620084034LL)));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        arr_12 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_6 [i_4]))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4] [(short)4] [(_Bool)1])) && (((/* implicit */_Bool) ((unsigned int) arr_9 [i_4] [i_4] [i_4])))));
        arr_13 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1488333274U)))), (max((-8364489929105235642LL), (((/* implicit */long long int) (signed char)125))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_3))))) > (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_19)))))))) : (((/* implicit */int) var_10))));
}
