/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87578
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_1 [i_0])))) ? (max((((/* implicit */unsigned int) (short)15283)), (var_7))) : (((/* implicit */unsigned int) min((1571071935), (2012152026)))))) : (((/* implicit */unsigned int) (+(arr_2 [i_0]))))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [0] = ((/* implicit */int) (signed char)3);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0]) / (((/* implicit */int) (short)-6705))))) ? ((+(((/* implicit */int) (unsigned char)116)))) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_1]))));
        arr_10 [i_1] [(signed char)5] = 511ULL;
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            var_14 = ((/* implicit */int) max((var_14), (((((((var_1) + (2147483647))) >> (((((/* implicit */int) (signed char)-4)) + (25))))) ^ (((/* implicit */int) var_5))))));
            arr_17 [i_2] = ((/* implicit */short) var_1);
        }
        var_15 = ((/* implicit */int) min((var_15), ((-((-(((/* implicit */int) (short)5320))))))));
        var_16 *= ((/* implicit */unsigned int) (unsigned char)23);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        arr_30 [i_6] [i_6] [i_5] [i_7] [i_5] |= ((/* implicit */unsigned short) ((((-1571071935) + (2147483647))) >> ((((~(((/* implicit */int) var_3)))) + (23732)))));
                        arr_31 [i_6] [i_5] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(short)19])) ? (((/* implicit */int) arr_23 [i_4] [i_5])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (unsigned short)59900)))))));
                        var_17 += ((/* implicit */unsigned int) min((min((((/* implicit */int) ((_Bool) -666223111))), ((+(var_8))))), (((((/* implicit */int) arr_18 [i_5] [i_5])) << (((((unsigned long long int) var_6)) - (244ULL)))))));
                        var_18 &= (_Bool)1;
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_5])) ? (((/* implicit */int) arr_23 [i_5] [i_5])) : (((/* implicit */int) arr_23 [i_7] [i_5]))))) != (12927039425189316252ULL)));
                    }
                } 
            } 
        } 
        arr_32 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_4] [i_4])) ? ((+(((/* implicit */int) arr_19 [i_4])))) : ((~((+(((/* implicit */int) arr_24 [(short)17] [i_4] [i_4]))))))));
    }
    var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (157543998) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) -1571071928)) ? (959264394U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))) | (var_10));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_22 = ((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)));
    var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((-1136614032) >= (((/* implicit */int) var_11))))) ^ (var_8)))) ? (((/* implicit */int) (short)27038)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
}
