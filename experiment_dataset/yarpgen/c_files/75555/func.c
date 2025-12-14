/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75555
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (short)26510))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))))));
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37411)) ? (((/* implicit */int) (unsigned short)36880)) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)26510)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_14 [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                        var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37411))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-1895343715542131445LL)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 4; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_5 + 2])) ? (((((/* implicit */_Bool) -397603954)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (var_9));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) arr_11 [i_1] [8ULL] [13LL])))) : (((/* implicit */int) var_12)))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 4; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) (unsigned short)11027)) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))));
                            arr_19 [i_6] [i_6] [i_3] [i_3] [i_2 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22588))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_6 + 2] [i_3 - 1] [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_15 [i_6 - 2] [i_3 + 1] [i_3] [(unsigned short)5] [i_2 - 1])) : (((/* implicit */int) var_4))));
                        }
                        arr_20 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) var_8);
                        var_23 = ((/* implicit */int) (short)22589);
                    }
                } 
            } 
        } 
        arr_21 [i_1] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_15)))))), (min((((/* implicit */unsigned long long int) ((((var_9) + (2147483647))) << (((((var_6) + (4951979059927938411LL))) - (5LL)))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26507))) : (arr_12 [0LL] [0LL] [i_1] [0LL]))))));
        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((((/* implicit */int) (short)-26507)) + (2147483647))) << (((((((/* implicit */int) var_15)) + (12415))) - (3)))))))) : (((((/* implicit */_Bool) (short)-7197)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10680))) : (-1LL)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)-26504)))) ? (232835678) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (arr_16 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (arr_7 [(short)2] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(arr_7 [i_1] [i_1] [i_1]))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)12238))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 14; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                for (short i_10 = 4; i_10 < 14; i_10 += 2) 
                {
                    {
                        arr_34 [i_9] [i_9] [i_8] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_9)), (arr_32 [i_7]))) : (arr_32 [i_8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_10))))))))));
                        arr_35 [i_7] [i_8] [i_9 + 2] [i_9 - 1] [i_10] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((short)22588), ((short)-26504)))) - (((/* implicit */int) min(((unsigned short)50247), (((/* implicit */unsigned short) (short)-7177)))))));
                    }
                } 
            } 
        } 
    }
}
