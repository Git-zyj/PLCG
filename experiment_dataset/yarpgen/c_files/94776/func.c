/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94776
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || ((_Bool)0));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) (short)27180))) | ((~(var_4)))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)128)))))) ? (arr_7 [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_5 [i_0] [i_1] [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_14 [i_3] = ((unsigned long long int) (((~(((/* implicit */int) var_5)))) ^ (((/* implicit */int) arr_10 [i_0]))));
                    var_12 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) > ((-(var_1))))) || ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0]);
                                var_14 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))))), (var_1)));
                                arr_21 [i_0] [(unsigned char)6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (short)27180)))))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((unsigned int) ((arr_2 [(unsigned char)16]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))) : (((long long int) -7886344986018458194LL))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) var_3))))) || (((/* implicit */_Bool) ((unsigned char) arr_15 [i_0] [i_5 - 2] [i_0] [i_5] [i_5] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_17 *= ((/* implicit */unsigned char) arr_20 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(unsigned short)18] [12U] [i_7] [i_7]);
        var_18 = ((((/* implicit */_Bool) arr_3 [i_7] [i_7])) ? ((-(var_2))) : (((/* implicit */long long int) (((~(((/* implicit */int) (short)32767)))) / (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((short) var_8))) ? (arr_11 [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [i_7]))))));
        arr_25 [0U] &= ((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_7])) ^ (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (short)27180)) ? (((/* implicit */int) (short)-27162)) : (-1834587923)))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) var_2);
        arr_28 [i_8] = ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (unsigned char)21))))) ? (((/* implicit */long long int) ((-2147483640) ^ (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)55450)) : (-1264330659)))))) : (min((((/* implicit */long long int) 1834587937)), (3846164324396076257LL))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 268435455U)) == (1970560362405706516LL))) ? (max((((((-8828404425250053718LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)233)) - (233))))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((arr_27 [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (7986428998185371846LL))))))));
        var_22 = ((/* implicit */long long int) max((var_22), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8]))) : (1887638604U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) (_Bool)1))))))));
        var_23 *= ((/* implicit */short) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_9)) : (var_4))))));
        var_25 = ((/* implicit */int) (((!(((/* implicit */_Bool) 1970560362405706524LL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9])))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9]))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) arr_33 [14ULL] [14ULL] [i_10]))));
                    var_27 = ((/* implicit */long long int) ((unsigned char) arr_32 [i_9] [i_9] [i_9]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15015)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55039))) : (arr_37 [i_12])));
        var_29 ^= ((/* implicit */unsigned short) var_2);
        /* LoopNest 2 */
        for (short i_13 = 1; i_13 < 22; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) var_1);
                    arr_43 [i_13] = ((/* implicit */long long int) (unsigned char)243);
                }
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) min((var_7), (((/* implicit */short) (_Bool)1)))))));
        var_32 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (short)-27162)))))) || (((/* implicit */_Bool) var_8)))), (((((/* implicit */_Bool) var_0)) || (arr_36 [i_15] [i_15])))));
    }
    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (4071977978051214518LL))))));
    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_4))));
    var_35 -= ((/* implicit */unsigned long long int) var_1);
}
