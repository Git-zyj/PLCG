/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96568
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (4222981193U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) || (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((var_2) << (((/* implicit */int) var_14))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((var_3), (((/* implicit */signed char) var_5)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_13))) ^ (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))) : (((var_0) << (((var_2) - (2103473421U)))))))));
        arr_3 [(unsigned char)12] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-108)) >= (((/* implicit */int) (unsigned char)110))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))) ? ((~(((/* implicit */int) (unsigned short)18101)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (var_8))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_17 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_6))) == (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-82)))))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) max(((unsigned char)115), ((unsigned char)148)))) : (((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (unsigned short)56621)) : (((/* implicit */int) (unsigned char)107)))))))))));
            var_19 |= ((/* implicit */signed char) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_4)))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max((var_3), (var_3)));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 4; i_5 < 15; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_5)) - (((/* implicit */int) var_3)))))) : (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))))))))));
                        var_21 += ((/* implicit */unsigned short) var_0);
                        var_22 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (((unsigned int) var_9))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        arr_22 [i_2] [i_3] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) ((unsigned char) var_11))) - (233)))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_8))));
                            var_24 = ((/* implicit */unsigned char) ((((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6))) << (((((/* implicit */int) ((unsigned char) var_1))) - (37)))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))) ? (((((/* implicit */_Bool) (signed char)-59)) ? (8533499U) : (1707066128U))) : (var_2)));
                        }
                        arr_25 [i_2] = ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
                        var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10))));
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_29 [i_2] [i_2] [(signed char)14] [(unsigned short)9] [i_4] [i_8] = max((var_0), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_6))) < (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))))));
                        var_28 &= min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))) : (2133109921U))));
                    }
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_29 -= ((/* implicit */_Bool) var_13);
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (min((((/* implicit */unsigned int) var_12)), (var_2)))))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) var_4))))));
                        arr_32 [i_2] [i_2] = ((/* implicit */unsigned int) (!(var_5)));
                    }
                    var_32 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))));
                }
            } 
        } 
        var_33 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (unsigned char)70)))), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)40))) != (((/* implicit */int) (unsigned char)165)))))));
        arr_33 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_0)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (min((((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2))), (((/* implicit */unsigned int) var_13)))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    }
}
