/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69270
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
    var_20 = ((/* implicit */signed char) var_11);
    var_21 = ((/* implicit */unsigned long long int) var_8);
    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_15)), (14226592094592352119ULL))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) var_11);
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_26 = arr_8 [i_2 + 1];
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)44635), (((/* implicit */unsigned short) arr_6 [(signed char)8] [(signed char)8] [i_2 - 2]))))) * (((/* implicit */int) ((signed char) arr_7 [(signed char)13] [i_2])))));
                    var_28 = max((arr_4 [i_1] [i_2 - 1]), (min((arr_4 [i_3] [i_2 - 1]), ((signed char)-3))));
                    var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) (signed char)-8))) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2])) : (((/* implicit */int) arr_8 [i_2 - 2]))))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) arr_1 [(signed char)0])))) : (((/* implicit */int) (signed char)-6))));
    }
    for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 4; i_5 < 19; i_5 += 3) 
        {
            var_31 = ((/* implicit */signed char) min((((unsigned long long int) arr_11 [i_4 - 1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4 + 2])) <= (((/* implicit */int) (unsigned char)238)))))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_15 [i_5 - 4] [i_5 - 4]), (((/* implicit */unsigned long long int) ((signed char) arr_13 [i_4] [i_4] [(signed char)5])))))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_5 - 1]))) : (((/* implicit */int) var_9))));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) arr_14 [i_4]);
            /* LoopSeq 2 */
            for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                var_33 = ((/* implicit */signed char) ((unsigned short) min((arr_18 [i_4 + 2] [i_5] [i_4 + 2] [i_6]), (arr_18 [i_6] [i_5 + 3] [(unsigned char)16] [i_4]))));
                /* LoopNest 2 */
                for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_34 = ((signed char) ((signed char) arr_17 [i_4 + 2] [i_5 + 3] [i_6 + 1] [i_7]));
                            var_35 = ((/* implicit */signed char) ((unsigned short) var_16));
                            var_36 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_4 + 2] [i_5] [i_5 + 1] [i_7] [i_4])) ? (arr_14 [i_4]) : (((unsigned long long int) (signed char)55)))));
                            arr_24 [i_4] [i_5] [i_6] [i_7] [i_4] = ((/* implicit */signed char) ((unsigned short) max((arr_12 [i_4]), (arr_12 [i_4]))));
                            var_37 = ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 1; i_9 < 21; i_9 += 1) 
            {
                var_38 = ((/* implicit */signed char) ((unsigned short) ((signed char) arr_21 [i_9 - 1] [i_9 - 1] [i_5 + 3] [i_4 + 3] [i_4])));
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [(unsigned char)2] [(unsigned char)2] [i_4]))) > (arr_15 [i_4 + 3] [i_4 + 3]))))))));
                var_40 = ((/* implicit */signed char) arr_17 [i_4] [i_4] [i_4] [i_9]);
            }
        }
        arr_28 [i_4] = ((/* implicit */signed char) arr_19 [i_4] [i_4] [i_4] [i_4]);
        /* LoopNest 3 */
        for (signed char i_10 = 3; i_10 < 20; i_10 += 4) 
        {
            for (signed char i_11 = 1; i_11 < 22; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        var_41 = arr_10 [i_4];
                        var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_26 [8ULL] [8ULL] [8ULL]), (arr_26 [(signed char)10] [(signed char)10] [(signed char)18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_1)) == (arr_14 [4ULL]))))) : (((unsigned long long int) max((((/* implicit */unsigned long long int) var_1)), (var_11))))));
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (signed char)-2);
                            var_44 = ((/* implicit */unsigned short) var_12);
                            var_45 -= ((/* implicit */unsigned long long int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_46 = ((/* implicit */unsigned short) ((unsigned char) ((signed char) arr_30 [i_4 + 1] [i_11 + 1])));
                        }
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            var_47 &= ((/* implicit */signed char) arr_40 [i_4] [i_11] [i_11] [i_10] [i_4]);
                            var_48 *= arr_20 [i_4] [i_4] [i_11] [i_4] [i_14];
                            var_49 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_11]))) : (arr_15 [i_4] [(unsigned short)5])))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_15] [i_15] [i_15] [8ULL] [i_15])) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15]))))) / (((unsigned long long int) arr_20 [(unsigned short)19] [(unsigned short)19] [i_15] [i_15] [i_15]))));
        var_51 = ((/* implicit */unsigned long long int) (unsigned char)109);
    }
    var_52 = var_15;
}
