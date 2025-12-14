/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7131
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)69)) && (((/* implicit */_Bool) (unsigned short)8859))))), (max((var_11), (var_6))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)16), ((unsigned short)65495))))) | ((-(max((((/* implicit */unsigned int) var_2)), (var_9)))))));
            var_15 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)32078))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))));
            var_16 *= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_0)))))));
            arr_7 [i_0] = (!((!(((/* implicit */_Bool) var_5)))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    arr_17 [i_0] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11))));
                    var_17 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_7))));
                }
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) & (((/* implicit */int) var_8)))))));
                var_20 = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_13)) - (30973)))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_12)))))));
            }
            for (unsigned short i_5 = 3; i_5 < 9; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_22 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                    var_23 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_6))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_2] [i_0] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))));
                        var_24 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_25 |= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_13)))) > (((/* implicit */int) var_11))));
                        arr_27 [i_0] [i_7] = ((/* implicit */unsigned short) ((5277409684074844746ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))));
                        var_27 = ((/* implicit */unsigned char) var_11);
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                        arr_33 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_2))))));
                        var_28 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                        var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                    }
                }
                arr_34 [i_0] [i_2] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_12))));
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            arr_45 [i_2] [i_10] [i_11] [8U] [i_10] [i_10] [(unsigned short)10] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            arr_46 [i_0] [i_0] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7));
                        }
                    } 
                } 
            } 
            var_30 = (~((+(((/* implicit */int) var_8)))));
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
        }
        var_32 = var_11;
        arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)251)), ((unsigned short)65506)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    var_33 = ((/* implicit */unsigned short) min((var_33), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)60933)))));
    var_34 ^= ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) (unsigned short)65512)) && (((/* implicit */_Bool) (unsigned short)38)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) var_5))));
}
