/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93881
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
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) var_11);
                var_16 = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
                var_17 = ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)17676)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) var_9);
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((int) var_7));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (short i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (short)17665);
                        var_20 = ((/* implicit */short) ((1291511116) >> (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) + (var_1)))))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_9))));
                            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((signed char) arr_12 [(unsigned short)8])))) ? (((/* implicit */int) arr_11 [(unsigned short)4])) : (((/* implicit */int) var_3))));
                            var_23 *= ((/* implicit */unsigned long long int) (~(arr_15 [i_2] [i_3] [i_2] [i_5 + 1] [i_6 + 1] [(_Bool)1])));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) ((int) (+(2808803433697203664ULL))));
                            var_25 -= ((/* implicit */short) ((long long int) ((int) min((((/* implicit */unsigned long long int) var_5)), (15637940640012347952ULL)))));
                            arr_22 [i_2] [i_4] [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_12)) < (((((/* implicit */_Bool) var_13)) ? (15637940640012347952ULL) : (var_4))))));
                        }
                    }
                } 
            } 
        }
        arr_23 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((((/* implicit */_Bool) (short)-17676)) || (((/* implicit */_Bool) var_0))))))), (var_1)));
    }
    for (int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        var_26 ^= ((/* implicit */unsigned int) ((unsigned char) (short)-17699));
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) ((((int) ((unsigned long long int) (signed char)-70))) ^ (((((/* implicit */_Bool) arr_24 [i_9])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_10))))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 379459590U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-17676)))));
            var_29 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
        }
        for (int i_10 = 1; i_10 < 15; i_10 += 3) 
        {
            arr_34 [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1116892707587883008LL)) ? (var_12) : (((/* implicit */int) (signed char)8)))))))) > ((+(((arr_30 [i_10]) << (((arr_30 [i_10]) - (775988250)))))))));
            var_30 = ((/* implicit */unsigned short) ((int) (short)22835));
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_3))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) (short)17676)) % (((((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) var_2))))) - (arr_31 [i_8])))));
        }
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) ((unsigned short) (short)2936));
            arr_37 [i_11] [i_8] [i_11] = ((((/* implicit */_Bool) ((unsigned short) (short)-2928))) ? (var_9) : (max(((+(((/* implicit */int) var_6)))), (65535))));
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_27 [i_8] [i_11]))));
            arr_38 [i_11] [i_11] [i_8] = ((/* implicit */unsigned long long int) var_9);
        }
    }
    var_35 = ((/* implicit */unsigned int) max(((-(var_8))), (((/* implicit */int) var_10))));
}
