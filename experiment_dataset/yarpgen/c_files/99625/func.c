/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99625
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [9LL]))))) * (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [7LL])) : (((/* implicit */int) var_12)))))))));
            var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [i_0]))))) != ((-(1307848519U)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [11ULL] [i_1])), (var_6)))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_7))))));
            var_15 -= ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned char)111), ((unsigned char)111)))) / (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
        }
        var_16 *= ((/* implicit */_Bool) var_9);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(2987118776U)))), (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) ((2987118776U) ^ (1307848519U))))));
            var_18 ^= ((long long int) (((~(((/* implicit */int) arr_8 [i_2] [i_2])))) <= (((/* implicit */int) ((unsigned short) arr_5 [(unsigned short)1])))));
            var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_6 [10U] [i_2] [i_2]) * (arr_5 [i_2])))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_0]))) * (var_6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_8 [i_0] [i_2]), (var_7)))) & (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((unsigned int) arr_10 [i_0]))));
            var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)16]))) - (5798324428576673144ULL)))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))));
            arr_11 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((arr_4 [i_0]), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) & (arr_6 [10U] [i_2] [i_2])))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            var_21 -= ((/* implicit */unsigned int) ((arr_13 [i_0] [i_3]) ^ (arr_13 [i_3] [i_0])));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (_Bool)1))))) ^ ((-(1307848533U))))))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((var_2) >> (((arr_5 [i_0]) - (2692341230U))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_24 *= ((/* implicit */unsigned int) 18426163922841654467ULL);
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2340496180U)))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) / (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_6 - 1] [i_6 - 1])) || (((/* implicit */_Bool) arr_14 [i_5 + 1] [i_6 - 1] [i_6 - 1])))))))))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) 4294967295U))) / (var_6)))))))));
                }
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_5 + 2])) * (((/* implicit */int) arr_18 [i_5 - 2]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5 - 2]))) / (var_11))))))));
            }
            for (long long int i_7 = 2; i_7 < 21; i_7 += 2) /* same iter space */
            {
                var_28 ^= ((/* implicit */unsigned short) (!((!(((arr_17 [i_0] [i_4] [i_7 - 1] [i_7]) == (((/* implicit */unsigned long long int) arr_5 [i_0]))))))));
                var_29 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(arr_21 [i_0] [i_4] [i_7])))))) ? (((long long int) ((unsigned long long int) 18446744073709551615ULL))) : (((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_7])), (((((/* implicit */int) arr_4 [20LL])) << (((((/* implicit */int) (unsigned char)75)) - (75))))))))));
                var_30 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_14 [i_7 + 1] [i_7 + 1] [i_7 + 2])))));
                var_31 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_16 [i_7 + 1])))) / (((/* implicit */int) var_7))));
            }
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_0 [i_0] [7U])))) || (((/* implicit */_Bool) max((18426163922841654445ULL), (((/* implicit */unsigned long long int) 1307848520U)))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_17 [i_0] [i_0] [i_0] [i_4]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_4]))))))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_25 [i_8] &= ((/* implicit */unsigned short) ((((arr_7 [i_8] [i_8] [i_8]) / (arr_6 [i_8] [i_8] [i_8]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((1307848499U) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
        var_33 -= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_19 [i_8] [i_8] [i_8]))));
    }
    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 4) /* same iter space */
    {
        var_34 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_28 [i_9 + 1])))) * (((/* implicit */int) ((((/* implicit */_Bool) 4194272U)) && (((/* implicit */_Bool) 1923091812460523838LL)))))));
        arr_29 [i_9] [i_9] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(arr_12 [i_9]))) / (arr_5 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)1854)))) : (max((arr_27 [i_9 - 1] [i_9]), (((/* implicit */long long int) var_0))))));
        arr_30 [i_9] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 650622134024836144LL)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21810))))), (((((/* implicit */_Bool) max((arr_14 [i_9] [i_9] [i_9]), (var_12)))) ? (var_2) : (((arr_12 [i_9 - 1]) << (((((/* implicit */int) var_0)) - (26063)))))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (unsigned short i_12 = 2; i_12 < 19; i_12 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((unsigned int) arr_17 [i_10] [i_11] [i_12] [i_12 + 1])))));
                    var_36 ^= ((/* implicit */long long int) ((715257508245347319ULL) <= (((/* implicit */unsigned long long int) 1673012969U))));
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(var_11)))) > (arr_17 [i_12 + 1] [i_12] [i_12 - 1] [i_12 - 1]))))));
                }
            } 
        } 
        var_38 -= ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) arr_10 [i_10])) | (18426163922841654470ULL)))));
    }
    var_39 ^= (~(var_6));
    var_40 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (var_11)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (2161457859U)))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
}
