/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98022
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (16352U)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 |= ((((/* implicit */long long int) ((((/* implicit */_Bool) max((16337U), (4294950954U)))) ? (((((/* implicit */_Bool) 16352U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53084))) : (4294950956U))) : (((/* implicit */unsigned int) (~(arr_1 [i_0]))))))) != (((arr_0 [i_0] [i_0]) % (-196456454148809261LL))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_12 = ((unsigned char) (-(8942148221811309708LL)));
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) 16349U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_14 = arr_0 [i_1] [i_2];
                            var_15 = ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3] [i_4])) || (((/* implicit */_Bool) var_1)));
                            arr_13 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (var_1)));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 0LL))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            }
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_1]))));
                        }
                    } 
                } 
                arr_24 [i_0] [i_5] = ((/* implicit */short) 0LL);
            }
        }
        var_19 = ((/* implicit */unsigned short) var_9);
    }
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 4) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned long long int) var_4);
        var_20 = ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (arr_5 [i_8] [i_8 + 1] [i_8 + 1]));
        var_21 = var_0;
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])) ? (4294950939U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (~(8942148221811309711LL))))));
                        arr_38 [i_8 - 1] [i_8] [i_9] [i_10] [i_11 - 1] [i_12] = ((/* implicit */long long int) (short)-5881);
                    }
                    var_24 = ((/* implicit */signed char) (+(arr_9 [i_11] [i_10] [i_10] [i_9] [i_8 + 1])));
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) 820891999U);
                arr_41 [i_8] [i_8] [i_9] [i_13] = ((/* implicit */_Bool) (~(((var_6) ? (var_9) : (13LL)))));
                var_26 |= ((/* implicit */long long int) var_4);
                var_27 = ((/* implicit */unsigned char) var_5);
            }
            var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        }
        var_29 = ((/* implicit */unsigned long long int) (short)-32742);
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (16363U))) ? ((~(196456454148809242LL))) : (-8942148221811309686LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))));
}
