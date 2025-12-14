/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9672
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
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (arr_5 [i_0] [i_0] [i_0])))) ? ((+(((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) (short)-24725))))))))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)14)))))));
        }
        for (int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            var_22 *= ((/* implicit */unsigned char) (_Bool)1);
            arr_10 [i_0] [i_0 + 4] = ((/* implicit */_Bool) min((arr_6 [i_0] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((signed char) var_18))))))));
        }
        var_23 -= ((/* implicit */_Bool) 620153886U);
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_24 |= ((/* implicit */short) arr_7 [i_0] [i_0 - 2]);
            arr_14 [(unsigned short)12] [i_3] [(unsigned short)12] = ((/* implicit */unsigned long long int) var_6);
            var_25 = ((/* implicit */short) arr_13 [i_0 + 2] [i_3]);
        }
        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_0] [i_0] [(unsigned short)20] [5LL] = ((/* implicit */signed char) arr_3 [i_0] [i_4]);
                    var_26 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), ((-(((arr_5 [i_0] [i_0] [i_0]) / (((/* implicit */int) (_Bool)1))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) * ((+(((/* implicit */int) var_12)))))) & (((/* implicit */int) ((unsigned short) (signed char)-22)))));
                    var_28 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                }
                arr_27 [(unsigned short)9] [i_4] = ((/* implicit */_Bool) ((long long int) ((long long int) ((short) arr_16 [i_5] [i_0] [i_0]))));
                var_29 -= ((((/* implicit */unsigned int) ((min((((/* implicit */int) (_Bool)1)), (var_16))) ^ (((/* implicit */int) var_3))))) + (min(((~(var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (var_10)))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 4; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_30 = ((signed char) min((arr_29 [i_9 - 1] [i_9 - 2] [(_Bool)1] [(_Bool)1] [i_9 - 4]), (((/* implicit */unsigned short) (unsigned char)44))));
                            arr_35 [i_0] [i_0] [i_9] [12] [i_8] [i_9] = ((/* implicit */signed char) (~(arr_34 [i_0] [i_0])));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)57342)))))));
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_38 [i_0 + 2] = ((/* implicit */unsigned long long int) var_19);
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 20; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            var_32 += ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (((long long int) arr_7 [i_0 - 1] [i_11 + 1]))));
                            arr_46 [i_0] [i_4] [20U] [i_0] [i_11] [i_11] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)8193)) ? (((((/* implicit */int) arr_3 [i_0] [11U])) - (((/* implicit */int) var_18)))) : (min((arr_21 [i_11] [i_4] [i_10]), (((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            }
            var_33 = ((/* implicit */_Bool) var_19);
            arr_47 [i_0] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) max((min((arr_34 [i_0 + 4] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11452693319088415751ULL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | ((-(((/* implicit */int) var_18)))))))));
            /* LoopSeq 1 */
            for (int i_13 = 1; i_13 < 19; i_13 += 4) 
            {
                var_34 += ((/* implicit */long long int) var_0);
                arr_50 [(unsigned short)13] [(unsigned short)1] [i_0 + 4] [(unsigned short)13] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31555)) / (((/* implicit */int) (_Bool)1))))) ? ((+(11452693319088415751ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1596)))))))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_13] [i_13 + 2] [i_4] [i_0 + 4])))))));
            }
            arr_51 [i_0] [i_4] = (!(((((/* implicit */int) arr_48 [i_4] [i_0 + 1])) < (arr_17 [i_0] [i_0 + 4] [i_0 - 2]))));
        }
        for (signed char i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) (((+(arr_26 [(unsigned short)14] [i_0] [i_14] [i_0 + 1] [i_0]))) / (((((/* implicit */_Bool) var_14)) ? (((int) arr_53 [i_0])) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_14]))))));
            var_36 = ((/* implicit */unsigned char) var_11);
        }
        for (signed char i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
        {
            arr_56 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
            arr_57 [i_0 + 4] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) ^ (((var_1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0 + 1] [i_0] [i_0])))))));
            var_37 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_0] [i_15] [i_0 + 4] [i_0 - 2]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_28 [i_0] [8U] [i_0 + 1] [i_15] [i_0])))) >> (((min((((var_2) ? (11452693319088415751ULL) : (((/* implicit */unsigned long long int) arr_26 [i_15] [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */unsigned long long int) max((arr_44 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0]), (((/* implicit */unsigned short) var_18))))))) - (43943ULL)))));
        }
    }
    var_38 = var_2;
    var_39 -= ((/* implicit */int) ((signed char) var_6));
}
