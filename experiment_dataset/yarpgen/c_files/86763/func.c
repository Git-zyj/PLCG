/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86763
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
    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_4), (var_2))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) 64342011143837567LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))) : (max((var_9), (var_11)))))) : (max((((/* implicit */long long int) ((var_19) % (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), (((var_17) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_21 *= var_2;
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_14);
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_17))))));
            var_22 = ((/* implicit */unsigned int) (+(11)));
            var_23 = (~((-(((/* implicit */int) arr_1 [i_1] [0])))));
            var_24 += ((/* implicit */unsigned short) arr_1 [i_2] [i_2]);
        }
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [0U])) ? (arr_4 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [6] [6] [i_4]))) : (64342011143837576LL))) : (arr_6 [i_1 - 1])));
                arr_18 [(short)1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)135)))));
                var_26 &= ((/* implicit */unsigned int) (unsigned short)1912);
                arr_19 [i_4] = ((/* implicit */unsigned long long int) ((long long int) arr_13 [i_1] [i_1 + 1]));
            }
            var_27 = ((/* implicit */short) -64342011143837567LL);
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) -1941098522)) ? (1155173720U) : (((/* implicit */unsigned int) 1967508893))));
            arr_23 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_5] [i_1 - 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (6750694089312061561LL) : (((/* implicit */long long int) var_14))))) && (((/* implicit */_Bool) arr_12 [i_1 - 3] [i_1 - 2] [i_1 - 3]))));
        }
        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                arr_30 [i_1] [i_7] = ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) arr_27 [i_1] [i_1 + 1] [i_7])) : (((/* implicit */int) arr_14 [i_1] [i_1 - 2] [i_1])));
                arr_31 [i_6] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_22 [i_1]))))));
            }
            var_30 = ((/* implicit */long long int) (unsigned char)255);
        }
        /* LoopSeq 4 */
        for (short i_8 = 2; i_8 < 9; i_8 += 2) /* same iter space */
        {
            arr_35 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_17))))));
            arr_36 [i_1] [i_1] [i_1] = 64342011143837567LL;
        }
        for (short i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
        {
            arr_39 [i_1] [i_9] [i_9] = arr_12 [i_1] [i_1] [i_1];
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) arr_29 [i_1])) ? (64342011143837557LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))) : (var_1)));
        }
        for (short i_10 = 2; i_10 < 9; i_10 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_10 + 2] [i_10])))))));
            var_33 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 13030013266569548082ULL)) ? (arr_41 [4LL] [i_1]) : (arr_41 [(short)1] [i_10])))));
            arr_42 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)57776)) ? (1389718895U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
            arr_43 [i_1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_10] [i_10])) ? ((~(((/* implicit */int) (short)28116)))) : (1134408180)));
        }
        for (short i_11 = 2; i_11 < 9; i_11 += 2) /* same iter space */
        {
            arr_47 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_1] [i_1] [i_11]))))) ? (((/* implicit */int) arr_29 [i_1 - 2])) : (((/* implicit */int) (!(var_6))))));
            arr_48 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))) >> (((((var_3) ? (((/* implicit */long long int) var_9)) : (64342011143837562LL))) - (64342011143837552LL)))));
            arr_49 [(unsigned char)11] = ((/* implicit */unsigned int) ((-8351002571455933376LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        }
    }
    var_34 = min((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)4499))))))), (4153174033U));
    var_35 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned short)63741), (((/* implicit */unsigned short) (unsigned char)213)))))))), (var_1)));
}
