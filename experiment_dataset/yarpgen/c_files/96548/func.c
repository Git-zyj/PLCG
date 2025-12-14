/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96548
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) * (67108863ULL)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)6643)) && (((/* implicit */_Bool) ((signed char) min(((signed char)54), (((/* implicit */signed char) arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) 18446744073642442745ULL);
    }
    for (signed char i_1 = 4; i_1 < 8; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (signed char)92))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((var_0) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (unsigned char)105)))), (((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 8; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */short) arr_12 [i_2] [i_3])), (var_4)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)6643)) : (((((/* implicit */int) (unsigned short)20810)) * (((/* implicit */int) (signed char)-1))))))));
                        arr_15 [i_1] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)20802))))) ? (((/* implicit */int) ((short) (signed char)1))) : ((+(((/* implicit */int) (signed char)127))))));
                        arr_16 [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))), ((_Bool)1)))), (min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_1)))), (min(((unsigned char)16), (((/* implicit */unsigned char) var_14))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) max((var_22), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */signed char) var_14)), ((signed char)103)))))));
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((67108863ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)16)))))))));
            var_24 += ((/* implicit */_Bool) min((arr_11 [(unsigned short)6] [i_1] [i_1 - 2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)96)))))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
            {
                arr_24 [(signed char)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)188)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) >= (((((/* implicit */int) (unsigned char)151)) * (((/* implicit */int) (_Bool)1)))))))));
                var_25 ^= (_Bool)0;
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_8 = 1; i_8 < 8; i_8 += 1) /* same iter space */
                {
                    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-31370)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_32 [i_1] [i_5] [i_5] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14473168769376204169ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_33 [i_1] [(signed char)5] = ((/* implicit */_Bool) var_1);
                    }
                }
                for (signed char i_10 = 1; i_10 < 8; i_10 += 1) /* same iter space */
                {
                    arr_36 [i_1 - 3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1])) && (((/* implicit */_Bool) (unsigned char)163))));
                    var_27 -= ((/* implicit */signed char) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_11 [(signed char)2] [i_1 - 4] [i_1 - 1]))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 7; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-15316))));
                        var_29 |= ((short) arr_31 [i_1 + 1] [i_1 - 4] [i_1] [(signed char)2] [i_1 - 3]);
                    }
                    arr_39 [i_1] = (!(((/* implicit */_Bool) arr_31 [(unsigned short)1] [(unsigned short)1] [i_5] [i_1] [i_5])));
                }
                for (signed char i_12 = 1; i_12 < 8; i_12 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(((/* implicit */int) (short)15315)))))));
                    arr_43 [i_1] [i_1] [i_12] [i_7] = (short)-15316;
                }
                var_31 = arr_18 [i_1 - 3] [i_1];
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_5] [i_1 + 2] [i_1 + 2] [i_1 + 3])) >= ((+(((/* implicit */int) var_4)))))))));
                var_33 = ((/* implicit */signed char) min((var_33), (arr_35 [i_1] [i_1 - 1] [i_7] [i_1])));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_47 [i_1] [i_1] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2]))))));
            var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))), (((min((var_14), ((_Bool)1))) ? (((arr_44 [i_1] [0ULL] [i_13]) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-1)))) : ((-(((/* implicit */int) (_Bool)1))))))));
        }
    }
}
