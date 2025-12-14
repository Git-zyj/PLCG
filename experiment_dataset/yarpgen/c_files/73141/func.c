/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73141
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = (unsigned short)13;
        var_20 ^= ((/* implicit */unsigned short) var_17);
        arr_4 [i_0] &= ((/* implicit */_Bool) min((max((((/* implicit */int) (short)32760)), ((-(((/* implicit */int) var_5)))))), (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
        var_21 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] [(unsigned short)11] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_2]))));
            var_22 = ((/* implicit */long long int) arr_13 [i_3] [i_2] [i_2]);
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) var_5)), (arr_12 [i_2] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            arr_15 [i_3] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3]))));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_24 = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) + (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_15)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_11 [i_2]))))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_2] [i_4 + 1] [(_Bool)1]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                var_25 += ((/* implicit */short) ((((/* implicit */int) arr_18 [i_4 + 1] [i_5 - 2] [18ULL])) | (((/* implicit */int) (short)32757))));
                arr_21 [i_2] [i_5] [i_2] = ((/* implicit */short) (_Bool)1);
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = (!(arr_19 [i_6] [i_5 - 2]));
                    var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_5] [i_2] [i_5]))));
                    var_28 = ((((/* implicit */_Bool) ((unsigned long long int) -3242621490149024215LL))) || (((/* implicit */_Bool) (-(arr_22 [i_5] [i_5] [i_4 + 1] [i_2] [i_2])))));
                }
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                arr_29 [i_2] [i_4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [i_4] [i_7]))) : (4179970968866028017LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32751)) && (var_11)))) : (((/* implicit */int) arr_25 [i_7] [i_4] [(unsigned short)4]))));
                arr_30 [i_2] [i_7] [(short)19] = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned char)144))))));
                var_29 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)32733)))) && (((/* implicit */_Bool) var_6))));
                arr_31 [i_2] [i_4 + 1] [i_7] = ((/* implicit */_Bool) ((signed char) arr_17 [i_2] [i_4 + 1]));
            }
            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (arr_12 [i_4 + 1] [i_4 + 1] [(unsigned short)12]) : (((/* implicit */unsigned long long int) 3242621490149024218LL))))) ? (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4179970968866028011LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4 + 1] [i_4 + 1])))))) ? (((/* implicit */int) arr_24 [i_2] [i_4] [(_Bool)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 + 1] [i_4])))))));
        }
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) arr_28 [i_2] [i_8] [(_Bool)1] [i_8]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_8])))))))));
            arr_34 [(_Bool)1] [(_Bool)1] [(unsigned short)6] |= ((unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) arr_16 [i_8]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)63))))) : (((var_11) ? (arr_13 [9LL] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_33 [i_9] [i_2] [i_2])) : (((/* implicit */int) var_16)))))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_33 += ((/* implicit */_Bool) arr_24 [i_10 - 1] [i_10 - 1] [i_9]);
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) -4179970968866028014LL))));
                var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
            }
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_13))));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_47 [i_12] [i_9] [i_9] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
                        var_37 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_16)) | (((/* implicit */int) (unsigned char)144)))));
                        arr_48 [i_9] = -9223372036854775802LL;
                        arr_49 [i_2] [(_Bool)1] [i_9] [(_Bool)1] [i_11] [(signed char)19] |= ((/* implicit */signed char) var_15);
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) arr_11 [i_11]))));
                            arr_52 [i_9] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13936)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12] [i_9] [i_2]))) : (var_6)))) ? (arr_22 [i_2] [i_2] [i_11] [i_12] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12] [i_11] [i_9])))));
                        }
                        for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            arr_55 [i_11] [i_11] [i_11] [(unsigned short)3] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_11] [i_12] [i_11] [i_9] [i_2]))));
                            var_39 = ((/* implicit */unsigned short) var_16);
                            arr_56 [(unsigned char)6] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = var_1;
                            var_40 ^= ((/* implicit */unsigned short) (unsigned char)111);
                            arr_57 [(unsigned short)9] [i_12] [i_11] [i_11] [i_2] [i_2] = var_5;
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
            arr_60 [i_2] = ((/* implicit */unsigned short) arr_36 [i_15]);
        }
        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((var_3) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_17))))))) : (((((/* implicit */_Bool) ((short) var_8))) ? (((var_11) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))))))))));
            var_43 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        }
    }
}
