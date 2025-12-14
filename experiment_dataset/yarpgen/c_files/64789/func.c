/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64789
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
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_0])), (arr_3 [i_1] [i_1] [i_1])));
                arr_6 [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (arr_3 [i_0] [i_0 + 1] [i_0 + 3]))) > (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 3) 
    {
        arr_9 [i_2 + 2] = ((/* implicit */unsigned short) max((3U), (((/* implicit */unsigned int) (unsigned char)128))));
        arr_10 [i_2] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 2])) || (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) 1461785305U)) ? (4294967290U) : (4294967288U))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    arr_19 [i_3] = (((!(((/* implicit */_Bool) ((20U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (arr_14 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_13 [i_4]), (arr_7 [i_5] [i_4]))) > (((((/* implicit */_Bool) arr_14 [i_5])) ? (var_10) : (((/* implicit */unsigned int) arr_11 [(signed char)19] [i_4])))))))));
                    arr_20 [i_4] = ((/* implicit */unsigned char) arr_16 [i_5] [i_4] [i_3] [i_3]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) arr_11 [i_3] [i_3]);
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_8 [i_3] [i_3]))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                arr_27 [i_7] [i_7] [i_3] [i_3] = ((/* implicit */signed char) arr_11 [i_3] [i_7]);
                arr_28 [i_6] [i_7] = ((/* implicit */unsigned char) arr_15 [i_3]);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_29 [i_3] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_22 [i_6] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) <= (4294967288U))))) : (2069188318U))), (arr_24 [i_3] [i_6] [i_7])));
            }
        }
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) arr_11 [i_3] [i_3])) >= (arr_13 [i_3]))) ? (((/* implicit */int) arr_16 [i_8] [i_8] [i_3] [i_3])) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_8]))))), (9U)));
            var_22 = ((/* implicit */unsigned char) min((3868724561U), (((/* implicit */unsigned int) (_Bool)1))));
        }
        arr_32 [i_3] = ((((/* implicit */_Bool) (-(arr_17 [(_Bool)1] [i_3] [i_3] [i_3])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_3]))))));
        arr_33 [i_3] &= ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) ((_Bool) (_Bool)1))) - (1)))));
    }
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_21 [i_9]), (arr_34 [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_9] [i_9] [i_9]))) || (((/* implicit */_Bool) arr_11 [i_9] [i_9])))))) : ((+(max((arr_13 [i_9]), (((/* implicit */unsigned int) (unsigned short)42061))))))));
        arr_36 [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) 10787714903628481558ULL));
        arr_37 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_21 [i_9]))));
    }
}
