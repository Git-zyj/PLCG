/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86873
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) (signed char)-114);
        var_15 = ((/* implicit */int) max((var_15), ((((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [4U] [4U])) && (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) var_3))))));
        var_16 = ((/* implicit */_Bool) ((max((arr_0 [i_0]), (arr_0 [i_0]))) | (((/* implicit */int) ((_Bool) var_7)))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_17 *= ((/* implicit */short) var_3);
        var_18 -= ((/* implicit */signed char) ((max((434993368U), (((/* implicit */unsigned int) (unsigned char)240)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) / (((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_2 [i_2]))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_6)) : (arr_0 [i_3])));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((var_9) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_0))));
            var_22 = ((/* implicit */unsigned short) arr_10 [i_3] [i_2]);
        }
        for (signed char i_4 = 4; i_4 < 9; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_4 + 1])) | (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 3])))))));
            var_24 = ((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_4 - 3] [i_4]));
        }
        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            arr_16 [i_2] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8676)) ? (((/* implicit */int) ((_Bool) arr_13 [i_2] [i_5] [i_5]))) : (((((((/* implicit */int) arr_10 [i_2] [i_5])) + (2147483647))) >> (((8095183658530369797ULL) - (8095183658530369778ULL)))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_14 [i_2] [i_5 + 1] [i_5]) : (((/* implicit */int) var_9))));
        }
        for (int i_6 = 4; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
            {
                arr_23 [i_2] [i_6 - 3] = ((/* implicit */unsigned short) var_2);
                arr_24 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_2] [i_6])) : (((/* implicit */int) (unsigned short)10331)))) > (((int) (unsigned char)192))));
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
            {
                var_26 *= (_Bool)1;
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_32 [i_2] [i_6] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) var_8);
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2] [i_6 - 4])) % (((/* implicit */int) (signed char)114))));
                            arr_33 [i_10] [i_10] [i_9] [i_8] [i_6] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)19618)) / (((/* implicit */int) (short)-16))));
                        }
                    } 
                } 
                arr_34 [i_2] [i_6 - 4] [i_8] [i_6] = ((/* implicit */unsigned char) ((_Bool) var_9));
                arr_35 [i_2] [i_6] [i_6] = ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_7 [i_6 - 4])));
            }
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
            {
                arr_38 [i_2] [i_2] [i_6] [i_11] = ((/* implicit */_Bool) ((short) arr_8 [i_6]));
                arr_39 [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_5)))) | (((/* implicit */int) ((short) (unsigned char)10)))));
            }
            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_6 - 4] [i_6 - 1])) && (((/* implicit */_Bool) arr_37 [i_6 - 3] [i_6 - 4]))));
        }
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_29 = ((/* implicit */unsigned long long int) (!(((arr_42 [i_12]) < (arr_42 [i_12])))));
        var_30 -= var_12;
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                var_31 -= ((/* implicit */short) ((((/* implicit */int) (unsigned char)70)) < (((/* implicit */int) (short)9))));
                arr_50 [i_13] [i_14] [i_14] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) / (((/* implicit */int) ((signed char) arr_1 [(signed char)22] [i_14]))))) * (((/* implicit */int) (short)28584))));
                var_32 = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) var_0);
    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_9)))))));
    var_35 ^= ((((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)4645)))) ^ (((/* implicit */int) (short)-3108)))) + (((/* implicit */int) (_Bool)0)));
}
