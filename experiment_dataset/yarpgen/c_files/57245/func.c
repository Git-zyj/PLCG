/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57245
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
    var_18 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) (signed char)-73)) / (16383))), (((((/* implicit */_Bool) -39697429)) ? (var_4) : (((/* implicit */int) var_9)))))) == (var_4)));
    var_19 = ((/* implicit */long long int) var_13);
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 + 2] = ((/* implicit */unsigned long long int) (+(1006815111U)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_13 [(signed char)11] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_14))))) : ((~(4294967295U)))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_11)))) : (((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1])))))));
                        var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)31962)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_16)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(arr_15 [i_4 - 2] [i_2 - 1] [i_2 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2]))))));
                        arr_18 [i_4] [i_2 - 1] [i_2] [1ULL] [1ULL] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) / (((((/* implicit */_Bool) 549755813884ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_0] [i_0]))))));
                    }
                    arr_19 [i_1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (short)28818))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)10)) : (839596078)))));
    }
    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */short) ((unsigned short) (unsigned short)32256));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */int) (short)8191)) != (((/* implicit */int) (short)2047)))))));
    }
    var_26 = ((/* implicit */int) var_16);
}
