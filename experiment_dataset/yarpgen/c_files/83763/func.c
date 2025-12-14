/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83763
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
    var_14 = ((/* implicit */signed char) var_1);
    var_15 = ((/* implicit */unsigned long long int) -3406379258610613613LL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1034827352997540441ULL)) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (unsigned char)171))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_1 [i_0]))));
        var_18 *= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((signed char) (short)32734))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) -495832853)))) : (arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((unsigned long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_13 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)85)) != (((/* implicit */int) (unsigned char)73))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2])) && (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])))))));
                        var_19 ^= ((((((/* implicit */int) arr_8 [i_4 + 2] [i_4 + 4] [i_4 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_2] [i_4] [i_4] [i_2])) + (44))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32734)) | (847321054)))) >= (15644953310788244002ULL)));
                        var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)183)))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) (signed char)-52)))) | (847321061)));
    }
}
