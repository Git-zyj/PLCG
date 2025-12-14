/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70789
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
    var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)1023), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? ((-(var_9))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)20))))))) : (min((((/* implicit */unsigned int) var_9)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515))) * (var_7)))))));
    var_11 = ((/* implicit */signed char) (unsigned short)21);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (var_9)));
    var_13 += ((/* implicit */short) ((unsigned short) var_7));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (min((((((/* implicit */int) (unsigned short)65515)) >> (((/* implicit */int) var_4)))), (((/* implicit */int) var_2))))));
        var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38)) ? (((/* implicit */int) arr_1 [i_0])) : (var_9)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)65515)))), (min((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) (unsigned short)36))))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_1 [i_1 - 2]))));
                        arr_11 [i_3 - 1] [i_3 - 1] [i_0] [9] = ((/* implicit */short) arr_4 [i_3 - 2] [i_1 + 1]);
                        arr_12 [i_0] [i_0] [(short)12] [i_0] = (~(((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_1 - 2] [i_1 - 2])) ? (((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) (unsigned short)14)))) : (((((/* implicit */_Bool) arr_8 [i_0] [(short)17] [i_0] [i_0] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) (short)7977)) : (((/* implicit */int) var_3)))))));
                        var_15 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
            var_16 -= ((/* implicit */unsigned char) (short)-6535);
            var_17 = ((/* implicit */unsigned char) var_4);
            arr_13 [i_0] [6U] [i_1] |= ((/* implicit */signed char) min(((~(arr_8 [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] [i_0]))), (((/* implicit */int) ((_Bool) max((arr_8 [i_0] [i_1] [i_1] [(unsigned char)16] [(unsigned char)16] [i_1]), (((/* implicit */int) (unsigned char)6))))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)21)))) : (((((/* implicit */int) arr_6 [i_1 + 1] [i_0] [i_1 - 2] [i_4 + 3])) & (((/* implicit */int) arr_16 [i_4] [i_0] [i_4 - 2] [i_4 + 4]))))));
                        var_19 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */int) (unsigned short)4095)), ((-2147483647 - 1)))) : (((/* implicit */int) (short)-32752)))) < (((/* implicit */int) var_4))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_23 [i_0] [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))) ? (((/* implicit */int) ((short) arr_6 [i_6] [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((_Bool) (unsigned short)20))));
            arr_24 [i_0] = ((((/* implicit */int) (unsigned short)17533)) | ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 13; i_7 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 + 1])) ? (((/* implicit */int) (short)29047)) : (((/* implicit */int) var_8))));
        arr_29 [i_7] = ((/* implicit */int) var_3);
    }
    for (int i_8 = 2; i_8 < 13; i_8 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) 127U);
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24)) || ((_Bool)1)))) ^ (((/* implicit */int) arr_15 [i_11] [(_Bool)1] [i_8])))), (((/* implicit */int) var_0))));
                        arr_38 [i_8] [(unsigned short)15] [(unsigned short)16] [i_8] = ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        } 
        arr_39 [i_8] = ((/* implicit */unsigned char) var_3);
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((short) (short)-1647)))) ? (((((/* implicit */_Bool) arr_9 [i_8] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_9 [i_8] [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) (unsigned short)65515)))) : (arr_22 [i_8])));
        var_24 = arr_6 [i_8] [i_8] [i_8] [i_8];
    }
}
