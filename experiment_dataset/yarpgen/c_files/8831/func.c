/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8831
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */short) var_16);
                var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1]))) & (((/* implicit */int) arr_0 [(_Bool)1]))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (((((~(((/* implicit */int) arr_0 [i_0 + 1])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_2 [i_0])))) + (241))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) (unsigned char)81))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6076989868114374368ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1453279639U)) && (((/* implicit */_Bool) (signed char)88)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1200636487)))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_8 [i_2] [9ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((arr_6 [10ULL]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned char)73)) >= (((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 59377082579857191LL)) ? (((long long int) 8139269755205973545ULL)) : (min((((/* implicit */long long int) var_13)), (3614825196505472914LL)))))) : ((-(var_16)))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((max((var_6), (var_7))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_2]))))))) & (max((((/* implicit */unsigned long long int) (+(1911144078U)))), (min((((/* implicit */unsigned long long int) arr_7 [i_3])), (var_11)))))));
                    var_24 = ((/* implicit */signed char) -6058063224188612026LL);
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_7 [i_3])))))) ? (min((arr_6 [i_2]), (((/* implicit */long long int) (!((_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)0))))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_17 [(unsigned char)6] [(short)11] [i_5] = 28488312U;
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_6 [i_2]))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            arr_20 [i_2] [i_2] = ((unsigned long long int) (short)-15704);
            arr_21 [i_2] [i_2] [i_6] = ((/* implicit */short) ((unsigned short) (unsigned char)60));
        }
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            arr_25 [i_7] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) arr_12 [i_2] [i_7])), (arr_22 [i_2] [(unsigned short)8] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_7] [i_2]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19554)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)27))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_7]))) / (var_4)))))));
            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)8637)))) ? (((/* implicit */int) (signed char)66)) : (((((/* implicit */_Bool) 1125899906842623ULL)) ? (2147483647) : (((/* implicit */int) arr_12 [i_2] [i_2]))))))) ? (((/* implicit */int) (!(arr_12 [i_2] [i_7])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)5])) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_18 [i_2] [i_7])) : (((/* implicit */int) ((arr_15 [(short)0] [i_7]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_8 = 4; i_8 < 23; i_8 += 2) 
    {
        var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_27 [i_8 - 2]))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 4113776119U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))) : (arr_26 [i_8 - 3])));
    }
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32737)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43880))) : (((((/* implicit */_Bool) ((3147699307098321498LL) << (((18446744073709551615ULL) - (18446744073709551614ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)661))) : (0ULL)))));
}
