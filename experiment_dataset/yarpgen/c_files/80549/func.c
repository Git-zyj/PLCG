/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80549
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
    var_14 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */short) var_7)), ((short)2046)))) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_9))))))), ((~(((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    var_15 = ((/* implicit */unsigned char) var_0);
    var_16 &= ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) * (var_13))), (((/* implicit */unsigned int) (unsigned short)28501))))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 8; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_0 [i_0]))));
                arr_12 [i_0] [i_0] [(signed char)10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2 + 3] [i_2 - 1] [i_0])) & (((/* implicit */int) arr_10 [i_3] [i_3] [i_2 + 1]))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_1 [i_0]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_19 ^= ((/* implicit */signed char) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_2]))) + (98))) - (17)))));
                arr_17 [i_0] [(unsigned short)5] = ((/* implicit */signed char) arr_3 [(signed char)10] [i_2 + 1]);
            }
            for (short i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                arr_20 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) var_2)))) | (((/* implicit */int) arr_4 [i_0] [i_2 + 2] [i_0]))));
                var_20 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_16 [(unsigned char)0]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_19 [i_5] [1LL] [i_0] [i_0]))))));
                arr_21 [i_5] [1] [i_0] = ((/* implicit */long long int) (signed char)-100);
            }
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2 + 3] [i_2 + 1])) ? (arr_15 [i_2 + 2] [i_2 - 1]) : (arr_15 [i_2 - 1] [i_2 + 1])));
            var_22 &= ((/* implicit */unsigned short) var_12);
        }
        for (signed char i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_13 [8LL] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-109))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
            var_24 = ((/* implicit */unsigned char) (signed char)120);
        }
        /* vectorizable */
        for (signed char i_7 = 1; i_7 < 8; i_7 += 4) /* same iter space */
        {
            arr_26 [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_7 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7 - 1] [i_7 - 1] [i_7]))) : (((arr_5 [i_7]) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (unsigned char)231))));
        }
        /* LoopSeq 4 */
        for (int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) arr_19 [(short)10] [(unsigned char)7] [i_8] [(unsigned short)2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7445)))))))));
            var_27 -= ((/* implicit */_Bool) var_6);
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (unsigned short)47785))));
            var_29 ^= ((/* implicit */int) (!(((arr_27 [i_0]) && (arr_27 [i_8])))));
        }
        for (int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) (signed char)89))))) ? (((/* implicit */unsigned int) arr_28 [i_9] [i_0])) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (var_5)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_10 = 3; i_10 < 9; i_10 += 4) 
            {
                var_31 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_10]))))));
                arr_35 [i_10] [9ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_10 - 1]))));
                arr_36 [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_18 [i_10 + 1] [i_10 + 1] [i_10 + 2]));
            }
            for (unsigned char i_11 = 4; i_11 < 10; i_11 += 2) 
            {
                var_32 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) arr_22 [i_9] [i_11 - 4] [i_9])) : (((/* implicit */int) (short)31))))), (arr_38 [i_0] [i_0] [i_9] [i_11])));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */long long int) arr_23 [i_0])) / (min((((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_0] [i_9] [i_11 + 1])) - (((/* implicit */int) arr_19 [i_11 + 1] [i_9] [i_9] [6ULL]))))), (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (arr_9 [i_9]))))))))));
            }
            var_34 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
            arr_39 [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_37 [i_0] [i_9])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (arr_38 [i_0] [9U] [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)17750)) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)148)), (var_10))))))))));
        }
        for (int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
        {
            arr_43 [i_12] = ((/* implicit */long long int) ((((((/* implicit */int) arr_33 [i_12] [i_0])) * (((/* implicit */int) arr_33 [i_12] [i_0])))) + (((/* implicit */int) var_12))));
            var_35 = ((/* implicit */signed char) var_0);
            var_36 = ((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [(_Bool)1]);
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0])) ? (min((267386880), (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_8 [i_0])) & (((/* implicit */int) var_1))))))) ^ (min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_12))))), (arr_16 [i_0]))))))));
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [(signed char)1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12] [i_0])))))) ^ (((unsigned long long int) (~(((/* implicit */int) arr_8 [i_0]))))))))));
        }
        for (short i_13 = 1; i_13 < 10; i_13 += 3) 
        {
            arr_48 [i_0] [(unsigned char)3] [i_13 + 1] = ((/* implicit */unsigned long long int) arr_47 [i_13] [i_0] [i_0]);
            var_39 = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (((int) (~(4117292014U))))));
        }
        var_40 *= ((/* implicit */short) var_5);
    }
}
