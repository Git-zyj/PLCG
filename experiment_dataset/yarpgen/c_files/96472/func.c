/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96472
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            arr_5 [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((long long int) 8639344641506991212ULL));
            var_11 = ((/* implicit */unsigned short) arr_0 [i_1]);
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) 9807399432202560403ULL))));
            arr_9 [i_0] = ((/* implicit */signed char) (unsigned short)19125);
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
            {
                var_13 = ((/* implicit */signed char) ((unsigned int) arr_4 [9U] [i_3]));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (9807399432202560403ULL) : (((/* implicit */unsigned long long int) 419883274U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (8639344641506991227ULL)));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4 + 2] [i_4 - 1])) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) var_8))));
                var_16 = ((/* implicit */int) arr_3 [i_0] [i_3] [i_0]);
                var_17 = ((/* implicit */int) arr_0 [i_4]);
            }
            for (signed char i_5 = 1; i_5 < 16; i_5 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (arr_15 [i_3] [i_3] [i_5 + 2] [i_3]) : (((/* implicit */int) arr_0 [i_0])))))));
                var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18554))) : (arr_13 [i_5]))));
                var_20 = ((/* implicit */unsigned int) arr_10 [i_5] [i_5] [5U]);
            }
            arr_17 [i_0] = ((/* implicit */long long int) ((signed char) arr_1 [(short)1]));
        }
        var_21 = ((/* implicit */signed char) 0U);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) (+((~((-(9807399432202560403ULL)))))));
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_7] [i_8]))) < (((unsigned int) 4294967295U))));
                    var_24 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) arr_1 [i_6 - 1])))), (((/* implicit */int) var_1))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(max((var_5), (((/* implicit */int) arr_4 [i_0] [i_6 + 1])))))))));
                    var_26 = ((/* implicit */unsigned short) var_5);
                }
                for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    var_27 = ((/* implicit */signed char) arr_14 [i_9] [i_6] [(signed char)0]);
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8639344641506991192ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (arr_26 [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 1] [i_9 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_9 + 2] [i_6 + 2] [i_7] [i_0])) >> (((((/* implicit */int) arr_16 [(signed char)4] [i_6 - 1] [(signed char)4] [i_9])) - (11165)))))) : ((+(((((/* implicit */_Bool) 10488477585197766526ULL)) ? (8639344641506991212ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0] [7U] [i_7] [i_9]))))))))));
                    var_29 = ((/* implicit */unsigned long long int) ((int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                    var_30 = ((/* implicit */unsigned long long int) 3474900383U);
                    var_31 = ((/* implicit */unsigned long long int) 3474900383U);
                }
                for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    arr_35 [i_0] [i_6] [(signed char)16] [i_10] = ((/* implicit */signed char) 313644753U);
                    arr_36 [i_10] [i_7] [i_6 - 2] [i_0] [i_10] = (+(((((/* implicit */_Bool) arr_19 [i_0] [i_10 + 1] [i_6 - 1])) ? (arr_19 [i_0] [i_10 - 1] [i_6 + 2]) : (arr_19 [i_0] [i_10 - 1] [i_6 - 1]))));
                }
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) 3U))));
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19042))) / (9895836354147958902ULL)))));
                arr_37 [7U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_6 + 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_14 [i_0] [i_6 + 2] [i_7]))))) / (max((6840403172647487792ULL), (((/* implicit */unsigned long long int) 3474900376U))))));
            }
            arr_38 [i_6] = (signed char)-45;
            var_34 = ((/* implicit */signed char) ((unsigned int) ((signed char) var_7)));
        }
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        var_35 = ((signed char) ((signed char) (-2147483647 - 1)));
        var_36 = ((/* implicit */unsigned long long int) (signed char)65);
    }
    var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) 33554431U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) 4294967295U)) * (var_7))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_2))))) : ((~(17863072474206264879ULL))))))))));
}
