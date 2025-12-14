/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55214
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((long long int) (unsigned short)62760));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((/* implicit */int) (short)-4922)))))));
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
    var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (short)4919))) & (((/* implicit */int) (short)4921))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4923)) + (((/* implicit */int) (short)-4925))))), (((unsigned long long int) (_Bool)1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) + (arr_4 [i_1] [i_1])));
        var_20 = ((/* implicit */int) var_6);
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned long long int) var_3)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (short)4921))));
        var_22 += ((/* implicit */unsigned char) (short)-4911);
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_4 - 1] [i_3 - 1]))));
            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-36))));
            var_25 = ((/* implicit */_Bool) (signed char)107);
            arr_15 [(short)4] [i_4 - 1] [(short)4] &= ((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) var_12)));
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) arr_2 [i_3 - 1]))));
        var_27 = ((/* implicit */signed char) ((_Bool) var_3));
    }
    /* LoopSeq 2 */
    for (int i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((var_15) ? (((/* implicit */int) arr_19 [i_5 - 2])) : (((/* implicit */int) (unsigned char)127)))) + (((/* implicit */int) max((((/* implicit */short) (signed char)-36)), (arr_17 [i_5 + 1])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_29 = ((_Bool) (+(((((/* implicit */int) arr_23 [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_19 [i_6]))))));
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_5))));
            arr_24 [i_6] [i_5] = ((/* implicit */unsigned int) ((unsigned short) (~(var_4))));
            arr_25 [i_5] = ((/* implicit */signed char) max(((-2147483647 - 1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) arr_23 [i_5] [i_6] [10ULL])) : (((/* implicit */int) (_Bool)0))))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                var_31 = ((/* implicit */long long int) min((var_31), (((((/* implicit */_Bool) 1265694574637319625ULL)) ? (((/* implicit */long long int) (+(375085511)))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52103))) : (6062063604269149610LL)))))));
                arr_30 [i_5 - 2] [(short)9] [i_5 - 2] [i_7] = ((/* implicit */long long int) 17181049499072231991ULL);
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_32 = ((/* implicit */short) var_0);
            var_33 = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) -8244945003510180545LL))), ((((+(((/* implicit */int) var_12)))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (var_4))) + (99)))))));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((int) var_1)))) | ((+((-(((/* implicit */int) (_Bool)1))))))));
            var_35 = ((/* implicit */signed char) (-(((((/* implicit */int) max(((signed char)107), (((/* implicit */signed char) arr_33 [i_5] [i_8] [i_5 + 1]))))) << (((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_8]))))))))));
        }
    }
    for (int i_9 = 2; i_9 < 21; i_9 += 1) 
    {
        var_36 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (short)-4919)) ? (((/* implicit */int) var_3)) : (arr_35 [i_9]))) & (arr_35 [i_9 + 3]))), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_36 [i_9] [i_9])) ? (arr_35 [i_9]) : (((/* implicit */int) (short)4140))))))));
        var_37 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532)))))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((-(arr_35 [i_9 - 2])))));
        var_38 = ((/* implicit */int) ((min((-9223372036854775788LL), (((/* implicit */long long int) min(((unsigned char)211), (((/* implicit */unsigned char) (_Bool)1))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (unsigned char)44)))))) + ((+(var_2)))));
    }
}
