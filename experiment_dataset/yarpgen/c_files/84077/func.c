/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84077
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
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_0)))) ? (min((((long long int) 4835757621593400075LL)), (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))) : ((+(var_0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((((long long int) arr_6 [i_0 - 1] [i_1] [15ULL])) & (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(unsigned char)4])) & (arr_6 [9] [(_Bool)1] [(_Bool)1])))), ((~(21U)))))));
                var_18 = ((/* implicit */_Bool) max((var_18), (var_11)));
            }
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                var_20 = ((/* implicit */_Bool) ((((arr_2 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (28)))));
                var_21 = ((/* implicit */_Bool) ((4294967274U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)6328)))));
                var_22 ^= ((/* implicit */signed char) ((unsigned int) arr_1 [i_3]));
            }
            for (int i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                var_23 = ((/* implicit */long long int) var_8);
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) ((arr_1 [i_1]) % (arr_1 [i_1])))))));
                var_25 = ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (arr_10 [i_0] [(_Bool)1] [i_0] [(short)14])))), (((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_1] [(unsigned char)12]))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_11))) & (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_2)))))))) >= (((((/* implicit */_Bool) (+(var_7)))) ? (4294967258U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            }
            var_27 = ((/* implicit */int) ((((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [18U]))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_13)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)9] [i_0] [i_1] [18]))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_0))), (((/* implicit */long long int) (~(arr_1 [i_0]))))))));
            var_28 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
            var_29 = ((/* implicit */unsigned int) var_11);
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_9))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        arr_24 [i_0] [(signed char)12] [i_7] [(signed char)12] [14LL] |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-57)) == (((/* implicit */int) (_Bool)0)))))));
                        var_31 ^= ((/* implicit */long long int) min((max((((/* implicit */unsigned int) (-(arr_6 [6ULL] [16U] [16U])))), (arr_19 [(short)10] [i_5] [(short)10] [(unsigned char)18]))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_5 [i_5] [i_6 - 1] [i_5])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((_Bool) arr_9 [i_6 + 1] [i_7] [i_0 - 1])))));
                            var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [9U]))));
                            var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4)))))) + ((~(var_5))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 1; i_9 < 17; i_9 += 1) 
                        {
                            var_35 = ((/* implicit */int) ((arr_29 [i_7] [(_Bool)1]) > (4294967259U)));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_9] [10U] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_9 - 1] [i_0 - 1] [i_6 + 1])) : (((/* implicit */int) var_2))));
                        }
                        var_37 *= (-(((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */long long int) arr_14 [i_0] [i_5] [i_6 - 1])) % (var_13))))));
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */long long int) var_2);
        var_39 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_13))) << (((var_0) + (562193516750983798LL))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 4) 
    {
        var_40 = (-((~(var_0))));
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) var_5))));
        arr_32 [19U] = ((((long long int) arr_30 [i_10])) / (((/* implicit */long long int) arr_31 [i_10])));
    }
    var_42 &= ((/* implicit */unsigned int) ((unsigned short) var_0));
}
