/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96230
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max(((-(var_4))), ((+(arr_1 [i_0]))))) : ((+(arr_1 [i_0])))));
        var_11 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_6))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
            var_13 = var_1;
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) -1);
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned int) (~(arr_7 [i_4] [(unsigned char)3] [i_2] [i_1] [i_0])));
                            var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 - 1]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) arr_7 [i_0] [2] [(_Bool)1] [i_0] [i_2 - 2]);
                var_18 = ((/* implicit */int) ((signed char) arr_3 [i_2 + 2] [8U] [i_0]));
            }
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_19 = (+(min((arr_13 [i_1]), (arr_5 [i_0] [i_0] [i_1] [i_5]))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) 0))))) || (((/* implicit */_Bool) arr_9 [7U] [i_1] [i_5] [i_0]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 32505856U)) ? (arr_1 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_7 + 1] [(_Bool)1] [0] [i_7 + 1])) + (((/* implicit */int) arr_17 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7]))));
                    var_23 &= ((/* implicit */signed char) (+(2241687782U)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) (((_Bool)1) ? (18016509847017332899ULL) : (((/* implicit */unsigned long long int) 0))));
                    var_25 = min((((arr_6 [i_0] [(_Bool)1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)3] [i_6] [i_1] [i_0] [i_0]))))), (((/* implicit */unsigned int) var_9)));
                    var_26 = arr_18 [i_6];
                    var_27 = (+((-(arr_1 [i_8]))));
                }
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) (~(max((arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 1] [1] [i_9 - 1]), (((/* implicit */int) var_9))))));
                    var_29 = max(((+(var_3))), (((/* implicit */int) var_8)));
                }
                for (unsigned int i_10 = 1; i_10 < 9; i_10 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) var_0);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_25 [i_0] [(signed char)8] [i_6] [i_10] [i_10] [(_Bool)1]))), (arr_7 [i_10] [i_10] [i_10] [i_10 - 1] [i_10])))) ? (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_8))))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (430234226692218716ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3))))));
                    var_32 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_9)))) <= (((/* implicit */int) var_9))));
                }
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_6] [i_1]))) : (((unsigned long long int) var_6))))))));
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_34 = ((/* implicit */signed char) arr_28 [i_0] [i_0] [9] [9]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_12] [i_1] [(_Bool)1]))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_11] [i_12] [i_13])) ? ((~(18016509847017332899ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_13] [i_12] [9U] [i_0])))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) ((((unsigned int) arr_5 [(signed char)8] [i_1] [i_11] [i_11])) ^ (((unsigned int) arr_5 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_36 [7ULL] = ((/* implicit */signed char) 0);
            var_38 = ((/* implicit */signed char) var_9);
            var_39 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_14] [i_14] [i_14] [i_0] [i_0]))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_14])) && (((/* implicit */_Bool) arr_1 [i_14])))))) : ((~(arr_1 [i_0])))));
            var_40 = ((/* implicit */unsigned int) (((~(arr_35 [i_14]))) >> ((((~(var_0))) - (2191012924662169827LL)))));
            arr_37 [i_0] [2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2053279513U), (((/* implicit */unsigned int) arr_18 [i_14]))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_14] [i_0] [i_0] [i_0] [i_0]))) <= (var_4)))))))) ? (max((((unsigned int) arr_1 [i_14])), (((/* implicit */unsigned int) (~(arr_14 [i_0])))))) : (((/* implicit */unsigned int) arr_13 [(signed char)0]))));
        }
        var_41 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2241687782U)) ? (var_4) : (((/* implicit */unsigned int) var_5))))), (((unsigned long long int) var_1)))))));
    }
    for (signed char i_15 = 0; i_15 < 19; i_15 += 4) 
    {
        var_42 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_38 [i_15]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_15])) || (((/* implicit */_Bool) 2043780205))))))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)136))));
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((arr_40 [i_15]), (((/* implicit */unsigned long long int) -1))))))) ? (((/* implicit */int) max((arr_39 [i_15]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_15])) || (((/* implicit */_Bool) arr_39 [i_15])))))))) : ((~(((((/* implicit */int) arr_39 [(unsigned short)14])) * (((/* implicit */int) var_7))))))));
        var_44 = ((/* implicit */unsigned int) (~(arr_40 [i_15])));
        var_45 = ((unsigned int) arr_38 [i_15]);
        var_46 = ((/* implicit */_Bool) ((unsigned long long int) arr_40 [i_15]));
    }
    var_47 = ((/* implicit */signed char) ((unsigned short) ((int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) var_7)) : (1957475223)))));
}
