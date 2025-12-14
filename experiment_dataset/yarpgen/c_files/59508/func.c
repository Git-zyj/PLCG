/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59508
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
    var_19 = ((/* implicit */unsigned char) 3145728LL);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) arr_1 [i_1] [i_2])))) ? (arr_5 [i_0]) : (((/* implicit */int) max((arr_7 [7LL] [i_1] [i_2 - 3]), ((short)14820)))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (4032) : (((/* implicit */int) (signed char)-12))))))) ? (min((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) arr_6 [i_0 - 1] [i_1] [i_2]))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) var_15);
        /* LoopSeq 2 */
        for (long long int i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
            arr_13 [i_0] [i_0] [i_0] = arr_1 [i_3] [i_3 - 3];
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_18 [i_0] [i_3] [i_0] = ((long long int) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_1 [i_4] [i_4]))));
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_13)), (((max((((/* implicit */unsigned int) var_16)), (arr_3 [i_0] [i_5]))) ^ (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_2 [11])) : (((/* implicit */int) var_15)))))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) -4023))))))));
                    }
                } 
            } 
        }
        for (short i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_24 [i_0] [i_0] [(short)9] [i_7 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -635278028)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (((unsigned int) arr_20 [13LL] [i_7])));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_9)))))));
            }
            for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) max((arr_21 [i_0] [i_6] [i_0]), (((/* implicit */long long int) var_11))));
                var_25 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_23 [i_0] [i_0 + 1] [i_0]))))));
                var_26 -= ((/* implicit */long long int) arr_5 [i_6]);
            }
            arr_28 [(unsigned char)11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)14826)) + (((/* implicit */int) (short)-787))));
            var_27 = (~(((((/* implicit */_Bool) (short)-25961)) ? (((/* implicit */int) arr_22 [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_6]))))))));
            arr_29 [i_0 + 1] [i_0] [11LL] = ((/* implicit */long long int) var_8);
            var_28 = ((/* implicit */signed char) (-((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) ^ (arr_20 [i_0 - 1] [i_0 - 1])))))));
        }
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) -2147483638)))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) - (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_2) : (((/* implicit */unsigned int) arr_5 [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) 93499497U);
        arr_32 [i_9] = ((((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) 3599144034U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_9]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_9]))) & (arr_30 [i_9]))));
        var_31 = (~(((((/* implicit */int) arr_31 [i_9] [i_9])) >> (((2147483647) - (2147483643))))));
        arr_33 [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [20] [i_9]))))), ((~((-(arr_30 [i_9])))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) ((short) ((unsigned char) arr_34 [(_Bool)1])));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((unsigned int) var_8)))));
    }
    var_34 = ((/* implicit */signed char) var_18);
    var_35 = (+(((/* implicit */int) var_9)));
}
