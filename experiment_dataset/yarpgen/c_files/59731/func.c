/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59731
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_3 [i_0]))) < (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)0), (var_16)))) != (((/* implicit */int) min(((unsigned char)239), (var_12)))))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-6949)))) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)14351)))))) : (((/* implicit */int) arr_4 [i_0] [i_1]))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_9 [i_0] [(unsigned char)9] [(short)14] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_8 [i_2] [i_0] [i_0]))))))) ? (((/* implicit */int) ((short) (short)15872))) : ((+(((/* implicit */int) ((short) arr_1 [i_2])))))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(unsigned char)9]))))) ? (((/* implicit */int) max((((short) var_16)), (((/* implicit */short) ((unsigned char) (unsigned char)248)))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) (short)-11)))))))));
            var_18 = var_9;
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */int) (short)32747)) ^ (((/* implicit */int) arr_7 [i_0] [i_3]))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_12 [(short)24])))) ? (((/* implicit */int) ((short) arr_4 [i_0] [i_3]))) : (((((/* implicit */_Bool) (short)-10287)) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_0 [i_0]))))));
        }
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        arr_20 [i_0] [(short)24] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)0)) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) << (((((/* implicit */int) var_16)) - (208)))))) ? (min((((/* implicit */int) ((unsigned char) arr_5 [i_4] [i_4] [i_4]))), ((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) ((short) ((unsigned char) arr_5 [i_6] [i_5] [i_0]))))));
                        arr_21 [i_0] [(short)12] [(short)24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        arr_22 [i_0] = var_14;
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_12))) ? (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_30 [i_0] [i_7] [(unsigned char)7] [i_7])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)239)))))) : (((((((/* implicit */int) arr_3 [i_7])) | (((/* implicit */int) var_12)))) ^ (((/* implicit */int) arr_0 [i_7]))))));
                    var_21 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)12)), (arr_18 [i_0] [i_7] [i_0] [i_0] [(unsigned char)6])))))))));
                    var_22 ^= ((/* implicit */short) (-(((((/* implicit */int) arr_3 [i_8])) ^ (((/* implicit */int) arr_3 [i_7]))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
    {
        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)17))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_31 [i_9] [i_9])) : (((/* implicit */int) arr_19 [i_9])))))) : (((((/* implicit */int) min(((unsigned char)112), (arr_15 [i_9])))) & (((/* implicit */int) (unsigned char)16))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */int) arr_28 [i_9])) != (((/* implicit */int) (short)32720))))), ((~(((/* implicit */int) (short)-32760)))))) & ((~(((/* implicit */int) ((unsigned char) var_9))))))))));
    }
    for (short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_12 [i_10])))) < (((/* implicit */int) ((((/* implicit */int) arr_12 [i_10])) >= (((/* implicit */int) var_9)))))));
        arr_37 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((arr_14 [i_10] [i_10]), ((unsigned char)59))))) ? (((((/* implicit */_Bool) arr_33 [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (unsigned char)102))));
    }
    var_25 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
    var_26 = ((/* implicit */short) (~(((/* implicit */int) var_15))));
}
