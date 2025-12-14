/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91950
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((unsigned long long int) ((unsigned short) (+(10162757156535128296ULL))));
        var_15 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) arr_0 [i_0 - 3])))));
        var_16 = ((/* implicit */unsigned int) ((5488428807280945608LL) >> ((((+(3617785589U))) - (3617785527U)))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3617785612U)) ? (((/* implicit */long long int) 3617785607U)) : (-2305843009213693952LL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [(unsigned char)4] [10LL] [i_2 + 1])) << (((/* implicit */int) arr_4 [2LL] [4] [i_2 + 2])))))));
            /* LoopSeq 2 */
            for (int i_3 = 4; i_3 < 14; i_3 += 1) 
            {
                var_19 |= ((/* implicit */int) ((arr_7 [3] [i_2 + 1]) + (arr_7 [(signed char)5] [i_2 + 1])));
                var_20 = ((/* implicit */_Bool) (signed char)54);
                arr_9 [(unsigned char)16] [(signed char)7] [(short)16] [(_Bool)1] = ((/* implicit */signed char) 1778405630);
                var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) 12310992825196502686ULL)) && (((/* implicit */_Bool) (-(var_13))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_22 -= ((/* implicit */short) ((unsigned long long int) var_13));
                    var_23 &= ((/* implicit */signed char) (+(((unsigned int) 12310992825196502696ULL))));
                }
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_24 = ((/* implicit */signed char) 30720U);
                    var_25 |= ((/* implicit */long long int) (+(arr_5 [i_1] [i_2 + 1] [i_3 - 2])));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) % (-492919932)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54078))) : (((arr_6 [(short)5]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                }
            }
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_28 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483647))));
                arr_16 [11LL] [9LL] [14] [(signed char)9] |= ((/* implicit */signed char) arr_6 [(unsigned char)3]);
            }
            var_29 = ((/* implicit */unsigned int) ((4294936575U) < (1731475455U)));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2292586909U))));
                arr_20 [9LL] [3LL] [(unsigned short)12] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (6135751248513048926ULL)));
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-178))) % (18446744073709551602ULL)))) && (arr_17 [14U]))))));
            }
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (arr_8 [(signed char)0] [(short)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [(short)12])) != (var_11)))))));
        }
        arr_21 [(short)11] &= 14475602356385099007ULL;
    }
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((3617785612U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))))))) - (var_13)));
}
