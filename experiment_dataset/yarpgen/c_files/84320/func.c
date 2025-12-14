/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84320
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
    var_11 = ((/* implicit */int) ((min((((1073741312) & ((-2147483647 - 1)))), (((((/* implicit */_Bool) (unsigned short)28862)) ? (((/* implicit */int) (unsigned short)16368)) : (((/* implicit */int) var_9)))))) < ((((-(((/* implicit */int) var_6)))) - (((var_5) / (((/* implicit */int) (unsigned short)49177))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)63706)) - (((/* implicit */int) (unsigned short)65513)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)36639)) * (((/* implicit */int) arr_3 [i_0] [i_0])))) / (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [19])) : (arr_1 [(unsigned short)5]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)38492)) && (((/* implicit */_Bool) -1331654729))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_13 = ((((/* implicit */_Bool) 1123678515)) ? (2066080613) : (1504515104));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [i_4]);
                        arr_16 [i_1] [i_1] [i_2] [i_1] [(unsigned short)9] [i_4] = (+(((86455602) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)632))))))));
                        var_14 ^= ((/* implicit */unsigned short) (((-(arr_5 [i_2] [i_4]))) % (((/* implicit */int) ((unsigned short) ((arr_5 [i_1] [i_2]) - (((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)60309)), (arr_25 [i_5] [i_6] [i_5]))) - (((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (536870912)))))) ? ((+(min((var_1), (((/* implicit */int) (unsigned short)65518)))))) : (((((((/* implicit */int) arr_23 [i_5])) / (arr_25 [i_5] [i_5] [i_5]))) / ((+(((/* implicit */int) arr_17 [i_5] [i_7])))))))))));
                    var_16 = ((/* implicit */unsigned short) arr_21 [i_7] [i_7] [i_7]);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_5]))))) == (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_17 [i_5] [i_5]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_2))) || (((/* implicit */_Bool) max((var_0), (max((-913512215), ((-2147483647 - 1)))))))));
}
