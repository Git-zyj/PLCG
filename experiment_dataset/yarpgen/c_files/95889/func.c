/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95889
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (short)11216))));
    var_18 = ((/* implicit */signed char) var_1);
    var_19 = ((/* implicit */unsigned int) var_6);
    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)(-32767 - 1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) var_9);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    {
                        var_22 = ((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (short)5710))))) * (((/* implicit */int) var_13)));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            arr_14 [i_2] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2 + 1] [i_3])) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_3]))));
                            arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */int) (signed char)43);
                            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (short)11216))));
                        }
                    }
                } 
            } 
            arr_17 [i_0] = arr_4 [i_0 - 1] [i_1 + 2];
            var_23 = (-(((/* implicit */int) var_13)));
        }
        for (int i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
        {
            var_24 -= ((/* implicit */int) var_6);
            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 8184U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_16)))));
        }
        arr_20 [i_0] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        arr_21 [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)49))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            for (unsigned char i_7 = 2; i_7 < 10; i_7 += 1) 
            {
                for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_31 [i_0] [i_0] [i_7 - 2] [i_0] [i_8 - 1] = ((/* implicit */unsigned long long int) (+(arr_5 [i_0 + 1] [i_0 + 1])));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)51)) == (737318403)));
                        arr_32 [i_0] [(short)7] [i_0] [i_0] [i_7] [i_8] = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
                        arr_33 [i_0] [i_6 + 2] [(short)11] [i_6 + 2] [i_6 + 2] [i_6 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_2))));
                        var_27 = ((/* implicit */unsigned char) ((var_1) % (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))))) >> ((((-(4779789734457849181ULL))) - (13666954339251702417ULL))))))));
        var_29 *= ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10));
    }
}
