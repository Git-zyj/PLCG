/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97037
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
    var_11 = ((/* implicit */unsigned long long int) var_1);
    var_12 = ((/* implicit */unsigned long long int) var_0);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))), (var_5)));
        var_14 = ((/* implicit */unsigned short) var_5);
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)))));
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
        }
        for (short i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
        {
            arr_11 [i_3] = ((/* implicit */_Bool) min(((-(((var_2) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) var_7))))))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_7))))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))))))));
            var_17 = max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) var_10);
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_3)))) : (((/* implicit */int) var_0)))))))));
                var_20 = ((/* implicit */unsigned short) (((!(var_0))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_7))));
            }
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_7))))));
                var_22 = ((/* implicit */unsigned short) var_7);
            }
        }
        for (short i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_1)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))))));
            var_24 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : (max((((/* implicit */int) var_10)), (var_1)))))));
        }
        var_25 = ((/* implicit */short) max((min((var_6), (((/* implicit */signed char) var_10)))), (((/* implicit */signed char) var_2))));
        var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_4)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9))))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 9; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 6; i_8 += 2) 
            {
                {
                    var_27 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((var_1), (((/* implicit */int) var_2)))) : (((/* implicit */int) var_9))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_9))))));
                    var_28 = ((/* implicit */unsigned short) var_7);
                    arr_24 [i_1] [i_7] [i_8 - 1] [i_8] = ((/* implicit */unsigned char) var_5);
                    var_29 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
    {
        arr_28 [i_9] = ((/* implicit */int) ((var_0) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
        var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
        var_31 = ((/* implicit */_Bool) var_9);
    }
}
