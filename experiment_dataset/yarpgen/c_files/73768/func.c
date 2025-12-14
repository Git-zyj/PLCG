/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73768
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(var_14))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16)))))))), ((((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((var_3) ? (var_17) : (((/* implicit */unsigned long long int) var_1))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_13))))) : (var_6)))) ? ((~((~(var_6))))) : (((/* implicit */unsigned long long int) max(((+(var_2))), (((/* implicit */long long int) min((var_15), (((/* implicit */unsigned short) var_5))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))))), (max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_11))))));
        var_21 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
    }
    for (long long int i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12)))));
        arr_8 [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_5)) ? (var_2) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_9))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_20 [i_2] [(unsigned short)19] = ((/* implicit */long long int) (+((-(min((var_17), (((/* implicit */unsigned long long int) var_18))))))));
                }
            } 
        } 
        arr_21 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_17)))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) var_18)))))))));
        arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) ? ((+(((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        var_24 = (+(((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))))));
        var_25 *= ((/* implicit */unsigned short) max(((((!(var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_18), (var_18))))) : (var_14))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_4))))))))));
    }
    var_26 = ((/* implicit */unsigned int) var_11);
}
