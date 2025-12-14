/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55713
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
    var_11 = ((/* implicit */long long int) (short)-32764);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_12 = ((((((/* implicit */_Bool) (unsigned short)30344)) ? (min((1286643961949215741LL), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) var_1)) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0]))))))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(min(((-2147483647 - 1)), (((/* implicit */int) arr_0 [(signed char)14])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (long long int i_3 = 4; i_3 < 15; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */int) var_9);
                    var_14 &= ((/* implicit */short) min((-3934726602021316950LL), (-1286643961949215741LL)));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) var_3);
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_12 [i_4])) || (((/* implicit */_Bool) 4096)))))) || (((/* implicit */_Bool) ((int) min((((/* implicit */unsigned short) var_10)), (arr_4 [8]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            arr_18 [i_5] [i_5] = ((/* implicit */int) var_8);
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) ((4119) ^ (((/* implicit */int) arr_8 [i_4] [i_4] [i_5] [i_5]))))) : (var_2)));
            var_17 = ((/* implicit */signed char) 3934726602021316954LL);
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_18 = ((/* implicit */_Bool) ((1939724575U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36714)))));
                var_19 = ((/* implicit */unsigned short) arr_2 [i_4]);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20265)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_6 [i_6])))) : (((((/* implicit */_Bool) -864121097)) ? (((/* implicit */int) arr_8 [i_4] [i_5] [i_5] [i_6])) : (((/* implicit */int) (short)504))))));
                var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_23 [i_5] = ((/* implicit */signed char) 3611277503U);
            }
            for (int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            arr_32 [i_7] [11U] [i_5] [i_4] = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
                            arr_33 [i_4] [i_5] [i_7] [i_5] [i_9] = ((/* implicit */long long int) arr_5 [i_4]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) var_5);
            }
        }
        var_23 *= ((/* implicit */_Bool) arr_2 [i_4]);
        arr_34 [i_4] = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 454928335)) - (2648742890U)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (short)0)) ? (-442942842) : (var_4)))))) : (((((/* implicit */_Bool) (unsigned short)64888)) ? (min((((/* implicit */long long int) var_3)), (-7018504907434853917LL))) : (min((((/* implicit */long long int) 25U)), (arr_2 [i_4]))))));
    }
}
