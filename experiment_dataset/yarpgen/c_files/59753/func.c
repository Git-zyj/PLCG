/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59753
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
    var_16 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) var_7);
                        var_18 = ((/* implicit */unsigned char) var_8);
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned long long int) 636476737)) : (((arr_4 [i_0 - 1] [i_0]) ^ (((/* implicit */unsigned long long int) var_13))))))));
                        var_20 = ((/* implicit */long long int) arr_6 [i_0] [i_4] [i_2] [i_4]);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-76)), ((+(((/* implicit */int) arr_11 [i_0]))))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_2 - 1] [i_4])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 24LL)) : (arr_13 [i_0]))) : (((/* implicit */unsigned long long int) (+(35LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_2 [(unsigned short)0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) : (var_8))))));
                    }
                    var_22 = ((/* implicit */int) (unsigned short)45461);
                    arr_14 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 24LL)) ? (var_10) : (var_3)))) ? ((~(((/* implicit */int) arr_6 [i_1 - 4] [i_1 - 1] [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)24787)) && (((/* implicit */_Bool) -5088868577301797353LL)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) ((signed char) arr_9 [(unsigned short)6] [i_0] [i_1 + 2] [i_2]));
                        arr_17 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [(unsigned short)15] [i_2 - 1] [i_1 - 3])) != (((/* implicit */int) arr_12 [i_0] [i_2] [10ULL] [i_5] [i_2 - 2] [i_1 - 2]))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    arr_20 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((unsigned char) var_6)));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((13960286635669193026ULL) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(unsigned char)13] [i_1] [(_Bool)1] [(_Bool)1]))))))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)0)))) - (((/* implicit */int) (unsigned char)59))));
                                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) (unsigned short)7848))));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 3])) <= (((/* implicit */int) arr_0 [i_0 - 1] [i_1 - 4]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_8 [(short)20] [(short)20] [i_1] [i_6] [i_6] [i_6]))));
                    arr_25 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)110)) != (((/* implicit */int) arr_22 [i_0] [i_0] [i_6] [5LL] [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */int) (+(((var_13) >> (((((/* implicit */int) arr_0 [i_0] [i_1 - 2])) - (28)))))));
                                var_30 = ((/* implicit */signed char) (+((~(var_3)))));
                                var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)7))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    arr_36 [i_11] [11U] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (5381381081969972758LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))));
                    var_32 = ((/* implicit */unsigned long long int) var_3);
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    var_33 -= ((/* implicit */unsigned char) (~(((var_9) ^ (40LL)))));
                    arr_40 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41925)) % (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_12 + 1]))))) ^ (arr_32 [i_12] [i_1 - 2] [i_0 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_44 [i_0 + 1] [7U] [i_12] [i_13] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                        arr_45 [i_12] [i_12] [i_12] [i_13] [(_Bool)1] = ((/* implicit */unsigned char) 9223372036854775804LL);
                        arr_46 [i_13] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_0 + 1] [i_0 + 1] [i_1 - 2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_7))));
                    }
                }
                var_34 = ((/* implicit */short) max((16423725613837559965ULL), (2023018459871991680ULL)));
                var_35 -= ((((/* implicit */_Bool) max((-1183075002427989744LL), (((/* implicit */long long int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0]))))) ? ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))));
                var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)7))))), (arr_32 [i_0 + 1] [i_1] [0LL])));
            }
        } 
    } 
    var_37 = ((/* implicit */_Bool) (+(var_3)));
}
