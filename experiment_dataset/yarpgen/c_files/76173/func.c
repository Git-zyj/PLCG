/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76173
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
    var_19 &= ((/* implicit */unsigned char) (+(-4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (-((~((-(arr_3 [i_1] [(unsigned char)2])))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned char) ((((min((((/* implicit */int) arr_5 [i_2])), (-59878606))) + (2147483647))) << ((((~(arr_2 [i_0]))) - (926254852)))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] [i_3] = arr_10 [i_0] [i_0] [i_0 - 3];
                    arr_13 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned short)4] [i_1])) ? ((~(((/* implicit */int) (unsigned char)9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    var_21 = ((/* implicit */int) ((min((((((/* implicit */_Bool) (unsigned short)22208)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_1 [i_3] [i_0])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)22208)) : (((/* implicit */int) (unsigned char)89)))))) <= ((((~(var_15))) - ((~(((/* implicit */int) (unsigned char)114))))))));
                    arr_14 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_8 [i_3] [i_1 + 1] [i_0 - 2] [i_1 - 1]), (((/* implicit */unsigned short) (unsigned char)136)))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_6 = 2; i_6 < 10; i_6 += 3) 
                            {
                                var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_4 + 1] [i_5 + 3] [i_6 + 1] [i_6]))));
                                arr_22 [(unsigned char)2] [i_1] [i_4] [i_5] [i_5] [(unsigned char)10] &= ((/* implicit */int) (unsigned char)114);
                                var_23 = ((unsigned char) (unsigned char)117);
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (arr_0 [i_4]) : (((((/* implicit */int) arr_6 [i_0] [i_1] [i_4])) - (-592883031))))))));
                                var_25 = ((/* implicit */unsigned char) var_5);
                            }
                            for (int i_7 = 2; i_7 < 8; i_7 += 1) 
                            {
                                var_26 += min((((((/* implicit */int) arr_23 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5])) % (((((/* implicit */_Bool) arr_11 [(unsigned short)10] [i_5] [i_1] [(unsigned short)10])) ? (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [(unsigned char)10] [i_5 - 1] [i_5] [i_7] [i_7])) : (528482304))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_10 [i_1] [(unsigned char)4] [i_7])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0 - 1])) < (((/* implicit */int) (unsigned char)178))))))));
                                var_27 = ((/* implicit */int) ((unsigned short) ((min((((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_7])), (592883002))) <= (((/* implicit */int) (unsigned char)178)))));
                            }
                            var_28 = ((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (min((arr_2 [i_5 + 2]), (((/* implicit */int) arr_19 [i_0 + 2] [i_5] [i_4 - 1])))) : (max((arr_2 [i_5 - 1]), (((/* implicit */int) arr_11 [i_5] [i_5] [i_5 - 1] [i_5 + 3])))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -960408924)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (unsigned short)65535)))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)51)) ? (-592883045) : (-592883045)));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_16)))));
            }
        } 
    } 
}
