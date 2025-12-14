/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6162
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)76))))) ? ((+(5478820451949699824LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))));
                    var_14 &= (-(1364817444));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_16 &= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3]))))) ? ((~(((/* implicit */int) arr_2 [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3]))))))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((_Bool) arr_16 [i_3] [i_4])))));
                        arr_21 [i_3] [i_4] [i_5] [i_6] = (+((+(((/* implicit */int) arr_2 [i_6 + 1])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            arr_27 [13] [13] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_7] [i_8] [i_8] [i_8] [i_8])) ? (arr_13 [i_8] [i_7]) : (((/* implicit */long long int) arr_20 [i_8] [i_8] [i_8] [i_7] [i_7]))))));
            var_18 -= arr_3 [i_8] [i_7];
            arr_28 [i_8] [i_7] [i_7] = ((/* implicit */long long int) (((-((+(arr_18 [i_7] [8] [i_7] [i_7]))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_15 [i_7] [i_8]))))))));
        }
        arr_29 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_7] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7])))))) ? (((int) arr_8 [i_7] [i_7] [6LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_13 [i_7] [i_7])))))))));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)118))))) ? (((int) 3374573418022456120ULL)) : ((-(((/* implicit */int) var_1)))))) : ((-((+(((/* implicit */int) var_9))))))));
    var_20 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (short i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((long long int) (((-(((/* implicit */int) arr_3 [i_11] [i_9])))) == ((~(((/* implicit */int) arr_24 [7]))))))))));
                    arr_36 [i_9] [i_10] [i_11] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 763529195)))));
                }
            } 
        } 
    } 
}
