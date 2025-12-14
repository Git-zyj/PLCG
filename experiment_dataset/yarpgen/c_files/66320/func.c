/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66320
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)1] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (((!(arr_0 [i_0 - 1] [i_0 - 1]))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */long long int) var_4);
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_1] [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2] [i_3]))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_3] = ((/* implicit */_Bool) (unsigned char)0);
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 987537775293988506ULL))));
                        arr_20 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) var_9))));
                    }
                    var_18 &= ((/* implicit */unsigned short) ((unsigned char) ((arr_14 [i_4] [i_4] [10ULL] [i_2] [i_1]) & (((/* implicit */int) arr_15 [0U] [i_4])))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((short) arr_8 [i_1])))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_5 [i_4] [i_1]))) * (var_1)));
                }
            }
            var_21 ^= var_8;
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_24 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) var_6);
                /* LoopSeq 4 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    arr_29 [i_1] [(_Bool)1] [(_Bool)1] [i_6] [(_Bool)1] = ((/* implicit */signed char) var_3);
                    var_22 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_9)))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_33 [i_1] [i_6] [i_8] = ((1073741823U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25734))));
                    arr_34 [11LL] [i_2] [i_6] [i_1] [i_6 + 1] = ((/* implicit */_Bool) ((int) arr_25 [i_1] [i_6 + 1] [i_6] [i_6]));
                    var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_6 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) arr_11 [i_8] [i_8]))));
                }
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        arr_39 [i_6] [i_6] [i_6] [i_6] [i_10 + 3] = ((/* implicit */unsigned long long int) ((arr_35 [i_6 + 1] [i_6 + 1] [i_6] [i_10 + 3] [i_2] [1ULL]) & (var_14)));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_28 [i_10] [i_10] [(unsigned short)12] [i_10 + 2] [i_10] [i_9])) : (((/* implicit */int) arr_28 [i_1] [i_2] [i_1] [i_10 + 2] [i_10] [i_10]))));
                        arr_40 [i_1] [i_9] [i_2] [i_6] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_2])) & (((/* implicit */int) var_6))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((33554424) % (((/* implicit */int) arr_26 [i_6] [i_1] [i_6 + 1] [i_10 + 3])))))));
                    }
                    arr_41 [i_9] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [5LL] [5LL] [i_6] [i_2] [i_2] [i_6 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_28 [i_6] [i_2] [i_6] [i_9] [i_1] [i_6 + 1]))));
                    arr_42 [i_1] [i_6] [(_Bool)1] = ((/* implicit */int) var_6);
                }
                for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_9))) % (((/* implicit */int) var_0))));
                        arr_49 [i_12] [i_2] [i_6 + 1] [i_11 + 2] [i_6] [12] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [0LL] [i_12 - 2] [i_12 - 2] [i_11 - 2] [i_6 + 1]))));
                        var_27 = ((/* implicit */unsigned long long int) (-(33554424)));
                    }
                    var_28 = ((/* implicit */short) ((arr_36 [i_6 + 1] [i_11 + 1] [i_11 - 3]) ? (var_11) : (var_7)));
                    var_29 *= ((((/* implicit */_Bool) arr_28 [i_1] [i_6 + 1] [i_6] [i_11 - 1] [i_1] [i_11])) ? (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) < (((/* implicit */int) var_6)))))));
                    arr_50 [i_6] = ((/* implicit */int) (~(arr_48 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                }
                arr_51 [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)102)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6 + 1] [i_6 + 1]))) : (((17459206298415563109ULL) - (var_7)))));
                var_30 = ((/* implicit */_Bool) min((var_30), (((var_13) < (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [9])))))));
            }
            var_31 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned char)0)))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_13 = 1; i_13 < 11; i_13 += 4) 
        {
            arr_54 [i_13 + 2] [i_13] = ((/* implicit */unsigned char) (unsigned short)3);
            arr_55 [i_13] = ((/* implicit */unsigned int) min((arr_44 [i_13 + 2] [i_13 + 2] [i_13 - 1] [0] [0LL]), (((/* implicit */unsigned long long int) ((_Bool) -3887160845444706059LL)))));
        }
        arr_56 [(short)1] [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)243)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) (_Bool)0))))))))));
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))))) % (((max((3887160845444706070LL), (((/* implicit */long long int) arr_46 [i_1] [i_1] [i_1] [i_1])))) / (((/* implicit */long long int) var_8)))))))));
    }
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_1))));
}
