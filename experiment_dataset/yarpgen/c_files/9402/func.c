/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9402
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) var_9);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                var_15 ^= ((/* implicit */unsigned char) (+((~(var_5)))));
                arr_6 [i_0] [i_2] [i_2] = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_5)));
                var_16 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (536870911U)));
            }
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                arr_10 [i_0] [i_1] [(unsigned short)16] |= ((/* implicit */int) (-(((unsigned int) var_6))));
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-((-(((/* implicit */int) var_6))))));
            }
            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
            {
                var_17 |= ((signed char) var_12);
                /* LoopSeq 2 */
                for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    arr_17 [i_5] [i_4] [i_4] [i_0] [i_5] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_11)))));
                    arr_18 [i_0] [i_0] [(short)10] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                }
                for (unsigned short i_6 = 3; i_6 < 13; i_6 += 3) /* same iter space */
                {
                    arr_21 [i_4] [6ULL] = ((/* implicit */signed char) var_7);
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_0] [i_1 + 4] [i_4] [(_Bool)1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (0U) : (((/* implicit */unsigned int) -470409516))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((long long int) ((unsigned long long int) var_5)))));
                    }
                }
                var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            }
            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 3) 
                    {
                        var_20 ^= ((/* implicit */signed char) (~(var_13)));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((+(var_10))) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                    }
                    var_22 = ((signed char) var_11);
                    var_23 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_3))))));
                }
                var_24 = ((((/* implicit */int) (unsigned short)52742)) == (-1459175987));
                arr_35 [i_8] [i_1] [i_0] [i_8] = ((/* implicit */unsigned short) (~(4LL)));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    var_25 *= ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                    var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)145))));
                    var_27 ^= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_7)))) - ((~(((/* implicit */int) var_8))))));
                }
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    arr_40 [i_0] [i_8] [i_1] [i_0] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_10)));
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10))))));
                }
            }
        }
        for (unsigned short i_13 = 1; i_13 < 13; i_13 += 2) 
        {
            var_29 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_1))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))));
            var_30 &= (~((+(var_10))));
            arr_44 [i_13] |= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) var_11)), (min((var_9), (((/* implicit */unsigned long long int) var_4))))))));
            arr_45 [i_13 + 1] [(unsigned char)12] = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) ((unsigned char) -470409538))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 3) 
    {
        arr_49 [i_14] = ((/* implicit */_Bool) var_0);
        arr_50 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_10)))) >= ((-(var_1)))));
    }
    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_4))))))));
    /* LoopNest 2 */
    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
    {
        for (int i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            {
                arr_57 [i_16] [i_15] [i_15] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-25172)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)173)))), ((-((+(((/* implicit */int) var_6))))))));
                var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (_Bool)0)))));
            }
        } 
    } 
    var_33 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)14093)) > (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) : ((~(var_10))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
}
