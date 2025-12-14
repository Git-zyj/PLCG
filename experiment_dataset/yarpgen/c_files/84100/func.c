/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84100
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-((-((-(((/* implicit */int) var_7))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((-(var_0)))))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_11)))) ? (var_12) : (min((((/* implicit */unsigned long long int) var_11)), (var_6)))));
            var_22 ^= ((/* implicit */unsigned char) (~(var_1)));
        }
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_10) : ((~(var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_7))))) : (var_1))))));
            arr_9 [i_2 + 1] [i_2] [(_Bool)0] = (+((~((~(((/* implicit */int) (short)15835)))))));
            var_24 = (~(var_12));
        }
        arr_10 [0ULL] = (+(max((var_14), (((/* implicit */unsigned int) var_4)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) min((((/* implicit */signed char) var_5)), (var_15)))) ? ((-(((/* implicit */int) var_8)))) : (min((((/* implicit */int) var_17)), (var_0)))))));
                arr_18 [i_0] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    arr_22 [(short)11] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_5);
                    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_10) : (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_27 = var_9;
                        arr_25 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
                    }
                }
                var_28 = ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28725))) : (13U))), (((/* implicit */unsigned int) max((var_7), (var_7)))))))));
            }
            for (short i_7 = 3; i_7 < 13; i_7 += 4) 
            {
                arr_29 [3] [i_3] [i_3] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)2))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : ((~(3537277397826491942ULL))));
                arr_30 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) (!(var_5)));
                arr_31 [i_7] [i_7] [i_7 - 3] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)91))))));
                var_29 -= (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_18))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_0)) : (var_1)));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        var_31 = ((((/* implicit */_Bool) (unsigned char)91)) ? (5717604212671708286ULL) : (((/* implicit */unsigned long long int) 13U)));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_14)) : (var_18)));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_10)));
                        arr_36 [i_8] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_13))))));
                    }
                    for (short i_10 = 2; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                        var_35 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_13))))));
                        arr_41 [i_8] [i_3 - 2] = ((/* implicit */int) var_13);
                    }
                    for (short i_11 = 2; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        var_36 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        arr_45 [i_0] [i_8] [i_3] [(_Bool)1] [i_8] [i_0] = ((/* implicit */signed char) (+(var_6)));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) var_3))));
                        var_38 = ((/* implicit */short) var_0);
                        var_39 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (var_6)));
                    }
                    var_40 = ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned char)102))))));
                    arr_46 [i_0] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) (-(var_6)));
                }
                for (unsigned char i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_10)))))))));
                        arr_53 [i_0] [i_0] [i_0] [i_13] [(unsigned char)3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                    }
                    var_42 = var_17;
                    var_43 = ((/* implicit */int) var_6);
                }
            }
            var_44 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))))), (min((var_6), (((/* implicit */unsigned long long int) var_4))))))));
        }
        arr_54 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)6))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            var_45 = (+(var_12));
            arr_61 [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_16))))))))));
            arr_62 [i_14] [i_14 - 1] [i_14] = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19))))) : ((-(var_18)))))));
            var_46 ^= ((/* implicit */short) max(((-((-(((/* implicit */int) var_9)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)10))))))))));
        }
        arr_63 [i_14] [i_14] = ((/* implicit */int) max(((~((~(var_1))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_8)))))))));
        arr_64 [i_14] = ((/* implicit */_Bool) (~(var_14)));
    }
    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 3) 
    {
        arr_67 [i_16] [(signed char)4] = ((/* implicit */unsigned short) max((var_11), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
        arr_68 [i_16] = ((/* implicit */long long int) (+((((_Bool)0) ? (((/* implicit */int) (unsigned short)6370)) : (((/* implicit */int) (_Bool)1))))));
    }
}
