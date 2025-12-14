/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61473
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_11 += ((/* implicit */unsigned int) max((((unsigned short) (unsigned char)243)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [i_0 + 2])))))));
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((unsigned int) var_4)) : (((unsigned int) (_Bool)1)))) <= (((var_2) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)222)) : (-1566685588)))) : (max((((/* implicit */unsigned int) (unsigned char)2)), (arr_2 [i_0])))))));
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((unsigned int) max((2655429799U), (((/* implicit */unsigned int) (short)-26173))))))));
            var_13 = ((/* implicit */_Bool) (~(var_9)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */_Bool) var_6);
            /* LoopNest 3 */
            for (unsigned int i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0 - 3] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */int) arr_7 [i_0] [i_3] [i_5 - 2]);
                            var_15 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                            arr_16 [i_0] [i_2] [i_2] [i_2] [i_5 - 4] [i_3] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) << (((arr_13 [i_0 - 1] [i_0] [i_3 + 1]) - (1980475985)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) << (((((arr_13 [i_0 - 1] [i_0] [i_3 + 1]) - (1980475985))) + (1844508588))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (((+(((/* implicit */int) var_3)))) < (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_1)))))))));
                            var_16 = ((/* implicit */signed char) ((short) 0ULL));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_2] [i_0] [i_0] [13ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [i_0] [i_0])))))) : (max((((/* implicit */long long int) var_10)), (1948782189940252987LL))))));
            var_18 = var_0;
        }
        var_19 += ((/* implicit */unsigned short) var_6);
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (short i_7 = 2; i_7 < 8; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 7; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) max((arr_26 [i_7 - 1] [i_7] [i_7] [i_7 + 2] [i_7 + 2]), (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) var_0))))))))));
                        var_21 = ((/* implicit */unsigned char) ((_Bool) 2899521504U));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) var_7);
        var_23 = ((/* implicit */unsigned char) (-(-2997621785392613618LL)));
    }
    var_24 = ((/* implicit */unsigned char) (+(((long long int) ((unsigned short) 1948782189940252987LL)))));
    var_25 -= ((/* implicit */signed char) max((var_2), (var_8)));
    var_26 = max((var_8), (max((var_0), (var_7))));
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        for (int i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            {
                arr_36 [i_10] [i_10] [i_10] &= ((/* implicit */int) (-9223372036854775807LL - 1LL));
                arr_37 [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_30 [i_11] [i_11]) : (((/* implicit */int) (signed char)5))))) ? (((/* implicit */int) arr_35 [i_11])) : ((-(((/* implicit */int) var_10))))))) ? (((-7433009686932974535LL) | (((/* implicit */long long int) ((/* implicit */int) (short)26173))))) : (((/* implicit */long long int) (~(arr_29 [i_11]))))));
                var_27 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_32 [i_10] [i_11])), (9223372036854775794LL)))) ? ((~(((/* implicit */int) (short)29805)))) : ((~(((/* implicit */int) var_6)))))) + (2147483647))) << (((((/* implicit */int) var_1)) - (96)))));
                arr_38 [i_11] [i_11] [i_11] = ((/* implicit */short) ((var_0) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_32 [i_10] [i_11]))))) ? (((((/* implicit */_Bool) 2093005867U)) ? (arr_29 [i_10]) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_3)))) : (arr_30 [i_11] [i_10])));
                var_28 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) ((unsigned char) 1395445790U))) : (((/* implicit */int) ((_Bool) (short)26173)))))));
            }
        } 
    } 
}
