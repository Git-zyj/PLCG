/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73213
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            var_20 |= ((/* implicit */unsigned char) 3238629183097712951LL);
            var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_22 = var_7;
            var_23 = arr_2 [i_0];
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_3]))));
                var_25 |= ((/* implicit */unsigned short) var_9);
                var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_27 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) -3238629183097712958LL))));
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))));
            }
            for (unsigned int i_5 = 3; i_5 < 19; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) arr_13 [i_0] [i_2] [i_5] [i_6]);
                            var_30 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3238629183097712962LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_17)))));
                            var_31 = ((long long int) -1716961032880768931LL);
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_7 - 1] [i_6 - 1] [i_5 - 3] [i_5] [i_5])))))));
                        }
                    } 
                } 
                var_33 ^= ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_10 [i_2] [i_2] [i_5] [i_5])))) + (2147483647))) >> (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [10LL] [(short)12] [i_0] [i_0]))) : (3238629183097712957LL)))));
            }
        }
        for (int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) arr_23 [i_0] [i_8] [i_0 - 3]))));
            var_35 *= ((/* implicit */unsigned int) var_12);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */int) ((unsigned short) var_18));
            var_37 &= ((/* implicit */signed char) ((arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3]))) : (var_9)));
            var_38 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [(unsigned char)6] [i_9])) | (((/* implicit */int) var_16))));
            var_39 = ((/* implicit */_Bool) arr_2 [i_0 - 2]);
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_9] [i_9]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (-3238629183097712951LL)));
                    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 305612852)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 3]))));
                }
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_43 = ((/* implicit */unsigned short) ((arr_25 [i_0] [i_0] [i_10]) >> (((((/* implicit */int) arr_20 [i_0 - 2] [i_12] [i_10] [i_12] [i_0])) - (18395)))));
                    var_44 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_31 [i_9]) >> (((((/* implicit */int) arr_22 [i_10])) - (63633)))))) ? (((/* implicit */int) arr_33 [i_0 - 3] [i_0 + 1] [i_0 + 1] [2LL])) : (((((/* implicit */int) var_2)) >> (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    var_45 = ((/* implicit */long long int) ((arr_10 [i_0] [i_0] [i_0 - 3] [i_0]) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_0]))));
                    var_46 = ((/* implicit */int) arr_0 [17]);
                }
                var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-3238629183097712951LL))))));
            }
        }
        var_48 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1]))) : (-1716961032880768937LL)))) ? (min((((/* implicit */int) max((((/* implicit */unsigned short) arr_30 [i_0] [(unsigned short)4] [i_0] [i_0])), (var_2)))), ((~(((/* implicit */int) (signed char)-35)))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))) == (3238629183097712935LL)))) : ((+(((/* implicit */int) var_11))))))));
        var_49 -= ((/* implicit */unsigned short) ((((long long int) arr_11 [i_0] [i_0] [i_0])) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
        var_50 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_37 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (unsigned char)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_27 [i_0] [(_Bool)1]), (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) (unsigned char)190))) : (((/* implicit */int) (unsigned char)0))))) : (((((_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 3] [i_0] [0])))))));
    }
    var_51 *= ((/* implicit */signed char) (unsigned char)105);
    var_52 &= ((/* implicit */int) var_2);
}
