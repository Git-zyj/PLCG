/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95006
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_8)))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_20 *= ((var_8) || (((/* implicit */_Bool) var_0)));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) : (var_18)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (var_9)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min((var_16), (var_11)))))))));
            arr_6 [i_0] [2ULL] [18ULL] = ((/* implicit */signed char) var_4);
        }
        for (int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            arr_10 [(unsigned short)12] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min((var_13), (((/* implicit */short) var_10))))))), (var_0)));
            arr_11 [2U] [2U] |= ((/* implicit */unsigned char) var_13);
            var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_18))))))));
            var_23 = ((/* implicit */unsigned long long int) ((var_4) >> (((/* implicit */int) max((((/* implicit */short) var_8)), (var_13))))));
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_16)))))), (var_17))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((((((/* implicit */int) var_2)) + (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))));
        }
        for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_16), (((/* implicit */unsigned char) var_12))))) < (((/* implicit */int) ((((var_17) - (((/* implicit */int) var_1)))) != (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_8)))))))))))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                var_27 ^= ((/* implicit */unsigned short) var_11);
                var_28 |= ((/* implicit */int) ((((var_18) & (((/* implicit */long long int) var_0)))) | (((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_1)))))));
            }
            for (short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (short i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_29 |= ((/* implicit */unsigned short) var_12);
                            var_30 = ((/* implicit */int) min((var_30), (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (var_4))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_3)))))))));
                        }
                    } 
                } 
                var_31 += ((/* implicit */unsigned char) min((max((var_4), (((/* implicit */int) var_12)))), (((((/* implicit */int) var_1)) >> (((var_17) - (895634790)))))));
            }
            /* LoopSeq 3 */
            for (signed char i_9 = 3; i_9 < 17; i_9 += 2) 
            {
                var_32 -= ((/* implicit */int) max((var_18), (((/* implicit */long long int) min((var_4), (((/* implicit */int) var_10)))))));
                var_33 = ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (var_17))) / (((var_0) / (var_17))));
                arr_28 [i_0] [i_4] [i_9] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_1)), (var_5))), (max((var_6), (((/* implicit */unsigned long long int) var_10))))));
                arr_29 [i_0] [i_0] [i_9] [i_9 - 1] = ((/* implicit */unsigned int) max((min((min((var_9), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))));
                var_34 += var_9;
            }
            /* vectorizable */
            for (short i_10 = 1; i_10 < 20; i_10 += 3) 
            {
                arr_32 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_3))));
                var_35 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
                var_36 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)));
            }
            for (int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) min((min((var_6), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) var_17)))))));
                arr_37 [i_0] [(_Bool)1] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_4)))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((var_4) >= (((/* implicit */int) var_2)))))));
                var_38 = ((/* implicit */short) var_4);
            }
            var_39 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (var_17)))) : (var_18)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_14)) % (((/* implicit */int) var_1)))));
        }
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_14)), (var_9))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (var_5)))))))));
    }
    var_41 += ((/* implicit */int) var_6);
}
