/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81121
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) min(((+(var_4))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27055)) << (((var_13) + (1725798909015246429LL))))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((((/* implicit */_Bool) var_13)) ? (9223372036854775807LL) : (-9223372036854775800LL))), (((/* implicit */long long int) (+(((/* implicit */int) (short)7140)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) 564817789);
            var_17 = ((/* implicit */_Bool) arr_2 [i_1]);
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 2] [i_3 + 1]))));
            arr_12 [i_1] = ((/* implicit */int) arr_2 [i_1]);
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3 + 2] [i_1])) / (arr_5 [i_3 + 2])));
        }
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28236)) ? (10982607663599270608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38471)))))) ? (((/* implicit */int) (unsigned short)23189)) : (((/* implicit */int) ((((/* implicit */_Bool) 2022082966U)) || ((_Bool)1))))))) || (((((/* implicit */_Bool) arr_11 [(short)12] [(short)12] [(short)12])) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), ((unsigned char)61))))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned char)195)))))) * ((-(((/* implicit */int) arr_6 [i_1] [i_1]))))));
            var_22 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)7] [(unsigned char)17] [i_4]))) & (-9223372036854775780LL))), ((+(arr_3 [i_1] [i_4])))));
        }
        arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)27065)))) / ((-(((/* implicit */int) arr_2 [i_1]))))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_9)))));
        arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) % (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) > (((/* implicit */int) min((((/* implicit */short) (unsigned char)53)), (arr_4 [i_1])))))))));
        var_23 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_4 [i_1]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_7 [i_5])) / (arr_5 [14U]))))) | (var_4)));
        var_25 = ((/* implicit */_Bool) min((-9223372036854775807LL), (((long long int) ((_Bool) (short)-7133)))));
        arr_20 [i_5] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (var_5)))), (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [(_Bool)1])) ? (1111408221091112437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5])))))))));
    }
    var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-7131))));
    var_27 = ((/* implicit */short) var_8);
    var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)131)) << (((1111408221091112449ULL) - (1111408221091112440ULL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33198))) ^ (var_4)))));
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            {
                var_29 = (!(((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [5U] [i_6 - 1])))))));
                var_30 = ((/* implicit */long long int) (-(min((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))), (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6]))))));
            }
        } 
    } 
}
