/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71214
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
    var_17 &= (unsigned char)255;
    var_18 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_6 [20U] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned short) (short)255))), (arr_0 [i_1])));
            var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((long long int) (short)27644))) ? (((/* implicit */long long int) ((((((/* implicit */long long int) arr_0 [i_0])) < (939929260689920227LL))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [15U])), ((unsigned short)47282)))) : (2147483647)))) : ((~(min((((/* implicit */long long int) arr_1 [(signed char)19])), (arr_3 [i_0])))))))));
            var_20 += ((/* implicit */short) min((min((min((7463138753477741062LL), (7463138753477741042LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_1])))))), (((/* implicit */long long int) var_15))));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_0 [i_0]))))));
            arr_9 [i_2] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (~(-1866455449)))), (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))))))), ((~(arr_0 [15ULL])))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 7463138753477741059LL))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) arr_0 [i_0]);
            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)13350)))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_10 [9ULL] [i_3] [i_3]))))))));
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            arr_18 [i_4] = (-(min((((/* implicit */long long int) max((var_14), (((/* implicit */unsigned short) arr_11 [i_0]))))), (((((arr_3 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_13 [i_0] [15LL] [i_4])) - (3307))))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) max((arr_13 [i_5] [i_4] [i_0]), (((/* implicit */unsigned short) arr_17 [i_0] [i_4] [15LL])))))))) <= (((/* implicit */int) var_8))));
                var_26 = min((((arr_15 [i_5 + 1] [i_5] [i_5 - 1]) - (arr_15 [i_5 + 1] [i_5] [i_5 - 1]))), (-7463138753477741062LL));
                arr_22 [i_0] [i_5] = ((/* implicit */int) ((long long int) -7463138753477741058LL));
            }
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_23 [i_0] [9U])) ? (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_6] [11LL] [i_0]))) : (arr_24 [i_0] [i_0] [i_6]))) : (((/* implicit */unsigned long long int) ((long long int) min((var_9), (arr_11 [i_6]))))));
            /* LoopNest 3 */
            for (signed char i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 22; i_8 += 4) 
                {
                    for (long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_26 [i_7] [i_7 - 1] [i_7 + 3] [i_8 + 1])) : (((/* implicit */int) arr_26 [i_7] [i_7 - 2] [i_7] [i_8 - 2]))))) / (((unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [(unsigned short)20] [i_7 - 2] [i_8 + 1])) % (var_0))))));
                            var_29 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_0)) : (864691128455135232LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) arr_23 [i_6] [i_8])) : (((/* implicit */int) var_3)))))))));
                            var_30 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_9] [(unsigned char)20] [(signed char)14])) && (((/* implicit */_Bool) arr_5 [i_0] [i_6]))))) : (((/* implicit */int) arr_23 [i_0] [i_6])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
        {
            arr_38 [i_0] = (!(((/* implicit */_Bool) (short)22532)));
            arr_39 [i_0] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [(short)16]))))) ? (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0])))))) : (((/* implicit */int) var_10)))))));
            var_31 += ((/* implicit */signed char) (((((((~(2147483647))) + (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [(_Bool)1])) - (12620)))));
            arr_40 [(signed char)4] [i_10] [i_10] = ((/* implicit */_Bool) var_9);
            /* LoopSeq 3 */
            for (unsigned char i_11 = 3; i_11 < 20; i_11 += 2) 
            {
                var_32 = ((/* implicit */unsigned short) ((((long long int) 2952689001U)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))));
                var_33 -= ((/* implicit */int) min((arr_25 [i_11 - 2] [i_10] [19] [21LL]), (((((/* implicit */_Bool) (short)7680)) && (((/* implicit */_Bool) (unsigned short)47287))))));
            }
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
            {
                var_34 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_0] [i_0] [i_0]))));
                var_35 &= ((/* implicit */unsigned short) (+(min(((~(((/* implicit */int) arr_30 [i_10] [i_12])))), (2111605657)))));
                var_36 += ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (short)322))))) < (((/* implicit */int) arr_23 [(short)6] [i_0]))))), (min(((-(((/* implicit */int) arr_19 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_26 [i_12] [i_12] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [20ULL])) : (((/* implicit */int) var_2))))))));
            }
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)13350)), (-2147483645)))) ? (((long long int) ((((/* implicit */int) (short)27626)) == (((/* implicit */int) (unsigned short)24915))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_10])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_10])))))));
                var_38 = ((/* implicit */long long int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (short)13325))))), (((((/* implicit */int) arr_45 [(short)18])) | (((/* implicit */int) arr_29 [i_0] [i_0] [i_13] [i_0])))))) - (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (max((((/* implicit */unsigned short) arr_47 [i_0] [i_10] [i_13] [i_10])), (var_8))))))));
                arr_48 [i_0] [i_10] [i_13] = ((unsigned short) max((1866455448), (((/* implicit */int) (short)32752))));
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 1; i_15 < 22; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    {
                        var_39 = arr_11 [i_0];
                        var_40 = ((/* implicit */unsigned char) arr_29 [i_16] [i_16] [i_15] [(unsigned short)10]);
                    }
                } 
            } 
            var_41 = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) (short)-13340))));
            var_42 += ((/* implicit */long long int) arr_55 [i_0] [i_14] [i_14] [i_0] [i_0]);
            arr_57 [i_14] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) arr_30 [3LL] [i_0]))));
        }
    }
    var_43 = ((/* implicit */int) min((var_43), (var_7)));
}
