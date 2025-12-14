/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61205
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
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_3)), (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)59))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) (unsigned char)59)), (18446744073709551615ULL)))));
        arr_5 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_6 [i_0] = ((/* implicit */short) (signed char)124);
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_1 - 3] [i_1 + 1] [i_1 - 4]))))));
            var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_8 [i_1] [i_0])))) == (min((((/* implicit */unsigned long long int) (unsigned short)39854)), (8228347380600600855ULL)))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))), (arr_3 [i_0])))) == ((-(max((0ULL), (((/* implicit */unsigned long long int) (signed char)-124)))))))))));
            var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (4294967295U)));
        }
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (signed char)124))) ? (((/* implicit */unsigned long long int) arr_1 [i_2 - 1] [i_2])) : (min((0ULL), (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2])))))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6130469498045829590ULL)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) (short)29716)) > (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2]))))))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) 3175431615U));
        }
    }
    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)-33))))));
        var_22 = ((/* implicit */signed char) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3])))));
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3ULL))))) : ((+(((/* implicit */int) var_8))))));
}
