/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69890
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(signed char)19] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-51))))) && ((_Bool)1)));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */int) (_Bool)0)) + (var_7))) : (((/* implicit */int) (_Bool)1))))) ? ((-((((_Bool)1) ? (var_10) : (((/* implicit */int) (unsigned char)229)))))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) (signed char)(-127 - 1));
                    var_20 = ((/* implicit */unsigned short) (_Bool)0);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [(_Bool)1] [i_5])) / (((((/* implicit */_Bool) -24)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_8 [i_0] [i_5] [i_0] [i_0] [i_5] [i_0]))))));
            var_23 = ((/* implicit */short) (+(((((/* implicit */int) arr_16 [i_0] [5])) & (((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)59)), ((-(((/* implicit */int) arr_19 [i_0] [(signed char)1]))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)23646)))))));
            arr_22 [i_6] = ((/* implicit */signed char) ((3692721333U) > (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_8 [i_6] [i_6] [i_6 + 1] [i_6] [i_0] [i_0])))))))));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_25 = ((/* implicit */signed char) (+(((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)79)) : (-24)))) : (3692721333U)))));
                var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_6 + 2] [i_6 - 1]))))));
                arr_25 [i_7] [i_0] [i_6] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_7]))))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_10 [20] [i_6 + 2] [20] [20])))) : ((((+(((/* implicit */int) arr_24 [i_0] [i_7] [i_0])))) + ((+(((/* implicit */int) (unsigned short)6590))))))));
                arr_26 [i_0] [i_7] [i_0] [i_0] |= ((/* implicit */unsigned int) (+(max((((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_8 [i_0] [i_6] [i_7] [i_0] [(unsigned char)3] [i_6])))), (((((/* implicit */_Bool) 134216704)) ? (((/* implicit */int) arr_4 [(unsigned char)7] [i_6])) : (var_5)))))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (!(((((((/* implicit */_Bool) (signed char)13)) || (((/* implicit */_Bool) var_11)))) || ((((_Bool)1) && (var_0))))))))));
            }
            for (int i_8 = 1; i_8 < 22; i_8 += 4) 
            {
                var_28 = ((/* implicit */int) min((var_28), ((+(((/* implicit */int) arr_6 [i_0] [(unsigned char)0] [5U]))))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_29 *= ((/* implicit */signed char) var_2);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)31)) >> (((((/* implicit */int) (unsigned char)234)) - (226)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)0)) : ((~(((/* implicit */int) var_9))))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [(unsigned short)18]))) | (var_17)))))));
                            arr_36 [i_6] [i_9] = (!(((/* implicit */_Bool) max((arr_9 [i_6 - 1] [i_6 + 1] [i_8 - 1] [i_8 + 1]), (((/* implicit */int) var_13))))));
                            var_31 = ((/* implicit */signed char) arr_29 [i_8] [i_10]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    arr_40 [i_0] [i_6] [i_6] [i_6] [i_8] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((-73188620) > ((-(((/* implicit */int) arr_24 [(signed char)15] [i_6] [i_8 - 1])))))))));
                    arr_41 [2U] [i_6] [2U] [2U] [i_6] [i_6] |= ((/* implicit */_Bool) arr_4 [(unsigned char)11] [i_8]);
                }
            }
        }
        for (short i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_13 [i_12] [i_12] [i_12] [(_Bool)1] [(unsigned char)18] [(unsigned char)8] [(unsigned char)8])) : (((/* implicit */int) (unsigned char)46))))))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-733846112)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_12] [i_12]))) : (arr_32 [i_0] [i_0] [i_0] [i_12] [i_0] [i_0])));
            arr_45 [i_0] [i_0] [i_12] = (~(((/* implicit */int) arr_1 [i_0] [i_0])));
            arr_46 [(signed char)0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) -733846112)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)64)))))));
        }
        arr_47 [i_0] = ((/* implicit */int) ((((((((/* implicit */int) (signed char)-24)) > (((/* implicit */int) (signed char)67)))) ? ((+(((/* implicit */int) arr_28 [i_0] [i_0] [(unsigned short)7])))) : ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) <= ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_0])))))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_34 *= ((/* implicit */unsigned char) 2604634624U);
        /* LoopSeq 1 */
        for (unsigned char i_14 = 3; i_14 < 21; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 22; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)63))))) ? (((/* implicit */int) arr_42 [i_14 - 1] [i_15 - 1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) var_6)) : (((arr_6 [i_14 + 2] [i_14 + 1] [i_14 + 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))))));
                        var_36 |= ((/* implicit */signed char) (((-(((((/* implicit */int) (short)22179)) * (((/* implicit */int) (_Bool)1)))))) & ((((-(((/* implicit */int) (signed char)-121)))) / (arr_14 [17LL] [17LL])))));
                        var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)238)) ? (var_17) : (var_17)))))) ? (((/* implicit */unsigned int) 131071)) : (((1055672836U) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)63)))))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_13] [i_14 - 2])))))));
        }
        arr_57 [i_13] = (-((+(((/* implicit */int) (signed char)105)))));
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_11 [i_13])))))))));
        var_40 = ((/* implicit */int) arr_49 [i_13] [i_13]);
    }
    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (+(((/* implicit */int) ((var_15) < (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
    var_42 = (~(((((/* implicit */int) var_11)) * (((/* implicit */int) var_14)))));
}
