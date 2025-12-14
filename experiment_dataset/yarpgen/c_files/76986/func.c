/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76986
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) ((signed char) arr_8 [i_3] [(_Bool)1] [(_Bool)1] [i_0])))))))));
                        var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) (((~((-2147483647 - 1)))) << (0U)))) & (min((906581051U), (((/* implicit */unsigned int) -1278646312))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            arr_13 [(unsigned short)10] = ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)31))) & (((/* implicit */int) (unsigned short)62835))))) || (((_Bool) min((var_1), (795166198)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_4 - 1] [i_4 + 4] [i_4 + 3]);
                arr_17 [6LL] [(_Bool)1] [i_5] = ((unsigned char) (signed char)28);
            }
        }
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */int) (short)619)) > (2147483647))))));
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_6] [i_6])) || (((/* implicit */_Bool) min(((signed char)127), (var_8)))))))));
            arr_21 [i_6] = ((/* implicit */long long int) (~(var_1)));
            arr_22 [i_0] [i_6] [i_6] = ((/* implicit */unsigned int) max((((arr_4 [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))));
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_14 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)208))))));
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 13; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) 1549615553U);
                        arr_32 [i_0] [i_7] [i_7] [i_9] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        arr_33 [12U] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_9 [i_7] [i_7])))))));
                        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) ((unsigned short) arr_7 [i_0] [i_7] [i_7] [i_7] [(_Bool)1] [i_7]));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 418719027U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57283))) : (var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_0))));
        }
        var_20 = ((/* implicit */_Bool) min((var_20), ((!(((((/* implicit */unsigned long long int) 0U)) < (9007199254740991ULL)))))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                {
                    var_21 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0])), (min((18437736874454810624ULL), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_11]))))));
                    arr_43 [i_0] [i_11] [i_12] = (+(((/* implicit */int) (signed char)28)));
                    var_22 *= ((/* implicit */signed char) ((unsigned char) var_9));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 511U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) -1467577695))) - (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (unsigned short)34933)) : (((/* implicit */int) (unsigned short)34933))))))) : (min((4092240662U), (((/* implicit */unsigned int) (unsigned char)255))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (arr_31 [i_13] [(unsigned char)14] [i_13] [(unsigned char)14]) : (((/* implicit */unsigned long long int) arr_12 [i_13])))), (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
        var_25 *= ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)76)), (-1384529222)));
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)151)))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_14 - 2] [i_14 - 2] [8U] [0] [i_14] [i_14])) ? (((/* implicit */int) arr_28 [i_14 - 2] [i_14] [2] [2] [i_14] [i_14])) : (((/* implicit */int) arr_35 [i_14 + 2] [i_14] [(_Bool)1]))));
        arr_51 [(signed char)2] = ((/* implicit */_Bool) ((arr_50 [i_14 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned short)0])))));
        var_28 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) <= (-1595176108))))));
    }
    var_29 = ((/* implicit */signed char) var_9);
}
