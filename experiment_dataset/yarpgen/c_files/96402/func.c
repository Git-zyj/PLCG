/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96402
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) 992664764U);
    }
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            arr_11 [i_1] [3U] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_10 [i_2 + 2] [i_2 - 1] [i_1 + 1]))))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) (unsigned char)59))))) ? (((/* implicit */unsigned long long int) (~((~(var_8)))))) : (((unsigned long long int) (-(((/* implicit */int) var_10)))))));
        }
        for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_5))))));
            var_16 = ((/* implicit */unsigned short) var_8);
            arr_15 [i_3] = ((((/* implicit */_Bool) 9896629714678784942ULL)) ? (4146036370U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))));
        }
        arr_16 [(signed char)12] [i_1 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)49))));
        var_17 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (unsigned char)195)), (2850437090U)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        var_18 -= (+(((((/* implicit */_Bool) (-(arr_1 [i_4])))) ? (((((/* implicit */_Bool) 2850437108U)) ? (11765992372471607484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)197)))))));
        arr_21 [i_4] = ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)34))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (16030506957717452786ULL)))));
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8957))));
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned char) (signed char)-82));
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((((/* implicit */int) (unsigned short)10303)) != (((/* implicit */int) (unsigned char)48)))))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11765992372471607484ULL)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned short)0))));
}
