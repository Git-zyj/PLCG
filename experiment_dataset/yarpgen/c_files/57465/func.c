/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57465
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_0);
        arr_5 [i_0] [i_0] = ((/* implicit */int) 4503599627370240LL);
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)24576))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_6))));
    }
    for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10672)) ? (((/* implicit */int) arr_1 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_8 [1U]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (752110818U))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) var_10))))) : (var_2)))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) arr_2 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [11])))))) ? ((~(((/* implicit */int) ((signed char) (_Bool)1))))) : (((/* implicit */int) arr_7 [i_1]))));
        var_14 = ((/* implicit */_Bool) (+(min((((unsigned int) 4136895236U)), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
        arr_10 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_15 = ((/* implicit */int) ((signed char) ((signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78)))))));
        arr_13 [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((_Bool) max((((/* implicit */int) (short)16368)), ((-2147483647 - 1)))))), (((unsigned char) var_5))));
        arr_14 [i_2] = ((/* implicit */unsigned char) (~(var_5)));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_24 [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (var_1) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((+((~(((/* implicit */int) (unsigned char)78)))))) : ((~(((/* implicit */int) (_Bool)1))))));
                        var_17 = ((/* implicit */int) min(((signed char)10), (((/* implicit */signed char) (_Bool)0))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) (_Bool)1)), (4189704213U)))));
}
