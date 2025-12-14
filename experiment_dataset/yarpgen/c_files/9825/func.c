/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9825
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) 807382918)) ? (-1025593074) : (((/* implicit */int) var_14)))))), (max((((var_5) & (((/* implicit */int) var_11)))), (((/* implicit */int) var_8))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            arr_13 [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))));
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                            var_17 = ((/* implicit */int) var_8);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (807382896)))) ? (((/* implicit */int) var_8)) : (((var_12) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_15))))) : (var_1)));
                        }
                        var_20 += ((/* implicit */int) (unsigned char)248);
                    }
                    for (unsigned short i_6 = 2; i_6 < 8; i_6 += 2) 
                    {
                        arr_22 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) var_2)) != (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) == ((-(((/* implicit */int) var_12))))));
                        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                        arr_23 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -807382918))))) : (((((/* implicit */_Bool) -807382918)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)32767))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((int) (short)19719)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)127)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 7; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_1))) && (((/* implicit */_Bool) 6802633290480266567LL))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)19719)))) : (var_4))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */int) var_10))));
                        arr_28 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -1798414693))));
                        var_25 *= ((/* implicit */long long int) ((unsigned char) var_12));
                    }
                    var_26 = (+(((/* implicit */int) ((signed char) var_5))));
                    var_27 = ((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_15))))) << (((((/* implicit */int) min((((/* implicit */short) var_12)), (var_8)))) + (7637))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_9 = 3; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        var_28 &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!((_Bool)1))))));
                        var_30 = (!(((/* implicit */_Bool) var_8)));
                    }
                    for (signed char i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)127)))) >= (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7))))))))));
                        var_32 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-729384927), (1798414693)))) ? (-1059174814) : (((-1798414677) - (((/* implicit */int) var_11))))))) || (((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) - (((/* implicit */int) var_10))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (((+(((/* implicit */int) ((unsigned char) var_5))))) - (var_6))))));
                        arr_36 [i_10] [i_10] [i_10] [i_10 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_10)))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) max((var_15), (var_8))))))) ? (((/* implicit */int) ((var_1) != (((int) var_9))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15))))));
                    }
                    for (int i_11 = 2; i_11 < 9; i_11 += 3) 
                    {
                        var_34 |= ((/* implicit */int) (signed char)-28);
                        arr_39 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_4))))));
                    }
                }
            } 
        } 
    } 
    var_35 = ((var_4) | (((/* implicit */int) var_15)));
    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((int) var_13)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)83)) : (var_2)))) ? (var_3) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
}
