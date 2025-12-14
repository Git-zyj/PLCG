/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92059
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_5)))))));
    var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min((((/* implicit */unsigned char) var_14)), (var_7))), (((/* implicit */unsigned char) max((var_14), (var_14))))))) & ((((-(((/* implicit */int) var_2)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_3)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_18)))) != (((/* implicit */int) var_11)))) ? (((((/* implicit */int) max((var_8), (var_13)))) % (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_15))))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_0 + 1] [(short)6] [i_2] [i_3] = ((/* implicit */unsigned int) var_0);
                        arr_11 [i_0] [i_0] [i_0 - 1] [i_1] = ((/* implicit */long long int) var_9);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), (var_2)))) ? (((/* implicit */unsigned int) ((var_19) | (((/* implicit */int) var_13))))) : ((+(var_6))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)215))))))))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) var_4);
    }
    for (short i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_23 [i_4 - 1] [i_4] [(signed char)8] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_5), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (var_16)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (signed char)-32)) / (((/* implicit */int) (signed char)32)))))))));
                        var_25 = ((/* implicit */signed char) var_19);
                        var_26 = ((/* implicit */short) var_14);
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_5)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_10))))))));
                            arr_27 [i_4] [i_5 + 2] [i_6] [i_4] [i_4] = ((/* implicit */_Bool) var_6);
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-2573)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (signed char)32)))), ((((-(((/* implicit */int) var_11)))) ^ (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_15))))))))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    {
                        arr_40 [i_9] [i_9] [i_10] [i_9] [i_12] = ((/* implicit */_Bool) max((min((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_17))))), ((~(((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((var_4), (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_10))))))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_7))))))) ? (((/* implicit */int) max(((unsigned short)57570), (((/* implicit */unsigned short) (signed char)-33))))) : (((/* implicit */int) min((max((((/* implicit */unsigned char) var_0)), (var_2))), (var_2))))));
                    }
                } 
            } 
            var_30 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_14))))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))))))) | (((/* implicit */int) var_8)));
        }
        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(var_4)))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (min((var_3), (((/* implicit */unsigned long long int) var_18))))))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    {
                        arr_48 [i_9] [i_9] [i_9] [8U] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_17))))) * (var_5)));
                        var_32 = ((var_19) | (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_10))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_12), (((/* implicit */signed char) var_8))))) == (((/* implicit */int) var_18))));
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */signed char) var_13)), (var_1)))), (min((var_10), (((/* implicit */unsigned short) var_17))))))) ? (((/* implicit */unsigned long long int) (((-2147483647 - 1)) & (((/* implicit */int) (signed char)32))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) | (var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_15)))))))))))));
                arr_53 [i_9] [i_9] [i_13] = ((/* implicit */short) (-(max((var_3), (((/* implicit */unsigned long long int) var_14))))));
            }
            for (short i_17 = 2; i_17 < 20; i_17 += 1) 
            {
                arr_56 [i_9] [i_13] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) min((var_2), (var_7)))) : (((/* implicit */int) min((((/* implicit */short) var_13)), (var_11)))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                arr_57 [i_17] [14U] [i_17] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_13)), (var_16)))) ? (((((/* implicit */int) var_8)) - (var_19))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_2)))) : (max((((/* implicit */int) max(((unsigned char)206), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))), (((((/* implicit */int) var_18)) / (((/* implicit */int) var_11))))))));
                var_35 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_6)))) ? (((/* implicit */int) max((((/* implicit */short) var_13)), (var_11)))) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)127)) : (63)))));
            }
            for (short i_18 = 1; i_18 < 19; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned char i_20 = 1; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) max((var_9), (var_9)));
                            arr_65 [i_13] [i_13] [i_18] [i_13] [i_19] [i_13] = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) var_6)), (var_3))), (((/* implicit */unsigned long long int) max((var_1), (var_12)))))), (((((/* implicit */_Bool) var_19)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            arr_66 [i_9] [i_9] [i_9] [i_9] [i_13] [5U] = ((/* implicit */unsigned int) var_17);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_21 = 3; i_21 < 20; i_21 += 1) 
                {
                    for (unsigned char i_22 = 4; i_22 < 20; i_22 += 1) 
                    {
                        {
                            arr_74 [i_9] [i_13] [i_18] [i_21 - 3] [20ULL] [i_13] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)0)));
                            var_37 = ((/* implicit */short) ((((/* implicit */int) (signed char)32)) << (((/* implicit */int) (_Bool)0))));
                            var_38 = ((/* implicit */short) var_8);
                            arr_75 [i_9] [i_13] [i_18] [i_21] [i_22] = ((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)7965))));
                            var_39 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) min((((/* implicit */short) var_14)), (var_11)))) : ((~(var_4)))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)))))));
                /* LoopNest 2 */
                for (signed char i_23 = 3; i_23 < 19; i_23 += 1) 
                {
                    for (short i_24 = 0; i_24 < 21; i_24 += 1) 
                    {
                        {
                            arr_81 [i_13] [i_13] [i_13] [i_18] [i_23 + 2] [i_24] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_12)))))))));
                            var_41 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_18))))), (var_5)))));
                            var_42 ^= ((/* implicit */signed char) max((min((((/* implicit */int) var_15)), (var_4))), (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_14)))))));
                            var_43 = ((/* implicit */unsigned char) max((min((((/* implicit */short) var_12)), (max((var_16), (((/* implicit */short) var_12)))))), (((/* implicit */short) ((min((var_3), (((/* implicit */unsigned long long int) var_8)))) == ((+(var_5))))))));
                            var_44 -= ((/* implicit */short) min((((((((/* implicit */int) var_8)) | (((/* implicit */int) var_13)))) * (((/* implicit */int) var_10)))), (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            }
        }
        var_45 = var_15;
    }
}
