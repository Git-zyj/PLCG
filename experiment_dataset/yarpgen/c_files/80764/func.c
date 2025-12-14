/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80764
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_14)) | (((/* implicit */int) var_13))))))) == (((((unsigned int) var_4)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)129)) && (((/* implicit */_Bool) arr_0 [i_0 + 1]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */int) var_12);
            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (var_12))))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) ((((_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((var_4) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))) : ((~(arr_0 [i_0])))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                var_22 = ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_15) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_1]))));
                var_23 = ((/* implicit */unsigned short) var_10);
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_25 ^= ((/* implicit */signed char) (((~(((/* implicit */int) var_11)))) == (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
                var_26 *= ((/* implicit */_Bool) ((int) 6838518097738950224ULL));
                arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) arr_2 [i_3]);
            }
            arr_15 [i_0] = ((((/* implicit */int) var_11)) ^ (((((/* implicit */_Bool) arr_12 [i_0])) ? (var_10) : (((/* implicit */int) arr_5 [(signed char)4] [i_1] [(signed char)4])))));
        }
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (~(((int) var_10))));
                            var_28 = ((unsigned char) (~(((/* implicit */int) arr_22 [(signed char)13] [i_4] [i_5] [i_6]))));
                            var_29 = ((/* implicit */int) (((-(var_17))) / (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_4] [i_0])))));
                            var_30 = ((/* implicit */unsigned short) arr_24 [i_4] [i_5] [i_5] [i_4]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_8 = 2; i_8 < 18; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 16; i_9 += 3) 
                {
                    for (int i_10 = 1; i_10 < 17; i_10 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */int) (~((~(4294967295U)))));
                            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_8 - 1]))));
                        }
                    } 
                } 
                arr_33 [13] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_28 [i_0 - 1] [i_8 - 2] [i_0 - 1] [i_8]))));
                var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0 + 2] [i_4]))));
            }
        }
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (unsigned short i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_34 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            var_35 += ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_31 [i_0] [i_14] [i_12] [i_14])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                            var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)22008)) ? (6527748454541952957ULL) : (((/* implicit */unsigned long long int) (-(-1915211611131783883LL))))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 18; i_15 += 2) 
                        {
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((unsigned char) (~(arr_16 [(short)13] [(short)13] [i_15])))))));
                            var_38 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_34 [i_12 + 2])))));
                        }
                        var_39 = ((((/* implicit */_Bool) 951724542421720196LL)) ? (-2784991219004699868LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))));
                        arr_46 [i_0] [i_0] [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [i_0] [i_11] [i_12 + 1] [i_13]))));
                        var_40 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) * ((~(((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
    }
    var_41 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
}
