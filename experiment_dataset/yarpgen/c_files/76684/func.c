/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76684
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-1))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = (~(((/* implicit */int) (unsigned short)50851)));
                    arr_11 [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (var_10)))) ? (((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */unsigned int) var_9)))) : (var_6)));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_17))));
                    arr_13 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_9) : (((/* implicit */int) var_17)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_18 [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50865)) ? (((/* implicit */int) (unsigned short)50862)) : (((/* implicit */int) (unsigned short)50858))))) : ((+(18446744073709551615ULL)))))));
        arr_19 [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 13909154773365943087ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50844))) : (max((3232740422114421290LL), (((/* implicit */long long int) (unsigned char)143)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50851)) ? (((/* implicit */int) (unsigned short)14663)) : (((/* implicit */int) (unsigned short)65535))))) ? (var_6) : (((/* implicit */unsigned int) (~(-1564201303)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 2) /* same iter space */
    {
        arr_23 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_15)))) ? (var_2) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))));
        arr_24 [i_4] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_29 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
        arr_30 [(short)6] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_19))))));
        arr_31 [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_12)) ? (var_7) : (var_5)))));
    }
    var_20 = ((/* implicit */long long int) var_8);
}
